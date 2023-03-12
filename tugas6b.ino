
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
	/* Jika timeDelay bernilai lebih kecil sama dengan 0
	maka LED akan diam selama 3 detik
	lalu nilai timeDelay direset ke 1000
	*/

	if(timeDelay <= 100){
		delay(3000);
		timeDelay = 1000;
	}else{
		//nilai timedelay dikurangi 100 jika time delay > 100
		timeDelay = timeDelay - 100;
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
