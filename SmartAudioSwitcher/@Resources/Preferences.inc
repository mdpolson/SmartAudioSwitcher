[Variables]
; Set this variable to change between black and white image sets.
; Variable should be set to 1 for the Black image set and 0 for the White image set.
BlackIcons=1

; Modify these to match the NAME of your audio output devices.  
; SpeakerName should correspond to the device you want to use the speaker icon for
; and Headset Name for the device you want to use the headset icon for.
SpeakerName=Speakers
HeadsetName=Headset

; Modify this to determine your default device.  Options are #SpeakerName# and #HeadsetName#
DefaultDevice=#HeadsetName#

; Modify this if you want to change the slide direction (0 = slide out left, 1 = slide out right)
SlideDirection=1

; Modify this to match the name of the skin of your visualizer, if you have one.  If not, just leave it.
; in this case "Monstercat Visualizer", is the name of the skin as it appears on your rainmeter. This is usually found at the highest folder level in your skins folder.
; ex: C:\User\[Username]\Documents\Rainmeter\Skins\ **<Skin name>**
; VisualizerINI should match the primary ini file controlling the skin.  Typically this can be found in the top folder of the skin.
Visualizer=monstercat-visualizer
VisualizerINI=visualizer.ini
; If you have more than one visualizer:
;     Scroll down to the [Speakers] and [Headset] sections and look in the LeftMouseUpAction for [!Refresh #Visualizer# "visualizer.ini"]
;     Immediately after this block, you need to add "[!Refresh <Visualizer Name> <visualizer ini>]" (without the quotes), but replace
;     <Visualizer Name> with the name of your visualizer and <visualizer ini> with the top-level controlling ini file of the skin.  Use quotes
;     around these two variables.