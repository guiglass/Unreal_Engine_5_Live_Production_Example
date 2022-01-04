# Unreal Engine 5 plugin for APS (live-link)
This is a complete example project for UE5 that shows how to use a custom APS Luxor avatars with live-link full body tracking and facial capture on characters in Unreal Engine. This plugin can be used in live production environments or to simply record a animation directly in Unreal Editor.

The binaries for this plugin were compile using UE5 on Windows 10 64bit <i>but the plugin should also be compatible with UE4</i>.

This project requires APS Luxor (https://www.patreon.com/prepstudio) v3.6.7 or above and Unreal Engiene 5 editor. 

## Examples:
[![Youtube Tutorial](https://img.youtube.com/vi/bDVLjqRBl88/0.jpg)](https://www.youtube.com/watch?v=bDVLjqRBl88)
[![Youtube Tutorial](https://img.youtube.com/vi/yERiOkhqLxc/0.jpg)](https://www.youtube.com/watch?v=yERiOkhqLxc)

Download the latest plugin here: https://www.mocapfusion.com/live-link

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

### Step 7 - Copy the mocap avatar data folder into the VR_MocapAssets folder.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_copyfolder.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_copyfolder.png">
  </a>
  <br>
 Copy the avatar data folder.
</p>

### Step 8 - Copy the mocap avatar data folder into the VR_MocapAssets folder.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_pastefolder.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_pastefolder.png">
  </a>
  <br>
 Paste the avatar data folder into the folder: <sub><sup>%USERPROFILE%\AppData\LocalLow\Animation Prep Studios\LUXOR\VR_MocapAssets\</sup></sub>.
</p>

### Step 9 - Activate the mocap avatar.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_browseavatar.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_browseavatar.png">
  </a>
  <br>
 Start APS and open the Avatar tab and the SK_Man avatar should now be available.
</p>

### Step 10 - Avatar now activated and is ready for recording.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_activateavatar.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_activateavatar.png">
  </a>
  <br>
The avatar is now waiting to be calibrated to the player.
</p>

### Step 11 - Calibrate TPose.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_calibrate.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/step_calibrate.png">
  </a>
  <br>
While standing in a TPose press the two menu buttons simultaneously for three seconds.
</p>

### Step 12 - Connecting Live-Link.
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

### How to create the *Animation Blueprint*.
<p align="center">
  <a href="https://github.com/guiglass/LUXOR/blob/gh-pages/img/ue5_plugin/create_anim_blueprint.gif">
     <img width="50%" src="https://github.com/guiglass/LUXOR/blob/gh-pages/img/ue5_plugin/create_anim_blueprint.gif">
  </a>
</p>
Select the skeletal mesh for your avatar and right click, then create a new Animation Blueprint.
<br><br>
You should then see a new Animation Blueprint that was just created. Simply double click on it to open the AnimGraph where you may add the Avatar Pose Receiver node and connect it to the Output Pose.

### The *Avatar Pose Receiver (APS Live-Link)* Node.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/realtime_retargeting.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/realtime_retargeting.png">
  </a>
</p>
The <b>AvatarPoseReceiver</b> node is found in the Animation Blueprints for SkeletalMeshes. 
<br>
This animation node should be connected directly to the Output Pose in the animation blueprint.
<br><br>
Note that the <b>AvatarPoseReceiver</b> node also includes a real-time re-targeting feature located in the Details tab. This can be helpful if the mocap avatar in APS and Unreal game character's skeleton are slightly different from each other and can correct offsets after tpose calibration. You may enable and override rotation or translation offsets by using the checkboxes for any of the bone groups: Neck, Spine, Shoulders, Legs, Arms, Hands and Fingers. The Rotation Weight and Location Weight input fields are for setting the amount of retargeting. 
<br><br>
Parameters:

 - **Client Number** - Allows specifying which client connection to use as the source for motion capture data. The client number corresponds to the "client" designations of the APSCore scene object (Default = Client_0).
 - **Can Update Lengths** - Apply bone translations for bones that can be stretched. Some bones can translate as well as rotate, but translation is optional and may not be desired.
 - **Can Update Blendshapes** - Apply blendshapes from APS avatar to the UE avatar mesh. For use with .fbx avatars that include blendshapes. *"Import Morph Targets" checkbox must be enabled !!*
 - **Import Uniform Scale** - This value must match the "Import Uniform Scale" value if it was changed when importing the avatar. Typically this is 1.

#### Retargeting (MetaHuman Rigs)
Retargeting can be enabled to fix offsets when using the SK_Man avatar with MetaHumans. Because not all proportions are exactly the same for all MetaHumans it may be possible to compensate for difference between rigs by enabling the retargeting checkboxes for certain parts of the avatar. Note that retargeting is not needed if using a .fbx in UE that exactlty matches the .fbx used to create the avatar in APS since they would share exactly the same skeleton and rest pose.
<br><br>
Parameters:

 - **Rotation** - Use Retargeting to correct Neck, Spine, Clavicle, Leg, Arm, Hand and Finger bone rotation offsets.
 - **Location** - Use Retargeting to correct Neck, Spine, Clavicle, Leg, Arm, Hand and Finger bone location (stretch) offsets.
 - **Rotation Weight** - Retargeting rotation offset blend weight. Amount to blend the rotation retargeting.
 - **Location Weight** - Retargeting location offset blend weight. Amount to blend the location (stretch) retargeting.


### Connect *Multiple Clients And Avatars* In The Same Scene (optional).
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/live_link_configs.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/live_link_configs.png">
  </a>
  <br>
The <b>APSCore</b> allows connecting up to four simultaneous clients for creating multi-avatar live productions. 
	<br>
	<i>Note that by setting any of the <b>Ip Port</b> parameters to -1 will disable that client.</i>
</p>

### Assigning The *Client Number* To The Animation Node.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/client_number.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/client_number.png">
  </a>
  <br>
The <b>Client Number</b> parameters of the AvatarPoseReceiver allows specifying which client connection to use as the source for motion capture data. The client number corresponds to the "client" designations of the APSCore scene object.
</p>

### The *Avatar ARKit Receiver (APS Live-Link)* Node.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/arkit_receiver.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/arkit_receiver.png">
  </a>
</p>
It is now possible to use the APS Sidekick IOS app with your live production avatars! And also works for easily adding APS Sidekick facecap to MetaHumans. The <b>AvatarARKitReceiver</b> node can be added to the Animation Blueprint. This node is optional!
<br><br>
The Sidekick facecap app can be used to add facial capture to any .fbx or metahuman that includes facial blendshapes. Avatars that were built using the APS_SDK and having the FacecapLinker added in APS may be used to stream facecap data to a corresponding live production avatar in UE. The default SK_Man avatar does include all 52 ARKit shapekeys making it possible to stream facecap data to metahumans (shown in the node setup above).
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/Sidekick121.png">
     <img width="25%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/Sidekick121.png">
  </a>
</p>
Sidekick facecap app for IOS download and testflight applicaton can be found <a href="https://www.mocapfusion.com/sidekick-app">here</a>.

### Troubleshooting.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/config_port.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/config_port.png">
  </a>
</p>
You can find the <b>\Error_Logs</b> folder located in the APS LUXOR game data folder. The APS live-link server generates a new log file (LOG_APS_UE_LIVE_LINK.txt) in that directory whenever it initializes and should give a full picture of what the thread was doing at the time the client connected or disconnected, and logs any exceptions that might have been thrown.
<br><br>
You can find the log file located in the folder: <b><i>%USERPROFILE%\AppData\LocalLow\Animation Prep Studios\LUXOR\Error_Logs\</i></b>
<br><br>
In some cases it may be desireable to change the listening port from the default 10000. In this case you may locate the <b>\Configs</b> folder located in the APS LUXOR game data folder where the (UE_LIVE_LINK_CONFIG.dat) .JSON file lives which allows users to change some of the (low level) game parameters such as the live-link port number. <i>Changing the port number may resolve connection issues in some cases.</i>
<br><br>
You can find the config file located in the folder: <b><i>%USERPROFILE%\AppData\LocalLow\Animation Prep Studios\LUXOR\Configs\</i></b>

### Copying The Plugin To A New Project.
<p align="center">
  <a href="https://github.com/guiglass/LUXOR/blob/gh-pages/img/ue5_plugin/ue5_copy_folder.png">
     <img width="50%" src="https://github.com/guiglass/LUXOR/blob/gh-pages/img/ue5_plugin/ue5_copy_folder.png">
  </a>
  <br>
The APS live-link plugin is a standard plugin for UE. The plugin folder can be copied directly from this example project's Plugins folder and placed into a new or existing project. This will copy the APSCore and all blueprint nodes for use in other projects.
</p>

<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/ue5_menu.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/ue5_menu.png">
  </a>
</p>
After copying the APSLiveLink plugin folder into a new project you will have to enable the plugin. Locate the Plugins menu item in Unrea Editor's Edit dropdown menu and select it to open the plugin manager.
<p align="center">
  <a href="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/ue5_plugins.png">
     <img width="50%" src="https://raw.githubusercontent.com/guiglass/LUXOR/gh-pages/img/ue5_plugin/ue5_plugins.png">
  </a>
</p>
Search for <b>APS Live-Link SDK</b> in the Plugin manager and click the enable checkbox.

<br><br>
--------
<br><br>
This repo and the documentation are updated often. Check back soon for more features and improvements!
<br><br>

You're invited to join the [APS Discord](https://discord.com/invite/ErZcKaQ) for tech support, showcases, and chatting with a community of artists and developers.

Please visit the [Youtube Channel](https://www.youtube.com/channel/UCjHMxbBzessAD-Hf4EHbngg?sub_confirmation=1) for examples and tutorials.

Disclaimer: By using the resources in this example you agree the author is not liable for losses, damages, injury resulting from the use of this example. This project is distributed as is and without any warranty or guarantees.

Copyright *2021 Animation Prep Studios - Grant Olsen (AnimationPrepStudios@gmail.com)*
