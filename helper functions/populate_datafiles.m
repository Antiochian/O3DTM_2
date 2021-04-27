function populate_datafiles(source)
% This utility function automatically copies all the raw Diviner/LOLA data
% we need from file location 'source' to a local mphys_project_static folder.

%Sanitize input a little
source = char(source);
if source(end) ~= '\'
    source = [source, '/'];
end

source = string(source);

dest = 'mphys_project_static\';

%list of folders needed to copy
data_folders = ["ephemerides";
                "128_diviner_jd";
                "128_diviner_ltim";
                "128_diviner_tbol";
                "128_ldem";
                "16_diviner_jd";
                "16_diviner_ltim";
                "16_diviner_tbol";
                "16_ldem";
                "4_diviner_jd";
                "4_diviner_ltim";
                "4_diviner_tbol";
                "4_ldam";
                "4_ldem";
                "512_ldem";
                "8_ldam"];

tic
for i = 1:numel(data_folders)
    fprintf(strcat("\tCopying: ",data_folders(i),"\n"));
    copyfile( strcat(source,data_folders(i)), strcat(dest,data_folders(i)) );
    fprintf(strcat("\t\t",data_folders(i)," copied\n"))
end
toc