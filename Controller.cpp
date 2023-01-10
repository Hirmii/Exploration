#include<Mouse.h> 

int horzPin = A2;
int vertPin = A0;
int selPin = 9;

int vertZero, horzZero;
int vertValue , horzValue;
const int sensitivity = 300;
int mouseClickFlag = 0;


void setup() {
  // put your setup code here, to run once:
      
Serial.begin(9600);
pinMode(horzPin , INPUT);
pinMode(vertPin , INPUT);
pinMode(selPin , INPUT);
digitalWrite(selPin , HIGH);
delay(1000);
vertZero = analogRead(vertPin);
horzZero = analogRead(horzPin);

}

void loop() {
  // put your main code here, to run repeatedly:

vertValue = analogRead(vertPin) - vertZero;
horzValue = analogRead(horzPin) - horzZero;

analogRead(vertPin);
analogRead(horzPin);

if(vertValue!= 0)
  Mouse.move(0 , vertValue/sensitivity , 0);
if(horzValue!=0)
Mouse.move((horzValue/sensitivity) *-1 , 0 , 0 );

if((digitalRead(selPin) == 0) && (!mouseClickFlag))
{
    mouseClickFlag = 1;
    Mouse.press(MOUSE_LEFT);
}

else if( (digitalRead(selPin)) && (mouseClickFlag))
{
    mouseClickFlag = 0;
     Mouse.release(MOUSE_LEFT);    
}



}