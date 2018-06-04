#include <Servo.h>

Servo x; // 27 to 47
Servo y; //102 to 122
int i;

#define laser 10


void setup() 
{
  x.attach(5);
  y.attach(3);
  pinMode(laser,OUTPUT);
  digitalWrite(laser,1);

 
  digitalWrite(laser,1);
  x.write(47);
  y.write(122);
  delay(1000);
}

void loop() 
{   

/*let_P();
delay(250);
*/

let_I();
delay(500);
let_C();
delay(500);
let_T();
delay(500);
let_U();
delay(500);




/*let_T();
delay(250);
delay(150);

*/
}

void let_P()
{
  x.write(30);
  y.write(112);  
  delay(100);
  
  digitalWrite(laser,1);
  delay(10);
  
  x.write(30);
  y.write(112);
  delay(100);

  x.write(45);
  y.write(112);
  delay(100);


  x.write(45);
  y.write(102);
  delay(100);

  x.write(27);
  y.write(102);
  delay(100);
 
  x.write(33);
  y.write(120);
  delay(100);
  
  digitalWrite(laser,0);
  delay(10);
}

void let_I()
{
  x.write(38);
  y.write(102);
  delay(100);
  digitalWrite(laser,1);
  delay(10);
  x.write(38);
  y.write(102);
  delay(100);
  x.write(38);
  y.write(122);
  delay(100);
  digitalWrite(laser,0);
  delay(10);
}


void let_C()
{
  x.write(47);
  y.write(102);
  delay(80);

  digitalWrite(laser,1);
  delay(10);
  x.write(47);
  y.write(102);
  delay(80);

  x.write(27);
  y.write(102);
  delay(80);

  x.write(33);
  y.write(120);
  delay(80);

  x.write(43);
  y.write(120);
  delay(80);
  digitalWrite(laser,0);
  delay(10);
}



void let_T()
{
  x.write(27);
  y.write(105);
  delay(100);

  digitalWrite(laser,1);
  delay(100);

  x.write(27);
  y.write(105);
  delay(100);

  x.write(47);
  y.write(105);
  delay(100);
  
  digitalWrite(laser,0);
  delay(50);
  
  x.write(35);
  y.write(105);
  delay(50);

  digitalWrite(laser,1);
  delay(100);

  x.write(35);
  y.write(122);
  delay(120);

  digitalWrite(laser,0);
  delay(100);
}




void let_U()
{
  delay(100);
  x.write(20);
  y.write(102);
  delay(100);
  digitalWrite(laser,1);
  
  delay(10);
  x.write(37);
  y.write(122);
  
  delay(100);
  
  x.write(47);
  y.write(102);

  delay(100);
  digitalWrite(laser,0);
  delay(10);
/*********************/ 
}



