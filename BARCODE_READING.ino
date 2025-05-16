#include <Pixy2.h>

Pixy2 pixy;

void setup() {
  Serial.begin(115200);
  pixy.init();
  Serial.println("Pixy2 Barcode Reader Initialized.");
  Serial.println("Note: Barcode values are from 0 to 15 and represent robot commands.");
}

void loop() {
  pixy.line.getMainFeatures();

  if (pixy.line.numBarcodes > 0) {
    int code = pixy.line.barcodes[0].m_code;

    Serial.print("Barcode detected: ");
    Serial.println(code);

    if (code >= 0 && code <= 15) {
      switch (code) {
        case 0:
          Serial.println("Command: STOP");
          break;
        case 1:
          Serial.println("Command: MOVE FORWARD");
          break;
        case 2:
          Serial.println("Command: MOVE BACKWARD");
          break;
        case 3:
          Serial.println("Command: TURN LEFT");
          break;
        case 4:
          Serial.println("Command: TURN RIGHT");
          break;
        case 5:
          Serial.println("Command: SPIN LEFT (360 degrees)");
          break;
        case 6:
          Serial.println("Command: SPIN RIGHT (360 degrees)");
          break;
        case 7:
          Serial.println("Command: MOVE FORWARD TWICE");
          break;
        case 8:
          Serial.println("Command: MOVE BACKWARD TWICE");
          break;
        case 9:
          Serial.println("Command: SLIGHT LEFT");
          break;
        case 10:
          Serial.println("Command: SLIGHT RIGHT");
          break;
        case 11:
          Serial.println("Command: REVERSE TURN LEFT");
          break;
        case 12:
          Serial.println("Command: REVERSE TURN RIGHT");
          break;
        case 13:
          Serial.println("Command: STOP AND SPIN LEFT");
          break;
        case 14:
          Serial.println("Command: STOP AND SPIN RIGHT");
          break;
        case 15:
          Serial.println("Command: MOVE DIAGONALLY FORWARD-RIGHT");
          break;
      }
    } else {
      Serial.println("Invalid barcode! Value must be 0-15.");
    }
  }

  delay(100); // Manage serial update rate
}