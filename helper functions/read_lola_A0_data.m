function [albedo_data, LAT, LON] = read_lola_A0_data(ppd)
% READ_LOLA_A0_DATA loads LOLA albedo data
%
% [albedo_data, lat_arr, long_arr] = READ_LOLA_A0_DATA(ppd) reads and
% returns LOLA A0 for given ppd

pathname = 'download_Diviner_data';
addpath(pathname);
if nargin == 0 || ppd == 4
    image_location = create_static_path('4_ldam/ldam_4.jp2');
    filelocation = create_static_path('4_ldam/');
    filename = 'ldam_4_jp2';
elseif ppd == 8    image_location = create_static_path('8_ldam/ldam_8.jp2');
    filelocation = create_static_path('8_ldam/');
    filename = 'ldam_8_jp2';
else
    error('Unexpected PPD')
end
    

% read_lbl_file_data_lola

inp = strcat(filelocation,filename,'.lbl');
% fileID = fopen([filelocation,filename,'.lbl'],'r');
fileID = fopen(inp,'r');
text_data = fscanf(fileID,'%s');


pointer = strfind(text_data,'CENTER_LATITUDE');
CENTER_LATITUDE = find_str(text_data,pointer);
pointer = strfind(text_data,'CENTER_LONGITUDE');
CENTER_LONGITUDE = find_str(text_data,pointer);
pointer = strfind(text_data,'LINE_PROJECTION_OFFSET');
LINE_PROJECTION_OFFSET = find_str(text_data,pointer);
pointer = strfind(text_data,'MAP_RESOLUTION');
MAP_RESOLUTION = find_str(text_data,pointer);
pointer = strfind(text_data,'OFFSET');
OFFSET = find_str(text_data,pointer);
pointer = strfind(text_data,'SAMPLE_PROJECTION_OFFSET');
SAMPLE_PROJECTION_OFFSET = find_str(text_data,pointer);
pointer = strfind(text_data,'SCALING_FACTOR');
SCALING_FACTOR = find_str(text_data,pointer);

A = imread(image_location);
albedo_data = double(A);
albedo_data = (albedo_data*SCALING_FACTOR) + OFFSET;

LAT = NaN(1,size(albedo_data,1));
LON = NaN(1,size(albedo_data,2));
for LINE = 1:size(albedo_data,1)
    LAT(LINE) = CENTER_LATITUDE - (LINE - LINE_PROJECTION_OFFSET - 1) / MAP_RESOLUTION;
end
for SAMPLE = 1:size(albedo_data,2)
    LON(SAMPLE) = CENTER_LONGITUDE + (SAMPLE -SAMPLE_PROJECTION_OFFSET - 1) / MAP_RESOLUTION;
end
rmpath(pathname)
end

function back = find_str(text_data,pointer)

for i=pointer:pointer+50
    if(text_data(i) == '=')
        pointer =i;
        break
    end
end
count = 1;
for i=pointer:pointer+10
    if((double(text_data(i)) < 58 && double(text_data(i)) > 47) || double(text_data(i)) == 46 || double(text_data(i)) == 45)
        text_temp(count) = text_data(i);
        count = count +1;        
    end
end
back = str2num(text_temp);
end

