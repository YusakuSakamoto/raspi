#include <wiringPi.h>
#include <iostream>

#define PIN 22

using namespace std;

int main(void){
  wiringPiSetup();
  pinMode( PIN, INPUT);
  float a = 1;

  for(;;){
	a = digitalRead( PIN );
	delay( 10 );

	cout << a << endl;
  }
  return 0;
}
