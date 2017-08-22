#define LED		6
#define THRESHOLD	500
unsigned int sensor0;

void setup()
{
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(A0, INPUT);
pinMode(A1, INPUT);
pinMode(A2, INPUT);
pinMode(A3, INPUT);
pinMode(A4, INPUT);
pinMode(A5, INPUT);
pinMode(13, OUTPUT);
pinMode(LED, OUTPUT);
}

void loop()
{
delay(500);

sensor0 = analogRead(A0);
Serial.println(sensor0);

digitalWrite(13,!digitalRead(13));

if(sensor0 > THRESHOLD)
    digitalWrite(LED, LOW);
else
    digitalWrite(LED, HIGH);
}
