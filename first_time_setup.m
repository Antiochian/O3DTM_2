

confirmation_prompt = "This utility will populate the current working folder with the mphys_project_static filestructure. \nIs this OK? [Y/n]: ";
confirmation = input(confirmation_prompt,'s');

if ~strcmp(confirmation, "Y")
    fprintf("\n\tQuitting without making changes.\n");
    return
else
    fprintf("\n\tGenerating filesystem...\n");
    generate_file_system();
    
    file_location_prompt = "\nEnter filepath to source mphys_project_static folder (or enter 'q' to cancel):";
    source_file_location = input(file_location_prompt,'s');
    if strcmp(source_file_location, "q")
        fprintf("\n\tQuitting without making changes.\n");
        return
    end
    fprintf("\n\tPopulating datafiles (might take a while)...");
    populate_datafiles(source_file_location)
    fprintf("\nDone.\n\nDon't forget to set the static filepath in 'helper_functions/create_static_path.m' before continuing!\n");
end
