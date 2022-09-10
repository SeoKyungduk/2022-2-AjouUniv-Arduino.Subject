void setup()
{
// initialize digital pin 13 as an output.
pinMode(13, OUTPUT);
}
void loop()
{
digitalWrite(13, HIGH);
delay(100); // wait for a half second
digitalWrite(13, LOW);
delay(100); // wait for a half second
}
