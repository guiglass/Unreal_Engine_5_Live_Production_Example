# Unreal Engine 5 plugin for APS (live-link)
This is a complete exampel project for UE5 that shows how to use a custom APS Luxor avatars with live-link full body tracking and facial capture on characters in Unreal Engine. This plugin can be used in live production environments or to simply record a animation directly in Unreal Editor.

The binaries for this plugin were compile using UE5 on Windows 10 64bit <i>but the plugin should also be compatible with UE4</i>.

This project requires APS Luxor (https://www.patreon.com/prepstudio) v3.6.7 or above and Unreal Engiene 5 editor. 

## Installing the necessary software.

<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/Icons.png">
     <img width="20%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/Icons.png">
  </a>
  <br>
</p>

To get started first you will need to download and install these two programs:
 - [Unreal Engine 5](https://www.unrealengine.com/en-US/blog/unreal-engine-5-is-now-available-in-early-access/)
 - [APS Luxor (v3.6.6)](https://www.mocapfusion.com/)

## Setting up the UE5 live-link example project.
 
### Step 1 - Download the example project from Github.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/Step_download.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/Step_download.png">
  </a>
  <br>
  
  Download the [Unreal_Engine_5_Live_Production_Example](https://github.com/guiglass/Unreal_Engine_5_Live_Production_Example/archive/refs/heads/main.zip) project from this Github repo.
</p>
  
### Step 2 - Extract the contents of the example project.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/Step_contents.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/Step_contents.png">
  </a>
  <br>

After downloading the .zip you can unzip the contents to a folder on your hard drive

<sub><sup>Inside of the zip there are two folders, the UE5 project folder and a folder containing the custom avatar for APS.</sup></sub> 

  <details><summary>📂 Unreal 5 Example Project.</summary>
	  <b>This folder contains the UE5 project files.</b>
   </details>
 
  <details><summary>📂 VR_MocapAssets.</summary>
	  <b>This folder contains a custom avatar for APS.</b>
   </details>
</p>

### Step 3 - Open the .uproject with Unreal Editor.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/Step_uproject.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/Step_uproject.png">
  </a>
  <br>
	
The .uproject file is located in the <b>📂 Unreal 5 Example Project</b> folder.
	
</p>

### Step 4 - Open the example UE5 project in Unreal Editor.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/Step_browse.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/Step_browse.png">
  </a>
  <br>
 Click on browse and select the .uproject from the <b>Unreal_Engine_5_Live_Production_Example</b> folder. 
</p>

### Step 5 - Setup the APS client IP address and frame rate.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_sceneobject.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_sceneobject.png">
  </a>
  <br>
 Locate the APSCore scene object and select it to set the IP address to the PC running the APS mocap server.
   <sub><sup>If running APS on the same PC as Unreal then leave the IP as default loopback.</sup></sub> 
</p>

### Step 6 - Locate the mocap avatar data folder.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_mocapavatar.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_mocapavatar.png">
  </a>
  <br>
 Back in the folder we unzipped earlier now locate the mocap avatar data folder.
</p>

### Step 5 - Copy the mocap avatar data folder into the VR_MocapAssets folder.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_copyfolder.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_copyfolder.png">
  </a>
  <br>
 Copy the avatar data folder.
</p>

### Step 6 - Copy the mocap avatar data folder into the VR_MocapAssets folder.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_pastefolder.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_pastefolder.png">
  </a>
  <br>
 Paste the avatar data folder into the folder: <sub><sup>%USERPROFILE%\AppData\LocalLow\Animation Prep Studios\LUXOR\VR_MocapAssets\</sup></sub>.
</p>

### Step 7 - Activate the mocap avatar.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_browseavatar.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_browseavatar.png">
  </a>
  <br>
 Start APS and open the Avatar tab and the SK_Man avatar should now be available.
</p>

### Step 8 - Avatar now activated and is ready for recording.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_activateavatar.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_activateavatar.png">
  </a>
  <br>
The avatar is now waiting to be calibrated to the player.
</p>

### Step 9 - Calibrate TPose.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_calibrate.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_calibrate.png">
  </a>
  <br>
While standing in a TPose press the two menu buttons simultaneously for three seconds.
</p>

### Step 10 - Connecting Live-Link.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_simulate.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_simulate.png">
  </a>
  <br>
Press "Play" and start simulating to start live-link connection and sync the Mannequin avatar with APS.
</p>

If the connection was successful you should see the mannequin in Unreal moves exactly as the avatar in APS !!!

<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_connected.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_connected.png">
  </a>
</p>

Check the [Youtube Channel](https://www.youtube.com/channel/UCjHMxbBzessAD-Hf4EHbngg?sub_confirmation=1) for examples.

Disclaimer: By using the resources in this example you agree the author is not liable for losses, damages, injury resulting from the use of this example. This project is distributed as is and without any warranty or guarantees.

Copyright *2021 Animation Prep Studios - Grant Olsen (AnimationPrepStudios@gmail.com)*
