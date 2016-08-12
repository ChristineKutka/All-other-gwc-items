#include <Servo.h>

Servo Right;
Servo Left;

void clock_(){
  Left.writeMicroseconds(1300);
  
}
void counter()
{
  Right.writeMicroseconds(1700);
}

void Forward()
{ 
  Right.writeMicroseconds(1700);
  Left.writeMicroseconds(1300);
}
void Back()
{ 
  Left.writeMicroseconds(1700);
  Right.writeMicroseconds(1300);
}
void MoveLeft()
{
 //Right.writeMicroseconds(1500);
 Left.writeMicroseconds(1700);
}

void MoveRight()
{
  Right.writeMicroseconds(1300);
}
void setup() {
  // put your setup code here, to run once:
  Left.attach(13);
  Right.attach(12);
  Left.writeMicroseconds(1500);
  Right.writeMicroseconds(1500);
}

void loop() {
  // put your main code here, to run repeatedly:
//Forward();
//delay(1000);
//MoveLeft();
//delay(500);
//Back();
//delay(5000);


}
