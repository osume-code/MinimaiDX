# Build Guide

Firstly we need to determine the size/play area of your tablet (mine is about 163mm) to do this open up AstroDX and load up a chart, then measure the diameter of the play circle. You may be able to adjust the play area size in settings to match mine in order to not need any CAD modifications (at least for the shell)
<img width="1600" height="216" alt="playareasize" src="https://github.com/user-attachments/assets/7b787b46-7339-40ff-ac15-77d6b93edda4" />
Mounting clips will also need to be custom made for different sized tablets (CAD files attached) modify as needed

## 3d printing instructions
- Ensure the printed switch socket fits the low profile switch snugly but it should not take too much force
- Make sure you can fit 1.75mm filament through the holes in the printed buttons and shell
- I recommend printing the buttons in lower layer heights (0.10mm)
- I also recommend printing the buttons top down and use a smooth plate if possible
- For best feel calibrate ironing and turn topmost surface ironing on for the shell
- No supports are needed for any of the 3d prints

# How to assemble 
## Wiring & Switches
<img width="435" height="381" alt="image" src="https://github.com/user-attachments/assets/973ea924-cb67-4bc0-89f5-3c81c25ea9fe" />

Assuming you want the wires to come out from the top (I reccomend either going with top or bottom relative to play orientation) ring buttons 1-4 will be clumped together and 5-8 will also be clumped together on the other side. Photo for visualisation <img width="1600" height="1280" alt="image" src="https://github.com/user-attachments/assets/18eb0470-a61b-41ac-9941-9c277f67c23d" />

In total 8 pairs of wires will be needed with 4 pairs per side, you want to make sure that you can identify which pair of wires orginate from the same switch (I did this by pulling back the wire from the cable channel until I could see a pair have a visbly different length from the others). In each of the sides, each pair of wires will need to be linearly longer as more cable is needed to reach the Pi Pico (so for example the pair of wires closest to the designated hole lets say button1 that the wires will come out off will have the shortest wire and button4 will need the longest pair of wires)
First start with soldering switches to the their respective wires
- make 4 sets of a pair of wires
- recommened to tin the tip of the wires with solder before soldering it to the switch
- solder the wires to the switches
Now we add the switches to the shell
- thread the wires into the cable channel
- then insert the switches into the slot
- now thread the wires through the little holes until you reach your exit point
- repeat increasing wire length until all 4 buttons on that side are done
Repeat again for all the buttons on the other side

## Buttons
Installing buttons, this is honestly one of the easiest things to do.
- first check if the hole in the button is large enough for standard 1.75mm filament to fit through smoothly, if not either adjust CAD model or just shove it through. It'll probally work fine anyways
- place button into slot and fit the filament through the holes, make sure you have your switch installed before doing this. Now i recommend doing one button at a time then cut the filament after getting about halfway into the channel
- alternatively you can just push one continious piece of filament through as many buttons as you can.
- photo below should show the peices of filament as the hinges for the buttons
<img width="1600" height="1280" alt="WhatsApp Image 2026-07-20 at 14 19 28 (2)" src="https://github.com/user-attachments/assets/9a082d49-632c-4eba-a139-83b034986bb5" />

