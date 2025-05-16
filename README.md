# Pixy2 Barcode Command Reader

This Arduino project interfaces with the **Pixy2 Vision Sensor** to detect barcodes and execute corresponding robot commands. The system reads barcodes (values 0–15) and maps them to specific movement instructions, which can later be extended to control motors or servos on a robot.

## Features

- Supports barcode values from **0 to 15**
- Maps barcodes to predefined robot commands
- Displays command via Serial Monitor

## Hardware Requirements

- Arduino-compatible board (e.g., Arduino Uno, Mega, Leonardo)
- [Pixy2.1 cam]
- USB cable for programming
- Optional:I used servos to make a center stage function of the camera.(PANTILT mode in PixyMon)
-In progress to make own code for the pantilt 

## Software Requirements

- Arduino IDE
- Pixy2 Arduino library

### Installing the Pixy2 Library

You can install the Pixy2 library via the Arduino Library Manager:

1. Open Arduino IDE
2. Go to **Sketch > Include Library > Manage Libraries**
3. Search for **Pixy2**
4. Install the **Pixy2 Arduino Library** by Charmed Labs

Alternatively, download from the [[official GitHub repository](https://github.com/charmedlabs/pixy2)](https://pixycam.com/downloads-pixy2/)).

## Setup Instructions

1. Connect the Pixy2 sensor to the Arduino using the ICSP port or via I2C/Serial as supported.
2. Upload the code from [https://github.com/Embedded-IOT-Project/PIXY2.1/blob/main/BARCODE_READING.ino] to your Arduino.
3. Open the Serial Monitor at **115200 baud**.
4. Present a barcode in front of the Pixy2; the command will be displayed based on its value.

## Barcode Command Mapping

| Barcode Value | Command Description                 |
|---------------|-------------------------------------|
| 0             | STOP                                |
| 1             | MOVE FORWARD                        |
| 2             | MOVE BACKWARD                       |
| 3             | TURN LEFT                           |
| 4             | TURN RIGHT                          |
| 5             | SPIN LEFT (360°)                    |
| 6             | SPIN RIGHT (360°)                   |
| 7             | MOVE FORWARD TWICE                  |
| 8             | MOVE BACKWARD TWICE                 |
| 9             | SLIGHT LEFT                         |
| 10            | SLIGHT RIGHT                        |
| 11            | REVERSE TURN LEFT                   |
| 12            | REVERSE TURN RIGHT                  |
| 13            | STOP AND SPIN LEFT                  |
| 14            | STOP AND SPIN RIGHT                 |
| 15            | MOVE DIAGONALLY FORWARD-RIGHT       |


![1b22808a-bcf1-4e2e-8b9b-be12f2507b74](https://github.com/user-attachments/assets/014284b7-2963-4a00-a95a-418a2181131f)
![bbe917fb-3aa6-47d6-9490-559cb6e5f673](https://github.com/user-attachments/assets/d73c2080-e74c-4dd9-9085-11019d9e1bbf)
## Customization

You can modify the pixy 2.1 from the PixyMon app to allign with your assignments.There is Line tracking,Color codes for object detection and also barcode detection

Created by [SHIVESH NAGARAJAN]
