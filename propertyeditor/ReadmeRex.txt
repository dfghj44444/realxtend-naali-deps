This folder contains a copy of the yape 2.1.3 project, available at http://www.kde-apps.org/content/show.php/yape+(Yet+another+property+editor)?content=100063
The examples folder was omitted from the repository to keep the size down. 

The PropertyEditor main library constructor code has been slighly changed to make the library initialize properly with Naali. Also the plugin loading method has been slightly 
changed to take only .dll / .so into account and only load only the proper version, either Debug or Release.

To build, run cmake.

Windows:
Run the RunCMake.bat, open propertyEditor-package.sln, build both debug and release versions.
After the project is built, copy the .lib to NAALI_DEPS_BUILD/propertyeditor/lib folder, the .dll to Naali's bin/ folder.
If you modified or added plugins, those go to Naali bin/plugins/ folder.