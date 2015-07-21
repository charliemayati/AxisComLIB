                                SDK Release Notes
                                Version 1.4.1.1
                              December 12th , 2014

This is the Verix eVo software development kit for developing applications 
using Verix eVo GUI. GUISDK along with VRXSDK and EOSSDK, lets you build eVo
applications, that have a Graphical User Interface which will run on 
ARM11-based eVo platforms.  

Refer to Verix eVo GUI programmers manual for more details (VDN: DOC00319).

Note: This SDK is common for both color and monochrome terminals.

Minimum Requirements
--------------------

1. Hardware Requirements:
-------------------------
    VX680G 			-- OS QT680240  
    Vx680 3G		-- OS QT6G0240
    Vx680 Wi-Fi/BT 		-- OS QT6B0240
    Vx520 D/E color		- OS QT520109.
    VX520G 			- OS QT5G0103
    VX520  			- OS QT520112
    VX820			- OS QT820240
    VX820  Duet 		- OS QT820240
    VX805 			- OS QT850110
    VX805  Duet 		- OS QT850101
    VX825			- OS QT830109
    Vx675			- OS QT650240

2. Software Requirements:
-------------------------
    VFSDK 1.1.0 or later which includes:
    VRXSDK 3.5.0 or later
    EOSSDK 1.8.0 or later
    RVDS 4.0 (bin: 902; inc & lib: 902)


SDK Installation
----------------
- Create a sub folder GUISDK in Verix eVo SDK folder
- Unzip the provided file to this directory

Known Issue/Limitations:
1. When the focus is in checkbox the key notifications are not working
2. In 680 when a widget is in edit mode if the user has registered a notifiykeypress() for navigation keys 2,4,6,8 then he will not receive key notifications
3. The configurable navigation keys is not supported on Vx675 terminal. By default is supports 5 way navigation keys
4. Certain special characters in regional languages appear garbled.This is currently observed only on tunga.ttf file
5. GIF animation stops if power cable is pluged and unpluged while showing the animation
6. Scroll bar is not shown on Vx675 terminal if the widgets are in the boundary of the visible area. Users can scroll through the screen using the 5 way navigation
7. Setting *DEBUG for debugging purpose will have affect on the performance
8.The header file include “#include<svc_gui.h>” needs to be replaced with “#include<VxGUI.hpp>” in examples included along with Verix  GUI SDK document.