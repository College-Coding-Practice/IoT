
/*	This is a default program--
	Use File->Load Prog to load a different program
*/

//pin 2 & 3 sebagai input digital
const int pinBt1 = 2;
const int pinBt2 = 3;

//ingat pin 9 support PWM
const int pinLED = 9;

void setup()
{
	//pin LED sebagai output
	pinMode(pinBt1, INPUT);
	pinMode(pinBt2, INPUT);
	pinMode(pinLED, OUTPUT);

	//aktifkan puul-up resistor
	digitalWrite(pinBt1, HIGH);
	digitalWrite(pinBt2, HIGH);
}

int brightness = 0;

void loop(){
	if(digitalRead(pinBt1) == LOW){
		//jika pushbutton ditekan
		//tambahkan nilai brighness
		brightness++;
	}else if(digitalRead(pinBt2) == LOW){
		//jika pushbutto2n ditekan
		//kurangi nilai brighness
		brightness--;
	}
	// brightness dibatasi antara 0 - 255
	// jika di bawah 0, maka ganti dengan 0
	// jika di atas 255, maka ganti dengan 255
	brightness = constrain(brightness, 0, 255);

	//pin LED diberi nilai antara 0 - 255
	analogWrite(pinLED, brightness);
	//delay agar perubahannya bertahap
	delay(20);
}