function static_path = create_static_path(internal_path)
% CREATE_STATIC_PATH returns location where large data files are stored
%
% CREATE_STATC_PATH(internal_path) returns file location of   .../mphys_project_static/internal_path
%
% CREATE_STATIC_PATH returns folder location of static folder .../mphys_project_static/


if nargin == 0
    internal_path = '';
end

% This is a very important pseudoglobal parameter you need to set to the
% current location of your 'mphys_project_static' folder.

% EG:  static_root = 'C:/user/O3DTM/mphys_project_static/';
static_root = '\\rivendell.physics.ox.ac.uk\user\students\2017\trin3161\Documents\O3DTM_experimental\mphys_project_static\';
static_path = [static_root, internal_path];
end