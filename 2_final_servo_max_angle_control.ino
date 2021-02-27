#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int angleInput;
int incomingByte = 0;   // for incoming serial data

void setup() {
  Serial.begin(9600);
  myservo.attach(13);  // attaches the servo on pin 9 to the servo object
}



void loop() {
 if (Serial.available()) {
Serial.println(" Select the following to move servo accordingly");
Serial.println("Key - Angle");
Serial.println("1   -  360");
Serial.println("2   -  90");
Serial.println("3   -  180");
Serial.println("4   -  270");
Serial.println("5   -  15");
                // read the incoming byte:
                
                angleInput = (Serial.read());
                //Serial.println(angleInput);
switch (angleInput)
{
  case 49:
  {
    
    Serial.println(" Press 'r' or 'l' to rotate servo 360 degrees Clocckwise or counter-clockwise and 's' to stop");
                // read the incoming byte:
          while (1) {
                incomingByte = (Serial.read());

                // say what you got:
                if(incomingByte == 114){
                 Serial.println(" sent r Rotaing CW ");
                  
                 myservo.writeMicroseconds(300);
                 
                // myservo.writeMicroseconds(1500) ;
                }else if(incomingByte == 108){
                  Serial.println(" sent l Rotaing CCW "); 
                   myservo.writeMicroseconds(1700); 
                }else if(incomingByte == 115){
                  Serial.println(" sent Stopped "); 
                 myservo.writeMicroseconds(1500); ; 
                }
                else if(incomingByte == 99){
                  break; 
                }
              delay(1700);//for 360 degrees rotation
                 myservo.writeMicroseconds(1500);
  
  }break;}
  case 50:
  {
  Serial.println(" Press 'r' or 'l' to rotate servo 360 degrees Clocckwise or counter-clockwise and 's' to stop");
                // read the incoming byte:
               while(1)
               {
                incomingByte = (Serial.read());

                // say what you got:
                if(incomingByte == 114){
                 Serial.println(" sent r Rotaing CW ");
                  
                 myservo.writeMicroseconds(300);
                 
                // myservo.writeMicroseconds(1500) ;
                }else if(incomingByte == 108){
                  Serial.println(" sent l Rotaing CCW "); 
                   myservo.writeMicroseconds(1700); 
                }else if(incomingByte == 115){
                  Serial.println(" sent Stopped "); 
                 myservo.writeMicroseconds(1500); ; 
                }
                 else if(incomingByte == 99){
                  break; 
                }
              delay(425);//for 90 degrees rotation
                 myservo.writeMicroseconds(1500);
               }
  break;} 
  case 51:
  {
 Serial.println(" Press 'r' or 'l' to rotate servo 360 degrees Clocckwise or counter-clockwise and 's' to stop");
                // read the incoming byte:
               while(1)
               {
                incomingByte = (Serial.read());

                // say what you got:
                if(incomingByte == 114){
                 Serial.println(" sent r Rotaing CW ");
                  
                 myservo.writeMicroseconds(300);
                 
                // myservo.writeMicroseconds(1500) ;
                }else if(incomingByte == 108){
                  Serial.println(" sent l Rotaing CCW "); 
                   myservo.writeMicroseconds(1700); 
                }else if(incomingByte == 115){
                  Serial.println(" sent Stopped "); 
                 myservo.writeMicroseconds(1500); ; 
                }
                 else if(incomingByte == 99){
                  break; 
                }
              delay(850);//for 180 degrees rotation
                 myservo.writeMicroseconds(1500);
               }
  }
  case 52:
  {
 Serial.println(" Press 'r' or 'l' to rotate servo 360 degrees Clocckwise or counter-clockwise and 's' to stop");
                // read the incoming byte:
               while(1)
             {
                incomingByte = (Serial.read());

                // say what you got:
                if(incomingByte == 114){
                 Serial.println(" sent r Rotaing CW ");
                  
                 myservo.writeMicroseconds(300);
                 
                // myservo.writeMicroseconds(1500) ;
                }else if(incomingByte == 108){
                  Serial.println(" sent l Rotaing CCW "); 
                   myservo.writeMicroseconds(1700); 
                }else if(incomingByte == 115){
                  Serial.println(" sent Stopped "); 
                 myservo.writeMicroseconds(1500); ; 
                }
                 else if(incomingByte == 99){
                  break; 
                }
              delay(1275);//for 270 degrees rotation
                 myservo.writeMicroseconds(1500); 
              }

 
break;}
 
                
 case 53:
  {
 Serial.println(" Press 'r' or 'l' to rotate servo 360 degrees Clocckwise or counter-clockwise and 's' to stop");
                // read the incoming byte:
               while(1)
             {
                incomingByte = (Serial.read());

                // say what you got:
                if(incomingByte == 114){
                 Serial.println(" sent r Rotaing CW ");
                  
                 myservo.writeMicroseconds(300);
                 
                // myservo.writeMicroseconds(1500) ;
                }else if(incomingByte == 108){
                  Serial.println(" sent l Rotaing CCW "); 
                   myservo.writeMicroseconds(1700); 
                }else if(incomingByte == 115){
                  Serial.println(" sent Stopped "); 
                 myservo.writeMicroseconds(1500); ; 
                }
                 else if(incomingByte == 99){
                  break; 
                }
              delay(100);//for 15 degrees rotation
                 myservo.writeMicroseconds(1500); 
              }

 
break;}
 }        
       

 } 
}
