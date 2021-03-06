Fonte: https://chipkit.net/wiki/index.php?title=ChipKIT_core
Install in Arduino IDE
The easiest way to get started is to use Arduino IDE. The instructions below provide these details.

Tutorial
For guided install instructions, reference the "Installing and Using the Arduino IDE Development Tool" lab from PONTECH's Education page.

Installation Methods
Before installing the chipKIT core, you must first download Arduino IDE and install it. Once installed, there are two methods (detailed below) for installing the chipKIT-core component within the Arduino IDE. Note that Arduino 1.6.7+ is required for method #1 below, but method #2 below can be used with version 1.6.4+.

IMPORTANT NOTE: (added April 20th, 2016) Version 1.6.8 of the Arduino IDE has a bug in it (at least under Windows - possibly the others too) that will prevent it from working properly with any board that uses an FTDI USB to Serial bridge chip - which includes all Digilent chipKIT board except the DP32. The Fubarino SD, Fubarino Mini, chipKIT Pi and DP32 do not use FTDI chips, and so will not have this problem. The solution is to either use version 1.6.7 of the Arduino IDE, or use a nightly build of 1.6.9, which has the problem fixed.
1) Auto install via URL from within Arduino IDE (latest version chipKIT-core v1.4.1)
This is the easiest and best method for end users. Follow these steps:

From within the Arduino IDE, go to File->Preferences dialog box. Look at the text entry field called "Additional Boards Manager URLs:". If that text entry field is blank, then you can just copy/paste the following URL into that text field https://github.com/chipKIT32/chipKIT-core/raw/master/package_chipkit_index.json Then click OK to close the Preferences dialog box.
If that field is not blank, then click the little box icon to the right of the text field, and copy/paste the URL https://github.com/chipKIT32/chipKIT-core/raw/master/package_chipkit_index.json onto the next line of the text entry field. Arduino lets you have as many different cores as you want loaded into the IDE as long as each URL is on a separate line. Click OK to close the Additional Boards Manager URLs dialog box and then click OK again to close the Preferences dialog box.
Now select the Tools->Board->Board Manager menu from the Arduino IDE, and it will open up the Boards Manager window. From there, scroll down until you see the chipKIT board. Click once on any of the text in the chipKIT section, and you will see a button appear that says "Install". It will take some time to download all of the chipKIT components and install them, but when it's done, you can click the Close button to close the Board Manager window.
Now choose a chipKIT board from the Tools->Board menu and program your chipKIT board!
Note that as new versions of the chipKIT-core files are released, you will get to update your chipKIT-core files from inside the Arduino IDE, and select which version you'd like to install/update to.

Currently the MacOS X, Windows, and Linux32 OSes are fully supported using this method, as of chipKIT-core v1.0.1. The Linux64 version also works, but you must install the 32-bit compatibility libraries on your system to make it work as the compiler is only a 32 bit executable.

If you are using Linux you need to add the user to the "dialout" group before programming the board. This step is required in order to obtain the necessary permissions. For Ubuntu this can be achieved with the following command: sudo adduser <username> dialout. Logoff and login may also be needed after this step.

2) Manual install by copying ZIP file
This is the second method for installing chipKIT-core, and it is normally used by chipKIT developers who want to have the very latest chipKIT-core code available for testing.

Download the latest version of the chipKIT-core archive file for your platform (see below for the download links).
Extract the chipkit-core folder from the archive file, and move it into your Arduino/hardware folder. If there is no 'hardware' folder, you can create one. The location of the Arduino folder will be different in every system (for example, "C:\Users\Brian\Documents\Arduino\hardware" under Windows) but if you want to know where yours is, simply open the Arduino IDE, and go to File->Preferences and look at the value in the "Sketchbook location:" field.
Make sure that you have "Arduino\hardware\chipkit-core\pic32\", as it's possible to get an extra level of chipkit-core folder in there, which will prevent things from working right.
Now fire up the Arduino IDE with this new core installed, and from the Tools->Board menu you should see all of the chipKIT boards available. Choose the board you have, and you are ready to compile.