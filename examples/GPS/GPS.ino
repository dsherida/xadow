/*
 * Xadow GPS example
 * 
 * Sketch is simply a serial passthrough to the GPS module
 * 
 * Here we're just printing the characters to screen, but you might log the data
 * or pass it through to OLED or BLE, or look into Arduiniana's tinyGPS++ to parse
 * out some bit of data you're looking for
 * http://arduiniana.org/2013/09/tinygps-a-new-view-of-global-positioning/
 * 
 */

#define SerialBaud   9600
#define Serial1Baud  9600
void setup()
{
  Serial.begin(SerialBaud);
  Serial1.begin(Serial1Baud);
}

void loop()
{
  for(;;)
  {
    // copy from virtual serial line to uart and vice versa
   /*
    */
    if (Serial.available())
    {
      Serial1.write(Serial.read());
    }
    if (Serial1.available())
    {
      Serial.write(Serial1.read());
    }
  }
}
