# MUNModerator
Github repo, for development of C++ application for use by moderators at MUN conferences

#### Prerequisites for compiling source code –
- OS – Windows 7 and above
- wxWidgets library for C++
- Any IDE which supports wxWidgets (eg: Orwell DevCpp 5.2.0.1)

#### Build Instructions
- Download the project zip or clone in desktop
- Install DevC++ 5.2.0.1 or above
- Install both wxWidgets devpaks to DevC++ install directory
- Extract Source Code.zip and open cs_proj12.dev 
- Compile and Run project from DevC++



#Files Currently present – 
1.	main.cpp - 
initializes the application
2.	Main_Frame.cpp – 
Defines the class Main_Frame
This is the home screen
3.	Main_Frame.h
Declares the class Main_Frame + preprocessor derivatives
4.	control.cpp
defines variables required across the application
5.	control.h
declares variables required across the application

#Working Functionality
1.	Loads a text file with the names of countries (in this version the test country list file is called “test.txt”)
2.	When an choice is selected and then “Start Voting” button is clicked the country names start appearing
3.	The country will change when “Pass”, “For the Motion” or “Against the Motion” is clicked
4.	After all the countries are processed the “Passed” countries start appearing again, now the “Pass” button will be greyed out.
5.	Finally after all countries and passed countries, it will show a pop up with the percentage of countries for the motion.

#Functionality Required – 
1.	To have voting procedure capabilities - for 2/3rd and 50% +1 majorities. The choice that is selected currently is useless. It has to be used to select the required voting procedure. 
2.	To keep track of debate timings - allow mods to set time for moderated caucus, for general speakers list, un-moderated caucus, and a general count down timer option with a field for description of what timer it is, that looks like a proper countdown - can be text countdown itself - no need for fancy imagery. Allow option for reset, pause and stop of countdown. The entire timer option must be optional. If moderator chooses, the countdown should be disabled, and only country/portfolio that spoke should be logged.
3.	log to a file which country/portfolio speaks for how long in what form - moderated caucus, General speakers list speech, started motion for unmoderated caucus, or any general speech for which general countdown was used (log description of timer in this case)
4.	There is a menu bar item “KMUN Website”. This has to open the KMUN website on the browser
