
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
int timeDelay = 3000;

void loop()
{

	// perulangan sebanyak 10 kali dari 1 hingga 10
	for(int i=1; i<=10; i++){
		//led hidup mati dengan durasi 500 milisekon
		digitalWrite(pinLED, HIGH);
		delay(500);
		digitalWrite(pinLED, LOW);
		delay(500);
		digitalWrite(pinLED1, HIGH);
		delay(500);
		digitalWrite(pinLED1, LOW);
		delay(500);
	}

	//diam selama 3 detik
	delay(timeDelay);
}
