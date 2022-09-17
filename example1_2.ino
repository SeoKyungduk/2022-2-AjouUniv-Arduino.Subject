void setup() {
char i;
for( i=3 ; i<=10 ; i++ ) pinMode(i, OUTPUT);
}
char j; // 외부변수 초기값은 0
void loop() {
char i;
for(i=0 ; i<=7 ; i++){
if(i==j) digitalWrite(i+3, HIGH);
else digitalWrite(i+3, LOW);
}
j= (j+1)%8; // j를 1씩 증가시키다가 8이 되면 다시 0으로 만듬
delay(1000); // wait for a second
}
