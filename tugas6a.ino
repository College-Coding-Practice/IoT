
/*	This is a default program--
	Use File->Load Prog to load a different program
*/

const int pinLED = 8;
const int pinLED1 = 7;

void setup()
{
	//pin LED sebagai output
	pinMode(pinLED, OUTPUT);
	pinMode(pinLED1, OUTPUT);
}

//awal timedelay 1000 | 1
int timeDelay = 1000;

void loop()
{
	//setiap looping, nilai timedelay dikurangi 100
	timeDelay = timeDelay - 100;
	
	/*jika timedelay bernilai 0 atau negatif
	maka nilai timedelay direset ke 1000*/
	if(timeDelay <= 0){
		timeDelay = 1000;
	}
	
	//nyalakan dan matikan LED selama timedelay
	digitalWrite(pinLED, HIGH);
	delay(500);
	digitalWrite(pinLED, LOW);
	delay(500);
	digitalWrite(pinLED1, HIGH);
	delay(500);
	digitalWrite(pinLED1, LOW);
	delay(500);
}
