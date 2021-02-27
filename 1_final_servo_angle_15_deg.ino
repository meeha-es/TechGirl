#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int incomingByte = 0;   // for incoming serial data

void setup() {
  Serial.begin(9600);
  myservo.attach(13);  // attaches the servo on pin 9 to the servo object
}



void loop() {
  

        // send data only when you receive data:
        if (Serial.available()) {
                // read the incoming byte:
                incomingByte = (Serial.read());

                // say what you got:
                if(incomingByte == 114){
                 Serial.println(" sent 'r' Rotaing CW ");
                  
                 myservo.writeMicroseconds(300);
                 
                // myservo.writeMicroseconds(1500) ;
                }else if(incomingByte == 108){
                  Serial.println(" sent 'l' Rotaing CCW "); 
                   myservo.writeMicroseconds(1700); 
                }else if(incomingByte == 115){
                  Serial.println(" sent Stopped "); 
                 myservo.writeMicroseconds(1500); ; 
                }
              delay(100);
                 myservo.writeMicroseconds(1500);   
        }

  
}
