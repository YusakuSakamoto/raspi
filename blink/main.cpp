#include <wiringPi.h>

#define PIN 2

int main(void){
  wiringPiSetup();
  pinMode( PIN, OUTPUT);

  for(;;){
	digitalWrite( PIN,HIGH);
	delay(500);
	digitalWrite( PIN,LOW);
	delay(500);
  }
  return 0;
}
