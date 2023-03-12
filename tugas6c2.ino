
/*	This is a default program--
	Use File->Load Prog to load a different program
*/

//pin 2 sebagai input dan pin 8 sebagai output
const int pinButton = 2;
const int pinLED = 8;

void setup()
{
	//pin LED sebagai output
	pinMode(pinButton, INPUT);
	pinMode(pinLED, OUTPUT);

	//aktifkan puul-up resistor
	digitalWrite(pinButton, HIGH);
}

void loop(){
	if(digitalRead(pinButton) == LOW){
		digitalWrite(pinLED, HIGH);
	}else{
		digitalWrite(pinLED, LOW);
	}
}
