## Quick Start (Flash the pre-built firmware)
 
No compiling required — just flash the included `minimai_default.uf2`:
 
1. Hold the **BOOTSEL** button on your Pico.
2. While holding it, plug the Pico into your computer via USB.
3. Release BOOTSEL once it's connected — a drive named **RPI-RP2** will appear.
4. Drag and drop `minimai_default.uf2` onto that drive.
5. The Pico will automatically reboot into the new firmware. Done!
## Default Button Mapping
 
| Button | Key | GPIO |
|--------|-----|------|
| A1 | W | GP0 |
| A2 | E | GP1 |
| A3 | D | GP2 |
| A4 | C | GP3 |
| A5 | X | GP4 |
| A6 | Z | GP5 |
| A7 | A | GP6 |
| A8 | Q | GP7 |
 
## Customizing
 
Want different keys or a different pin layout? You'll need to edit the source and rebuild.
 
**To change keys:**
Edit `keymaps/default/keymap.c` and swap the `KC_*` values to whatever keys you want. The order matches the pin order below (position 0 = first key = first pin, and so on).
 
**To change GPIO pins:**
Edit the `matrix_pins.direct` array in `keyboard.json`. Each entry corresponds to the same position in `keymap.c` — so if you rewire A1 to a different pin, update its position in this array to match.
 
```json
"matrix_pins": {
  "direct": [
    ["GP0", "GP1", "GP2", "GP3", "GP4", "GP5", "GP6", "GP7"]
  ]
}
```
 
**Building from source:**
 
1. Install the [QMK CLI](https://docs.qmk.fm/newbs_getting_started) (Windows users: use the MSYS2 MinGW 64-bit terminal for all commands below).
2. Place this folder inside `qmk_firmware/keyboards/minimai`.
3. Compile:
```
   qmk compile -kb minimai -km default
```
4. The new `.uf2` will appear in the root of your `qmk_firmware` folder.
5. Flash it using the same BOOTSEL steps as above.
## Files
 
```
minimai/
├── config.h
├── keyboard.json
├── rules.mk
├── minimai.c
├── keymaps/
│   └── default/
│       └── keymap.c
├── minimai_default.uf2
└── README.md
```
 
## Hardware
 
- Microcontroller: Raspberry Pi Pico (RP2040)
- 8 buttons, direct-wired (no diode matrix)
- Debounce: 5ms
