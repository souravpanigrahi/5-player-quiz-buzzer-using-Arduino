/* 5 Buttons Quiz Buzzer*/

int x=1;// take int value as 1
int y;

void setup() 
{
 //Serial.begin(9600);
 pinMode(13,INPUT); // Button 1
 pinMode(12,INPUT); // Button 2
 pinMode(11,INPUT); // Button 3
 pinMode(10,INPUT); // Button 4
 pinMode(9,INPUT);  // Button 5
 pinMode(8,INPUT);  // RESET Button
 pinMode(7,OUTPUT); // LED 1
 pinMode(6,OUTPUT); // LED 2
 pinMode(5,OUTPUT); // LED 3
 pinMode(4,OUTPUT); // LED 4
 pinMode(3,OUTPUT); // LED 5
 pinMode(2,OUTPUT); // Buzzer
               
}

void loop() 
{
 if(digitalRead(13)==HIGH&&x==1)  //if 1 player press button
 {
   y=7;
   x++; //increment x
   //Serial.println("Button 1 Pressed");
   tone(2,500,500);// Buzzer ON
 }

 else if(digitalRead(12)==HIGH&&x==1)  //if 2 player press button
 {
   y=6;
   x++; //increment x
   //Serial.println("Button 2 Pressed");
   tone(2,500,500);// Buzzer ON
 }
 
 else if(digitalRead(11)==HIGH&&x==1)  //if 3 player press button
 {
   y=5;
   x++; //increment x
   //Serial.println("Button 3 Pressed");
   tone(2,500,500);// Buzzer ON
 }
  
 else if(digitalRead(10)==HIGH&&x==1)  //if 4 player press button
 {
   y=4;
   x++; //increment x
   //Serial.println("Button 4 Pressed");
   tone(2,500,500);// Buzzer ON
 }
  
 else if(digitalRead(9)==HIGH&&x==1)  //if 5 player press button
 {
   y=3;
   x++; //increment x
   //Serial.println("Button 5 Pressed");
   tone(2,500,500);// Buzzer ON
 }
   
  //Reset Variables
 else
 {
  y=0;
  x=1;
 }
  
  
 //Participant LED Blinking
 if(y!=0)
 {
   for(int z=0;z<10;z++)
   {
     if(digitalRead(8)==HIGH){break;}//if RESET button pressed
     
     digitalWrite(y,HIGH);
     delay(500);
     digitalWrite(y,LOW);
     delay(500);
   }
 }
}