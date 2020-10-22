#include <SoftwareSerial.h>

SoftwareSerial BT(0, 1); //TX, RX respetively
String readvoice;
#include  <Wire.h>
#include  <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
void setup() {
 BT.begin(9600);
 lcd.init();                      // initialize the lcd 
 lcd.backlight();
 Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

}
//-----------------------------------------------------------------------// 
void loop() {
  while (BT.available()){  //Check if there is an available byte to read
  if (Serial.available()) {
    // wait a bit for the entire message to arrive
    delay(100);
    // clear the screen
    lcd.clear();
    // read all the available characters
    while (Serial.available() > 0) {
      // display each character to the LCD
      lcd.write(Serial.read());
    }
 
  }
  delay(10); //Delay added to make thing stable
  char c = BT.read(); //Conduct a serial readz 
  readvoice += c; //build the string- "forward", "reverse", "left" and "right"
  } 
  if (readvoice.length() > 0) {
    Serial.println(readvoice);

  if( readvoice == "forward" )
  {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    delay(100);
  }

  else if(readvoice == "back")
  {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6,LOW);
    delay(100);
  }

 if (readvoice == "left")
  {
    digitalWrite (3,HIGH);
    digitalWrite (4,LOW);
    digitalWrite (5,LOW);
    digitalWrite (6,LOW);
   delay (2000);
     readvoice="stop";
     lcd.clear();
     lcd.write("stop");
  
  }

 if ( readvoice == "right")
 {
   digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (2000);
     readvoice="stop";
     lcd.write("stop");
 }

if (readvoice == "stop")
 {
   digitalWrite (3, LOW);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (100);
 }
 else if (readvoice == "keep watch in all direction")
 {
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (100);
 }
  else if (readvoice == "show me Garba")
 {
   digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
    digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);

digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   delay (400);
      digitalWrite(3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite (3, LOW);
   digitalWrite (4, HIGH);
   digitalWrite (5, HIGH);
   digitalWrite (6, LOW);
   delay (500);
   digitalWrite (3, HIGH);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, HIGH);
   delay (500);
 }
 readvoice="";
 }
 } //Reset the variable
