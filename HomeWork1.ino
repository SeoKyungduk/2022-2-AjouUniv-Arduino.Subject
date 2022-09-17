#define Delay_Time 500

void setup(){
  char i; 
  for(char i=3; i<=10; i++ ) pinMode(i, OUTPUT); 
}

void loop(){
  char i;
  for(i=0; i<=7; i++){
    digitalWrite(i+4, HIGH);
    delay(Delay_Time);
  }
  for(i=0; i<=7; i++){
    digitalWrite(i+4, LOW);
    delay(Delay_Time);
  }
}
