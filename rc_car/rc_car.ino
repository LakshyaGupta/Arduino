#include <Wire.h> 
#include <LiquidCrystal_I2C.h>



#define BACKLIGHT_PIN     13

// defines pins numbers
const int SW_pin = 2; // digital pin connected to switch output
const int X_pin = 0; // analog pin connected to X output
const int Y_pin = 1; // analog pin connected to Y output
const int trigPin = 9;
const int echoPin = 10;
long duration;
int distance;
int motor1 = 7;
int motor2 = 8;
//LiquidCrystal_I2C lcd(0x27);  // Set the LCD I2C address

//LiquidCrystal_I2C lcd(0x38, BACKLIGHT_PIN, POSITIVE);  // Set the LCD I2C address

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
// Creat a set of new characters
/*const uint8_t charBitmap[][8] = {
   { 0xc, 0x12, 0x12, 0xc, 0, 0, 0, 0 },
   { 0x6, 0x9, 0x9, 0x6, 0, 0, 0, 0 },
   { 0x0, 0x6, 0x9, 0x9, 0x6, 0, 0, 0x0 },
   { 0x0, 0xc, 0x12, 0x12, 0xc, 0, 0, 0x0 },
   { 0x0, 0x0, 0xc, 0x12, 0x12, 0xc, 0, 0x0 },
   { 0x0, 0x0, 0x6, 0x9, 0x9, 0x6, 0, 0x0 },
   { 0x0, 0x0, 0x0, 0x6, 0x9, 0x9, 0x6, 0x0 },
   { 0x0, 0x0, 0x0, 0xc, 0x12, 0x12, 0xc, 0x0 }
   
};*/

void setup()
{
   //int charBitmapSize = (sizeof(charBitmap ) / sizeof (charBitmap[0]));

  // Switch on the backlight
  //pinMode ( BACKLIGHT_PIN, OUTPUT );
  //digitalWrite ( BACKLIGHT_PIN, HIGH );
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(9600); // Starts the serial communication
  lcd.begin(16,2);               // initialize the lcd 

   //for ( int i = 0; i < charBitmapSize; i++ )
   //{
     // lcd.createChar ( i, (uint8_t *)charBitmap[i] );
   //}

  lcd.home ();                   // go home
  lcd.print("Hello Lakshya,");  
  lcd.setCursor ( 0, 1 );        // go to the next line
  lcd.print ("Turning on car");
  delay (5000);
  lcd.clear();
  Serial.print("hello");
}

void loop() {
/*digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
//distanceInch = duration*0.0133/2;
lcd.setCursor(0,0); // Sets the location at which subsequent text written to the LCD will be displayed
lcd.print("Distance: "); // Prints string "Distance" on the LCD
lcd.print(distance); // Prints the distance value from the sensor
lcd.print(" cm");
if(distance <= 20)
{
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
}
else 
{
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, HIGH);
}
delay(10);*/

}
