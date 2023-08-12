# Calculator with simple GTK UI

This project is a simple Calculator written using C. It also has a simple UI interface built with GTK.

## Features

Simple and interactive graphical user interface.
The calculator can handle large calculations.

## Setup - Linux

To compile the code on linux you'll need to install pkg-config and libgtk-3-dev. Then simply run make (Or make always first then make if you get an issue concerning build dir not being found). You can then mark the run script as an executable then use it to test the calculator.

## Setup - Windows
If for some reason you choose to run the application on windows, you could either set up gtk on msys2 like you would on linux. Or go to the much more painful method which is setting up gtk3 on Visual Studio 2022 (The version I used but it can be whatever you have).