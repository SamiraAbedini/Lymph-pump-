
int in2 = 2; //pump
int in3 = 3; //first valve
int in4 = 4; //second valve
int in5 = 5; //third valve
int in6 = 6; //fourth valve
int in7 = 7; //exit valve
#include <Q2HX711.h>
#include <Average.h>

const byte MPS_OUT_pin = 9; // OUT data pin
const byte MPS_SCK_pin = 10; // clock data pin
int avg_size = 10; // #pts to average over

Q2HX711 MPS20N0040D(MPS_OUT_pin, MPS_SCK_pin); // start comm with the HX710B
Average<long> ave(avg_size);



void setup() {
    pinMode(in2, OUTPUT);
  digitalWrite(in2, HIGH);
   pinMode(in3, OUTPUT);
  digitalWrite(in3, HIGH);
   pinMode(in4, OUTPUT);
  digitalWrite(in4, HIGH);
   pinMode(in5, OUTPUT);
  digitalWrite(in5, HIGH);
   pinMode(in6, OUTPUT);
  digitalWrite(in6, HIGH);
  pinMode(in7, OUTPUT);
  digitalWrite(in7, HIGH);
  Serial.begin(9600); // start the serial port

}






void loop() {
  
FUNC1();
FUNC2();
FUNC3();
FUNC4();
FUNC5();
FUNC6();
FUNC7();

}

void part1(){ //pump close,4 valves close,exit valve open
   digitalWrite(in2, HIGH);
 
  digitalWrite(in3, LOW);

  digitalWrite(in4, LOW);

  digitalWrite(in5, LOW);
  
  digitalWrite(in6, LOW);
 
  digitalWrite(in7, HIGH);
}

void part2(){ //pump open,4 valves close,exit valve open
digitalWrite(in2, LOW);
 
  digitalWrite(in3, LOW);

  digitalWrite(in4, LOW);

  digitalWrite(in5, LOW);
  
  digitalWrite(in6, LOW);
 
  digitalWrite(in7, HIGH);
  }

  
void part3(){ //pump open,first valve open ,3 valves close,exit valve close
digitalWrite(in2, LOW);
 
  digitalWrite(in3, HIGH);

  digitalWrite(in4, LOW);

  digitalWrite(in5, LOW);
  
  digitalWrite(in6, LOW);
 
  digitalWrite(in7, LOW);
  }

void part4(){ //pump open,second valve open ,3 valves close,exit valve close
digitalWrite(in2, LOW);
 
  digitalWrite(in3, LOW);

  digitalWrite(in4, HIGH);

  digitalWrite(in5, LOW);
  
  digitalWrite(in6, LOW);
 
  digitalWrite(in7, LOW);
  }

  
void part5(){ //pump open,third valve open ,3 valves close,exit valve close
  digitalWrite(in2, LOW);
 
  digitalWrite(in3, LOW);

  digitalWrite(in4, LOW);

  digitalWrite(in5,HIGH);
  
  digitalWrite(in6, LOW);
 
  digitalWrite(in7, LOW);
}
  
void part6(){ //pump open,fourth valve open ,3 valves close,exit valve close
 digitalWrite(in2, LOW);
 
  digitalWrite(in3, LOW);

  digitalWrite(in4, LOW);

  digitalWrite(in5, LOW);
  
  digitalWrite(in6, HIGH);
 
  digitalWrite(in7, LOW);
}
  
void part7(){ ////pump close,4 valves close,exit valve open
digitalWrite(in2, HIGH);
 
  digitalWrite(in3, LOW);

  digitalWrite(in4, LOW);

  digitalWrite(in5, LOW);
  
  digitalWrite(in6, LOW);
 
  digitalWrite(in7, HIGH);
  }
  






void FUNC1(){
 
   ave.push(MPS20N0040D.read());
  Serial.println(ave.mean());
  if (ave.mean() < 12539060.00){
    part1();
  }
  else{
    exit(0);
  }
}



void FUNC2(){
   ave.push(MPS20N0040D.read());
  Serial.println(ave.mean());
  if (ave.mean() < 12539060.00){
    part2();
  }
  else{
    exit(0);
  }
  
}



void FUNC3(){
   ave.push(MPS20N0040D.read());
  Serial.println(ave.mean());
  if (ave.mean() < 12539060.00){
    part3();
  }
  else{
    exit(0);
  }
}



void FUNC4(){
   ave.push(MPS20N0040D.read());
  Serial.println(ave.mean());
  if (ave.mean() < 12539060.00){
    part4();
  }
  else{
    exit(0);
  }
}



void FUNC5(){
   ave.push(MPS20N0040D.read());
  Serial.println(ave.mean());
  if (ave.mean() < 12539060.00){
    part5();
  }
  else{
    exit(0);
  }
}


void FUNC6(){
   ave.push(MPS20N0040D.read());
  Serial.println(ave.mean());
  if (ave.mean() < 12539060.00){
    part6();
  }
  else{
    exit(0);
  }
}



void FUNC7(){
   ave.push(MPS20N0040D.read());
  Serial.println(ave.mean());
  if (ave.mean() < 12539060.00){
    part7();
  }
  else{
    exit(0);
  }
}
