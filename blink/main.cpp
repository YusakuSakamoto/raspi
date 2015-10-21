#include <wiringPi.h>

#define PIN 22

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
