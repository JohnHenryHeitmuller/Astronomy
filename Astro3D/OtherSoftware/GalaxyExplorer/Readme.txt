                         ____       _
                        / ___| __ _| | __ ___  ___   _
                       | |  _ / _` | |/ _` \ \/ / | | |
                       | |_| | (_| | | (_| |>  <| |_| |
                    ____\____|\__,_|_|\__,_/_/\_\\__, |
                   | ____|_  ___ __ | | ___  _ __|___/_ __
                   |  _| \ \/ / '_ \| |/ _ \| '__/ _ \ '__|
                   | |___ >  <| |_) | | (_) | | |  __/ |
                   |_____/_/\_\ .__/|_|\___/|_|  \___|_|
                              |_|___ \  / _ \
                                  __) || | | |
                                 / __/ | |_| |
                                |_____(_)___/


			    Written by Tamas Szalay
			       January 20, 2002
			   tamas@tarkus.pha.jhu.edu
		------------------------------------------------

I.   Introduction
II.  Controls
III. Data Format
IV.  Bug Reports
V.   Contact

*NOTE*
You must have a 3d graphics accelerator card and DirectX 8 or later to run 
the program. If you need the newest version of DirectX, it is available at 
http://www.microsoft.com/directx/homeuser/downloads/default.asp.


I. Introduction

This program shows you the 3D distribution of galaxies observed by the Sloan 
Digital Sky Survey. The data consists of the 3D positions of 131,000 galaxies 
observed to date. Note, how galaxies tend to be close to one another, forming 
walls and filaments.

The data is located on several 'wings', these only reflect the sky coverage, 
i.e. the observations are still rather incomplete. When finished, in 2005, 
there will have a full three-dimensional map of a large cone in the Northern 
Sky. There will always be a gap around the plane of the Milky Way -- there is 
too much dust there to see through, therefore that region was avoided.

For details of the SDSS project check the websites:
	http://www.sdss.org/
	http://skyserver.sdss.org/

II. Controls
	
Use the mouse to look around, and hold down the following keys to move:
(When you move forward or backward, you move in the direction you are 
currently looking)

Left Mouse Button ~ Forward
Right Mouse Button ~ Backward

W ~ Slide up
S ~ Slide down
A ~ Slide left
D ~ Slide right
+ ~ Increase speed
- ~ Decrease speed
R ~ Reset view (To starting position)
Space ~ Toggle flyaround mode (Turn the camera so it is facing towards 
	the center of the points, and press to toggle. All other controls 
	are disabled, including mouse while this is active)
Escape ~ Quit


III. Data Format

By default, the program uses the encrypted objXYZ.dat file in its directory. 
However, if you place into the directory a CSV file called objXYZ.csv, it 
will try to open that instead. The csv file simply needs to be formatted so 
that each point is seperated by a line break and the xyz coordinates of a 
point are seperated by commas. For example,
2,3,4
5,6,7
8,9,10
100,99,98
32,45,63

would be perfectly valid. Optimally, the values should range between -1000 
and +1000, but it really doesn't matter much.

IV. Bug Reports
	
If you encounter any bugs, please email me with as much of the following 
information as possible, and any other relevant information:

CPU speed
RAM Size
Operating system
DirectX Version
3D Graphics Card

and I will hope to get it fixed ASAP.


V. Contact

Tamas Szalay
tamas@tarkus.pha.jhu.edu.

Enjoy!

