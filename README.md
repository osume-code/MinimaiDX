# MinimaiDX
 
### An 8-button AstroDX-style controller for tablet-sized devices, using keyboard inputs
 
<img width="1600" height="1280" alt="MinimaiDX build photo 1" src="https://github.com/user-attachments/assets/066b46a7-9b18-43fa-b69f-c212d9bad321" />
<img width="1600" height="1280" alt="MinimaiDX build photo 2" src="https://github.com/user-attachments/assets/3828a0d2-582c-4cd8-b160-8d43528486ad" />
<img width="1600" height="1280" alt="MinimaiDX build photo 3" src="https://github.com/user-attachments/assets/dc0c6697-9cc0-4285-a48f-895b6eadeff8" />
*These are older photos taken before switching to the Pi Pico — the current version uses a smaller, more compact dongle.*
 
<img width="1399" height="1119" alt="MinimaiDX compact Pico version" src="https://github.com/user-attachments/assets/399f73be-62b6-4677-a981-c8b11a619bf3" />

## Features

- Adaptable to various tablet sizes
- Minimal hardware needed — no PCB required
- Very cheap to build
- No screws — cut filament is used as hinges

## Materials
 
| Item | Notes |
|---|---|
| 30 AWG wire | for wiring switches to the Pico |
| 8× Kailh Red switches | low-profile |
| Raspberry Pi Pico | a USB-C knockoff is recommended for convenience |
| 3D printer filament | any color — transparent PETG was used for the original |
 
## Requirements
 
- Basic soldering skills (this was my first-ever soldering project, so don't worry if you're new too)
- A 3D printer, ideally with a 220×220 mm or larger print area
- A tablet with USB host mode support (or an OTG adapter if it doesn't)
- Some CAD editing, most likely — see below
## Before You Build
 
The original design was built to exactly fit an **iPad Air (3rd generation)**. If you have a different device, you'll almost certainly need to modify the CAD files — specifically the switch slots and hinge holes — to match your tablet's dimensions.
 
I'm a student and my CAD skills are decent at best, so the files aren't perfectly parametric. If you're not confident editing CAD files yourself, feel free to reach out on Discord (**invisble.**) — happy to help when I have time.
 
## Build Guide
 
Full assembly instructions: **[Build guide.md](https://github.com/osume-code/MinimaiDX/blob/main/Build%20guide.md)**
 
## License
 
This project is licensed under **CC BY-NC 4.0**.
 
That means: build one for yourself or a friend for free, no problem. Don't sell it or otherwise make money from it. Plagiarizing this project without crediting the original author is not okay.
 
Interested in buying a unit or discussing commercial use? Reach out on Discord: **invisble.**
 
[![CC BY-NC 4.0][cc-by-nc-image]][cc-by-nc]
 
[cc-by-nc]: https://creativecommons.org/licenses/by-nc/4.0/
[cc-by-nc-image]: https://licensebuttons.net/l/by-nc/4.0/88x31.png
 
## Disclaimer
 
This is a personal project built in my own time, without any official endorsement. I'll keep listening to feedback and improving it where I can, and I've done my best to make sure everything here is accurate — but mistakes can happen. I can't be held responsible for any loss of time or money resulting from using this project. Thanks for understanding!
