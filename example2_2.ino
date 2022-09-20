void setup(){
pinMode(13, OUTPUT);
pinMode(12, INPUT_PULLUP);
}
void loop(){
char button;
button = digitalRead(12);
if(button == LOW) // 누르면 0(LOW)
digitalWrite(13, HIGH);
else digitalWrite(13, LOW);
}
