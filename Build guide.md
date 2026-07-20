# Build Guide

First you need to determine the size and play area of your tablet (mine is about 163mm). To do this, open up AstroDX and load up a chart, then measure the diameter of the play circle. You may be able to adjust the play area size in settings to match mine, which would let you skip CAD modifications, at least for the shell.

<img width="1600" height="216" alt="playareasize" src="https://github.com/user-attachments/assets/7b787b46-7339-40ff-ac15-77d6b93edda4" />

Mounting clips will also need to be custom made for different sized tablets. CAD files are attached, so modify them as needed.

## 3D Printing Instructions

- Ensure the printed switch socket fits the low profile switch snugly, but it shouldn't take too much force to insert.
- Make sure you can fit 1.75mm filament through the holes in the printed buttons and shell.
- I recommend printing the buttons at a lower layer height (0.10mm).
- I also recommend printing the buttons top down, using a smooth plate if possible.
- For the best feel, calibrate ironing and turn on topmost surface ironing for the shell.
- No supports are needed for any of the 3D prints.

# How to Assemble

## Wiring & Switches

<img width="435" height="381" alt="image" src="https://github.com/user-attachments/assets/973ea924-cb67-4bc0-89f5-3c81c25ea9fe" />

Assuming you want the wires to come out from the top (I recommend picking either top or bottom relative to play orientation), buttons 1 to 4 will be grouped together on one side, and buttons 5 to 8 will be grouped together on the other. Here's a photo for visualization:

<img width="1600" height="1280" alt="image" src="https://github.com/user-attachments/assets/18eb0470-a61b-41ac-9941-9c277f67c23d" />

In total, you'll need 8 pairs of wires, 4 pairs per side. Make sure you can identify which pair of wires comes from the same switch. I did this by pulling back the wire from the cable channel until I could see that each pair had a visibly different length from the others.

On each side, every pair of wires needs to be progressively longer, since more cable is needed to reach the Pi Pico as you move further from the exit point. For example, if button 1's wires are the first to exit, that pair will be the shortest, and button 4's pair will need to be the longest.

Start by soldering the switches to their wires:

- Make 4 sets of wire pairs.
- Tin the tips of the wires with solder before soldering them to the switch.
- Solder the wires to the switches.

Now add the switches to the shell:

- Thread the wires into the cable channel.
- Insert the switch into its slot.
- Thread the wires through the small holes until you reach your exit point.
- Repeat with increasing wire length until all 4 buttons on that side are done.

Repeat the process for all the buttons on the other side.

## Buttons

Installing the buttons is honestly one of the easiest parts.

- First check if the hole in the button is large enough for standard 1.75mm filament to fit through smoothly. If not, either adjust the CAD model or just push it through, it'll probably work fine anyway.
- Place the button into its slot and fit the filament through the holes, making sure the switch is already installed before doing this. I recommend doing one button at a time, then cutting the filament after it's about halfway into the channel.
- Alternatively, you can push one continuous piece of filament through as many buttons as possible.
- The photo below shows the filament pieces acting as hinges for the buttons.

<img width="1600" height="1280" alt="WhatsApp Image 2026-07-20 at 14 19 28 (2)" src="https://github.com/user-attachments/assets/9a082d49-632c-4eba-a139-83b034986bb5" />

## Software

MinimaiDX runs on QMK firmware, so setup is simple whether you want to just flash it or customize it first.

### Flashing the default firmware

1. Hold the **BOOTSEL** button on your Pico.
2. While holding it, plug the Pico into your computer via USB.
3. Release BOOTSEL once it's connected. A drive named **RPI-RP2** will appear.
4. Drag and drop `minimai_default.uf2` onto that drive.
5. The Pico will automatically reboot into the new firmware.

By default, the 8 buttons are mapped as follows:

| Button | Key | GPIO |
|---|---|---|
| A1 | W | GP0 |
| A2 | E | GP1 |
| A3 | D | GP2 |
| A4 | C | GP3 |
| A5 | X | GP4 |
| A6 | Z | GP5 |
| A7 | A | GP6 |
| A8 | Q | GP7 |

### Customizing the firmware

If you want different keys or wired your buttons to different pins, you'll need to edit the source and rebuild it yourself.

- To change keys, edit `keymaps/default/keymap.c` and swap in whichever keys you want. Keep the order matching your wiring: position 0 in the keymap should correspond to position 0 in the pin list.
- To change GPIO pins, edit the `matrix_pins.direct` array in `keyboard.json` so it matches how you actually wired your buttons.

To build from source:

1. Install the [QMK CLI](https://docs.qmk.fm/newbs_getting_started). On Windows, use the MSYS2 MinGW 64-bit terminal for all commands below.
2. Place the `minimai` folder inside `qmk_firmware/keyboards/minimai`.
3. Run:
   ```
   qmk compile -kb minimai -km default
   ```
4. The new `.uf2` file will appear in the root of your `qmk_firmware` folder.
5. Flash it using the same BOOTSEL steps as above.
