function generate_file_system()
% This function generates the entire "mphys_project_static" filestructure.
% The filestructure can be populated automatically by running 'populate_datafiles'

% This is compatible both with the new program and the original, so if only
% one or the other is being used, there will be a few empty/unused folders.

warning('off', 'MATLAB:MKDIR:DirectoryExists'); %suppress "folder already exists" warning

%generate empty data folders
mkdir('mphys_project_static\128_diviner_tbol');
mkdir('mphys_project_static\128_diviner_ltim');
mkdir('mphys_project_static\128_diviner_jd');
mkdir('mphys_project_static\128_ldem');
mkdir('mphys_project_static\16_diviner_jd');
mkdir('mphys_project_static\16_diviner_ltim');
mkdir('mphys_project_static\16_diviner_tbol');
mkdir('mphys_project_static\16_ldem');
mkdir('mphys_project_static\16_ldem\PDS_files');
mkdir('mphys_project_static\16_ldem\PDS_files\backup');
mkdir('mphys_project_static\4_diviner_jd');
mkdir('mphys_project_static\4_diviner_ltim');
mkdir('mphys_project_static\4_diviner_tbol');
mkdir('mphys_project_static\4_ldam');
mkdir('mphys_project_static\4_ldem');
mkdir('mphys_project_static\512_ldem');
mkdir('mphys_project_static\8_ldam');

%generate empty intermediate/output folders
mkdir('mphys_project_static\crater_environments');
mkdir('mphys_project_static\crater_environments\diviner_temperatures');
% Raytracing isnt generated for new prog, its left in for legacy reasons
mkdir('mphys_project_static\crater_environments\ray_tracing');
mkdir('mphys_project_static\crater_environments\ray_tracing\no_seasons');
mkdir('mphys_project_static\crater_environments\ray_tracing\seasons');
mkdir('mphys_project_static\crater_environments\ray_tracing\summary');
mkdir('mphys_project_static\crater_environments\ray_tracing\summary\no_seasons');
mkdir('mphys_project_static\crater_environments\ray_tracing\summary\seasons');

mkdir('mphys_project_static\ephemerides');

mkdir('mphys_project_static\outputs');
mkdir('mphys_project_static\outputs\3d');
mkdir('mphys_project_static\outputs\ls_temperatures');
mkdir('mphys_project_static\outputs\ls_temperatures_extremes');

mkdir('mphys_project_static\outputs\combo_temperatures');
mkdir('mphys_project_static\outputs\combo_temperatures\scattering');
mkdir('mphys_project_static\outputs\combo_temperatures\no_scattering');
mkdir('mphys_project_static\outputs\combo_temperatures\extremes');
mkdir('mphys_project_static\outputs\combo_temperatures\1D');


mkdir('mphys_project_static\plots');
mkdir('mphys_project_static\plots\ls_diviner_comparison');
mkdir('mphys_project_static\plots\ls_stability');

%turn warnings back on before finish
warning('on', 'MATLAB:MKDIR:DirectoryExists');

fprintf("Filesystem skeleton populated/verified\n");