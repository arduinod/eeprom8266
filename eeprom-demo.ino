#include <EEPROM.h>


void setup() {
  Serial.begin(115200);
  EEPROM.begin(4); //  size being the number of bytes you want to use. 

  // wirte demo
//  EEPROM.write(0, 1);
//  EEPROM.end();
//  Serial.print("\nwirte end");

  // read demo
  Serial.print("\nvalue=");
  byte value = EEPROM.read(0);
  Serial.print(value, DEC);
  Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:

}
