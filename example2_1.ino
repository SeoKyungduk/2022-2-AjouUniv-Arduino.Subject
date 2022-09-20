void setup(){
pinMode(13, OUTPUT);
pinMode(9, INPUT);
}
void loop(){
char button;
button = digitalRead(9);
if(button == HIGH)
digitalWrite(13, HIGH);
else digitalWrite(13, LOW);
}
