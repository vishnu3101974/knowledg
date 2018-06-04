

#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }


  Serial.println("Optical Tx");

 
  mySerial.begin(4800);

}

void loop() 
{ 
  if (Serial.available()) {
    mySerial.write(Serial.read());
  }
}

