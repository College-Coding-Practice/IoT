
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

	//selama nilai timedelay > 0
	//eksekusi blok program ini
	while(timeDelay > 0){
		//LED hidup mati dengan durasi 500 milisekon
		//nyalakan dan matikan LED selama timedelay
		digitalWrite(pinLED, HIGH);
		delay(500);
		digitalWrite(pinLED, LOW);
		delay(500);
		digitalWrite(pinLED1, HIGH);
		delay(500);
		digitalWrite(pinLED1, LOW);
		delay(500);

		//kurangi timedelay dengan 100
		timeDelay = timeDelay - 100;
	}

	// setelah timeDelay dikurangi terus-menerus
	// maka pada akhirnya akan bernilai minus atau < 0
	// maka while di atas akan berhenti
	// selama nilai timeDelay < 1000
	// eksekusi blok program ini
	while(timeDelay < 1000){
		//led hidup mati dengan durasi 100 milisekon
		digitalWrite(pinLED, HIGH);
		delay(100);
		digitalWrite(pinLED, LOW);
		delay(100);
		digitalWrite(pinLED1, HIGH);
		delay(100);
		digitalWrite(pinLED1, LOW);
		delay(100);

		//tambahkan timedelay dengan 100
		timeDelay = timeDelay + 100;
	}
}
