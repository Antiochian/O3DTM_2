function generate_file_system(root_dir)
% This function generates the entire "mphys_project_static" filestructure.
% The filestructure can be populated automatically by running 'populate_datafiles'
%
% This is compatible both with the new program and the original, so if only
% one or the other is being used, there will be a few empty/unused folders.



% NB: "Root_dir" is where the filestructure will be built.

if nargin < 1
    root_dir = '';
    fprintf("Building/verifying mphys_project_static folder in current directory\n");
end
root_dir = convertStringsToChars(root_dir);

if ~isempty(root_dir) && (root_dir(end) ~= '/' || root_dir ~= '\')
    root_dir = [root_dir , '\'];
end

mkdir( [root_dir, 'mphys_project_static']);
warning('off', 'MATLAB:MKDIR:DirectoryExists'); %suppress "folder already exists" warning

 
%generate empty data folders
mkdir( [root_dir, 'mphys_project_static\128_diviner_tbol'] );
mkdir( [root_dir, 'mphys_project_static\128_diviner_ltim'] );
mkdir( [root_dir, 'mphys_project_static\128_diviner_jd'] );
mkdir( [root_dir, 'mphys_project_static\128_ldem'] );
mkdir( [root_dir, 'mphys_project_static\16_diviner_jd'] );
mkdir( [root_dir, 'mphys_project_static\16_diviner_ltim'] );
mkdir( [root_dir, 'mphys_project_static\16_diviner_tbol'] );
mkdir( [root_dir, 'mphys_project_static\16_ldem'] );
mkdir( [root_dir, 'mphys_project_static\16_ldem\PDS_files'] );
mkdir( [root_dir, 'mphys_project_static\16_ldem\PDS_files\backup'] );
mkdir( [root_dir, 'mphys_project_static\4_diviner_jd'] );
mkdir( [root_dir, 'mphys_project_static\4_diviner_ltim'] );
mkdir( [root_dir, 'mphys_project_static\4_diviner_tbol'] );
mkdir( [root_dir, 'mphys_project_static\4_ldam'] );
mkdir( [root_dir, 'mphys_project_static\4_ldem'] );
mkdir( [root_dir, 'mphys_project_static\512_ldem'] );
mkdir( [root_dir, 'mphys_project_static\8_ldam'] );

%generate empty intermediate/output folders
mkdir( [root_dir, 'mphys_project_static\crater_environments'] );
mkdir( [root_dir, 'mphys_project_static\crater_environments\diviner_temperatures'] );
% Raytracing isnt generated for new prog, its left in for legacy reasons
mkdir( [root_dir, 'mphys_project_static\crater_environments\ray_tracing'] );
mkdir( [root_dir, 'mphys_project_static\crater_environments\ray_tracing\no_seasons'] );
mkdir( [root_dir, 'mphys_project_static\crater_environments\ray_tracing\seasons'] );
mkdir( [root_dir, 'mphys_project_static\crater_environments\ray_tracing\summary'] );
mkdir( [root_dir, 'mphys_project_static\crater_environments\ray_tracing\summary\no_seasons'] );
mkdir( [root_dir, 'mphys_project_static\crater_environments\ray_tracing\summary\seasons'] );

mkdir( [root_dir, 'mphys_project_static\ephemerides'] );

mkdir( [root_dir, 'mphys_project_static\outputs'] );
mkdir( [root_dir, 'mphys_project_static\outputs\3d'] );
mkdir( [root_dir, 'mphys_project_static\outputs\ls_temperatures'] );
mkdir( [root_dir, 'mphys_project_static\outputs\ls_temperatures_extremes'] );

mkdir( [root_dir, 'mphys_project_static\outputs\combo_temperatures'] );
mkdir( [root_dir, 'mphys_project_static\outputs\combo_temperatures\scattering'] );
mkdir( [root_dir, 'mphys_project_static\outputs\combo_temperatures\no_scattering'] );
mkdir( [root_dir, 'mphys_project_static\outputs\combo_temperatures\extremes'] );
mkdir( [root_dir, 'mphys_project_static\outputs\combo_temperatures\1D'] );


mkdir( [root_dir, 'mphys_project_static\plots'] );
mkdir( [root_dir, 'mphys_project_static\plots\ls_diviner_comparison'] );
mkdir( [root_dir, 'mphys_project_static\plots\ls_stability'] );
mkdir( [root_dir, 'mphys_project_static\plots\combo_output'] );

%turn warnings back on before finish
warning('on', 'MATLAB:MKDIR:DirectoryExists' );

fprintf("Filesystem skeleton populated/verified\n");