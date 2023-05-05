//Library import
#include <Atmega328_IO.h>
//Constructor
Cing Cing;
void setup(){
  Serial.begin(9600);
  Cing.InitUltrasonicSensor();
}
void loop(){
  Serial.print("Distance: ");
  Serial.print(Cing.ReadUltrasonicSensor("Distance"));
  Serial.println(" cm");
  delay(1000);
}