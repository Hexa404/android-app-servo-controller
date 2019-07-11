//PROJECT #2 HEXA
//apk link https://play.google.com/store/apps/details?id=com.gundel.bluecontrol&hl=en
//led on : case '1' ; led off : case '0'

#include <Servo.h>
int pin_servo = 9;
Servo myservo; 

void setup() {
Serial.begin(9600);
  myservo.attach(pin_servo); 
 }

void loop() {
 
 if(Serial.available()>0)
   {     
      char data= Serial.read(); 
      switch(data)
      {
        case '1': myservo.write(90); 
        case '0': myservo.write(0); 
        default : break;
      }
      Serial.println(data);
   }
   delay(50);
}
