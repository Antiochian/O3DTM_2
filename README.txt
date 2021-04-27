------------
DESCRIPTION:
------------
This program is designed to simulate surface and subsurface temperatures on the surface of the Moon over an extended (~10 years) period of time and save extreme temperature values (i.e. all-time maximum/minimum temperatures). Error-checking functionality via comparison with Diviner measurements is provided.

The main program entry-point is the "calculate_temperature_extremes.m" function, which launches one of three different forks of the Oxford 3D Thermophysical Model (O3DTM).
	- 1D: A simplistic legacy implementation of a 1D model proposed by Hayne, mostly used as a benchmarking tool.
	- Shadowing: A fast 3D model that takes into account shadowing effects but not scattering.
	- Multiscattering: A slower 3D model that takes into account shadowing & multiple scattering effects.

For more information on the original model (and the physics underpinning this one), see "The Oxford 3D Thermophysical Model with application to the Lunar PROSPECT Mission" (King et al 2020).

-----------------
QUICKSTART GUIDE:
-----------------
1. Run first time setup script to generate a local mphys_project_static folder and populate it by copying raw Diviner/LOLA/Horizons data from a source destination (follow the prompts).
	>>first_time_setup

2. Go into 'helper_functions/create_static_path' and edit the 'static_root' parameter.

3. Check that everything is working with a small test run of each mode. First as an example, we generate the smallest crater:
	>>generate_crater_environment('blagg4')

Then, run the simulation for each model:
	>>calculate_temperature_extremes('blagg4', '1D')
	>>calculate_temperature_extremes('blagg4', 'shadowing')
	>>calculate_temperature_extremes('blagg4', 'multiscattering')

Example output plots so you can check things are working as intended are provided. 
Note that the final output plot for 'blagg4' will look strange, since the test site is very small and only consists of 4 pixels. 

--------------------------
ADDING NEW TEST LOCATIONS:
--------------------------
Adding new simulation locations (or changing existing ones) is a common task. 
To do this, go into 'generate_crater_environment', and look at the switch case beginning line ~79.

79|switch crater_numel
80|	case '1'
81|		ls_lat = -79.30;
82|		ls_long = -56.00;
  |		etc...

Add a new ID number at the bottom of this switch statement and enter the desired central latitude and longitude in geodetic coordinates for 'ls_lat' and 'ls_long' respectively.
Later on at line ~111 there are a number of options for suffixes which determine the extent of the region surveyed.

111|if strcmp(crater_name(end-4:end), '_4ppd')
112|	lat_buffer = 2;
113|	long_buffer = 2;
114|	ppd = 4;
   |    etc...

The final region will survey 'ls_lat - lat_buffer' to 'ls_lat + lat_buffer', so the height and width of the area surveyed will be '2*lat_buffer' and '2*long_buffer' respectively. 'ppd' is the resolution of the sim (pixels per [geodetic] degree).
You may wish to change these, add your own custom suffixes, etc.

--------------------------
REGENERATING MEX-BINARIES:
--------------------------
MEX-compilation increases the program speed by 3-7 times (or more on lower-end computers!) and is an important part of the iteration cycle.
An example diagram demonstrating the place of MEX-compilation in the workflow is here: https://uk.mathworks.com/help/coder/ug/workflow-for-accelerating-matlab-algorithms.html

Generally, you make all the changes you want in the non-mex files (kept in the 'raw_mexable' folder), and test on a small crater so that the slowness isn't an issue. Then when you are finished making changes, you recompile the MEX code for speed.

MATLAB provides an inbuilt utility called "MATLAB Coder" which makes this compilation very easy even if you have zero C-knowledge. After making your changes to the MATLAB code, convert them to C with the following process:

1. Click on the "Apps" tab on the MATLAB topbar. Open the dropdown app menu and select MATLAB Coder.

2. Enter the name of the function you wish to compile. MATLAB will automatically compile that function *and all the subfunctions it calls*, so you only need to enter the highest-level function of the model you are working on. These are:
	- no_raytracing_latlon.m (For the 1D model)
	- shadowing_latlon_loop.m (For the shadowing model)
	- multiscattering_core_loop_wrapper.m  (For the multiscatterer model)

3. DEFINE INPUT TYPES
To automatically define input types, run the model with the smallest test case possible (i.e. 'blagg4') and MATLAB will return a list of automatically generated types.
	- calculate_temperature_extremes('blagg4', '1D')
	- calculate_temperature_extremes('blagg4', 'shadowing')
	- calculate_temperature_extremes('blagg4', 'multiscattering')

These automatically defined types are NOT all correct! They assume fixed sizes for all variables, and so you will need to manually mark out all the variable-sized inputs. Its pretty obvious to spot these just from looking, but a full list nonetheless follows. This looks pretty tedious but if you use ctrl-c, ctrl-v it doesn't take more than 30 seconds.

	Input types to replace:
	| z_arr                     | double 1 x 26       ----> double 1 x :inf
	| rho_matrix                | double 2 x 2 x 26   ----> double :inf x :inf x :inf 
	| lat_arr                   | double 1 x 2        ----> double 1 x :inf
	| long_arr                  | double 1 x 2        ----> double 1 x :inf
	| vis_flux_matrix           | double 4 x 4        ----> double :inf x :inf         [MULTISCATTERING ONLY]
	| ir_flux_matrix            | double 4 x 4        ----> double :inf x :inf         [MULTISCATTERING ONLY]
	| dz_arr                    | double 1 x 26       ----> double 1 x :inf 
	| init_temps                | double 2 x 2        ----> double :inf x :inf 
	  + raytracing_params +++++++++
	  | slope_matrix              | double 2 x 2      ----> double :inf x :inf
	  | aspect_matrix             | double 2 x 2      ----> double :inf x :inf
	  | elevation_matrix          | double 2 x 2      ----> double :inf x :inf
	  | extended_elevation_matrix | double 2 x 2      ----> double :inf x :inf
	  | h_arr                     | double 1 x 565343 ----> 1 x :inf
	  | decl_arr                  | double 1 x 565343 ----> 1 x :inf
	| ew_matrix                 | double 2 x 2        ----> double :inf x :inf
	| ns_matrix                 | double 2 x 2        ----> double :inf x :inf
	  + diviner_data ++++++++++++++
	  | lat_arr                   | double 1 x 224    ----> 1 x :inf
	  | long_arr                  | double 1 x 224    ----> 1 x :inf
	  | T_arr                     | double 1 x 224    ----> 1 x :inf
	  | jd_arr                    | double 1 x 224    ----> 1 x :inf

5. CHECK FOR RUNTIME ISSUES
Go into Settings/All Settings and set "Use JIT compilation in Check for Run-Time Issues" to "No".
Enter the same command you used to define input types (eg: calculate_temperature_extremes('blagg4', 'shadowing')).
Then click 'Check For Issues' and MATLAB will compile the program, run it, and compare it to the uncompiled form to check the output is the same.
If any errors occur, you will have to fix them. Otherwise if no issues are detected, click 'Next'

6. GENERATE CODE
Click on the dropdown menu to generate a MEX-file instead of raw C. (If you encounter errors with the mex-file you may need to generate C-code, fix it by hand, and then manually compile it, which is extremely unpleasant. Its also extremely unlikely so it probably won't happen unless you try and do some very strange things with the code). 
	
Choose the output filename '[model_name]_mex'. EG: 'shadowing_latlon_loop_mex'

MAKE SURE YOU UNTICK "Use JIT Compilation"! Otherwise there will be no parallelisation and the performance will be gimped.
Leave execution profiling disabled.

The MEX file should appear inside the raw_mexable folder. If it doesn't, you can go into raw_mexable/codegen/mex/[model_name]/ and copy the mex file from there into the raw_mexable directory.
You are done!

-------------------
POINTS OF INTEREST:
-------------------
There are several key points of the program where changes might be productively made (eg: for scientific reasons).

These are detailed in the seperate "POINTS_OF_INTEREST.txt" file.

----------------------
DETAILED PROGRAM FLOWS:
----------------------

These program flows are intended as a sort of lookup, in case you are struggling to understand what a particular portion of code does. For a higher-level, more intuitive overview of how the physics of the program works, refer to King et al (2019).

SHADOWING VARIANT  [ie: >>calculate_temperature_extremes(crater_name, 'shadowing')]
calculate_temperature_extremes
43 | Inputs are parsed
87 | Crater data generated by generate_crater_environment is loaded and data is extracted eg: elevation map, mean observed temperatures, etc
135| General scene parameters are loaded into a struct containing scientific constants eg. Stefan's constant, hardcoded parameters eg: number of layers to simulate, etc. Any provided custom parameters are loaded in at this point also.
206| A terrain grid is generated and saved into raster_ref. Matrices of aspects and slope angles are calculated and stored.
215| An extended terrain grid is generated (to avoid edge-anomalies) and saved into a extended_raster_ref object
239| Declination data is read from HORIZONS and processed. The vector of simulation timesteps time_series_dtm_arr is calculated.
260| The subsurface layers are generated and the temperature flow calculations between them are prepared by the function generate_temperature_grid()
267| The simulation duration is calculated.
274| The prog is instructed to wait until the first Diviner measurement timepoint to save temperatures (it will run for ~10 years before this point to allow the simulation to stabilise).
278| Raytracing parameters are stored in a struct by setup_raytracing_params
284| Diviner measureent information is loaded into a struct
309| The model branches into one of three variants
320| shadowing_lat_lon_loop is called and the shadowing model begins

	shadowing_latlon_loop
	6  | mark_diviner_testpoints indicates a set of timepoints/locations for temperatures to be saved which match up to Diviner data, so that errors can be calculated on-the-fly.
	10 | raytracing & general parameters are unpacked from their respective structs
	91 | Temperatures everywhere are initialised. The surface temperature is set to the mean measured diviner temperature (stored in init_temps). This is just an approximate value for a later root-finding exercise to start at, so its not important how accurate it is. The subsurface layers are modelled with an exponentially-decreasing temperature profile.
	122| Maximum and minimum temperature matrices are initialised to NaN. These matrices are 3D, and have dimensions [latitude x longitude x depth layer]
	146| Thermal inertia and other constant-in-time parameters are calculated for each pixel in a quick lat/lon for-loop
	171| Temperature parameters are loaded into the temperature_parameters struct
	202| local_raytracing_params and local_temperature_params structs are initialised. These contain parameters which are constant in-time for a given pixel (eg: slope, aspect) and are regenerated for each pixel in the subsequent lat/lon loop.
	212| Main loop of simulation begins.
	217| Local values are loaded into local_raytracing_params
	237| Local values are loaded into local_temperature_params
	249| Simplistic direct insolation absorption coefficient is calculated on the fly.
	294| Raytracing and temperatures are simulated for the given pixel over all timeperiods, calling shadowing_timeloop
		
		shadowing_timeloop
		39 | The designated sample timepoints are processed to produce a list of julian dates for the current pixel where measurements are to be saved. Because these measurements likely will not align perfectly with the program's discrete timesteps, values for the timestep before and after the target_jd are marked (to later be interpreted between)
		78 | All raytracing is done via raytrace_pixel() function, returning a vector of solar angle at each timestep (NaN if Sun is obscured)

			raytrace_pixel
			3 | Raytracing parameters are unpacked
			34| The timesteps to calculated are split into chunks (default = 10 chunks) and are handed off to multiple workers to calculate in-parallel via a parfor loop
			35| The angle from the terrain pixel to the Sun (ignoring local geometry) is calculated
			76| Program checks if the sun is visible (ie: not obscured by other terrain pieces)
			87| The chunks are collected and rearranged into the correct order to produce a single vector of angles
			
		80 | HAS_EVER_BEEN_ILLUMINATED bool is initialised as false to check for permanently-shadowed pixels
		82 | Main timeloop begins
		86 | Current angle is extracted from raytracing angle vector
		88 | HAS_EVER_BEEN_ILLUMINATED bool is updated
		94 | Temperature profile for current pixel for current timestep are simulated via temperature_sim_pixel_tick()

			temperature_sim_pixel_tick
			40 | To save time, the program initially only simulates a reduced number of layers, and then slowly adds new layers one at a time until the target number of layers is reached. This line decides when to add a new layer.
			52 | The incoming surface energy flux is calculated (Q_surface)
			69 | A rootfinding algorithm finds the equilibrium surface temperature given the incoming energy flux
			93 | The new surface temperature is set here
			96 | Bottom layer temperature is simulated in accordance with Hayne 1D model
			101| Middle layers (i.e. all except for surface and bottom layers) are simulated, also as in Hayne
			108| New vertical temperature profile T_new_arr is finished.
			
		96 | Program checks if the current timestep result should be saved for error-checking purposes.	
		101| If the program has waited long enough (i.e. given the model time to stabilise) then the Tmax and Tmin matrices of alltime hottest/coldest temperatures are updated.
		109| Sample timepoint temperatures are interpolated and errors calculated, then errors are saved into T_error_local.

	296| Local pixel results are saved and lat/lon loop moves on to next pixel

432| Output data is collated and saved into a struct
457| Output data is saved to hard disk
468| Results are plotted


MULTISCATTERING VARIANT  [ie: >>calculate_temperature_extremes(crater_name, 'multiscattering')]
calculate_temperature_extremes
43 | Inputs are parsed
87 | Crater data generated by generate_crater_environment is loaded and data is extracted eg: elevation map, mean observed temperatures, etc
135| General scene parameters are loaded into a struct containing scientific constants eg. Stefan's constant, hardcoded parameters eg: number of layers to simulate, etc. Any provided custom parameters are loaded in at this point also.
206| A terrain grid is generated and saved into raster_ref. Matrices of aspects and slope angles are calculated and stored.
215| An extended terrain grid is generated (to avoid edge-anomalies) and saved into a extended_raster_ref object
239| Declination data is read from HORIZONS and processed. The vector of simulation timesteps time_series_dtm_arr is calculated.
260| The subsurface layers are generated and the temperature flow calculations between them are prepared by the function generate_temperature_grid()
267| The simulation duration is calculated.
274| The prog is instructed to wait until the first Diviner measurement timepoint to save temperatures (it will run for ~10 years before this point to allow the simulation to stabilise).
278| Raytracing parameters are stored in a struct by setup_raytracing_params
284| Diviner measureent information is loaded into a struct
309| The model branches into one of three variants
326| Multiscattering branch begins
327| Isotropic flux coefficients are calculated via combo_get_flux_coefficients function
344| 4D [lat1 x lon1 x lat2 x lon2] flux coefficient matrix is flattened into a 2D matrix
354| Large intermediate flux coefficient matrices are cleared to save RAM
358| A geometric sum A + AS + AS^2 + AS^3 +... is calculated depending on the number of light bounces required (see King et al. for details)
398| Core loop wrapper is launched

	multiscattering_core_loop_wrapper
	4  | mark_diviner_testpoints indicates a set of timepoints/locations for temperatures to be saved which match up to Diviner data, so that errors can be calculated on-the-fly.
	8  | raytracing & general parameters are unpacked from their respective structs
	85 | Temperatures everywhere are initialised. The surface temperature is set to the mean measured diviner temperature (stored in init_temps). This is just an approximate value for a later root-finding exercise to start at, so its not important how accurate it is. The subsurface layers are modelled with an exponentially-decreasing temperature profile.
	117| Maximum and minimum temperature matrices are initialised to NaN. These matrices are 3D, and have dimensions [latitude x longitude x depth layer]
	131| Thermal inertia and other constant-in-time parameters are calculated for each pixel in a quick lat/lon for-loop
	155| Temperature parameters are loaded into the temperature_parameters struct
	201| Timepoints and locations at which to save measurements are extracted from the sample_surface_temperatures and sample_timepoints matrices
	251| Program takes in sample timepoints (i.e. where errors are to be taken) and reorders them timewise. i.e: They are converted from [lat x lon x time] to [time x lat x lon]
	277| Previous surface temperature variable old_surface_T is initialised to NaN
	278| Main timeloop starts
	283| To save time, the program initially only simulates a reduced number of layers, and then slowly adds new layers one at a time until the target number of layers is reached. This line decides when to add a new layer.
	294| The temperatures at the current timestep for all pixels at once are calculated via multiscattering_core_loop

		multiscattering_core_loop
		6  | Relevant parameters are unpacked
		49 | Solar incidence angles for all terrain pixels at current timestep are calculated via raytrace_tick

			raytrace_tick
			12| Each pixel is iterated over in a flattened 1D for-loop (parfor optional)
			23| Raytracing for a single pixel at a single timestep is calculated

		51 | Multiscattering calculations are performed for visible and infrared scattering seperately to find the total absorbed energy matrix Q_arr (Dimensions lat x lon)
		62 | Lat/lon loop iterating over each pixel
		79 | Surface temperature is simulated
		110| Bottom layer temperature is simulated
		115| In-between layers' temperatures are simulated
		124| New 3D temperature matrix is stored (lat x lon x depth layer)

	295| Max/min temperature matrices are updated accordingly
	302| Errors are interpolated and saved

432| Output data is collated and saved into a struct
457| Output data is saved to hard disk
468| Results are plotted
