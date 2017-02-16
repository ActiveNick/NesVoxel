# NesVoxel (Hololens Optimized) #
*Originally created by and0p* 

## Background ##

N3S is a 3D NES emulator for Windows.  It works by wrapping the Nestopia UE libretro core and re-emulates the PPU to draw predefined 3D voxel meshes in place of 2D sprites.

[More info](http://n3s.io)


This particular project is a port of N3S which targets the Universal Windows Platform.  The specific aim is to run N3S on the Microsoft Hololens. 

## Features ##
- Compatibility with most 8K / CHR mapped games See: [nesmapper.txt](/NesVoxelLib/nesmapper.txt)
- Supports controller input with a bluetooth paired Xbox One S gamepad

## Prerequisites ##
- [Visual Studio](https://www.visualstudio.com/) 2015 or greater (Community Edition works)
- [Hololens SDK](https://developer.microsoft.com/en-us/windows/holographic/install_the_tools)

## Instructions ##
1. Clone this repo
2. Initialize and update the included Nestopia submodule:
	<img src="/Assets/submodule.PNG">
3. Open .sln => change build config to **Hololens Release / x86** => Build (note build error) 
	<img src="/Assets/build.PNG">
4. Supply missing mario.nes file into the directory indicated and rebuild the N3SHololens project
5. Ensure that a value (ip address) is set for "Machine Name" in both the Release and Debug configuration (Right-Click NS3Hololense Project => Properties => Debugging):
	<img src="/Assets/config.PNG">
6. Bask in the glory of 3-dimensional classic NES awesomeness!

## Demonstration ##

[![Video Capture Example](https://img.youtube.com/vi/WEWcc-cF3g0/0.jpg)](https://www.youtube.com/watch?v=WEWcc-cF3g0)


