// 4. 8개의 LED가 0.5초마다 하나씩 켜지도록(오른쪽/왼쪽 반복)

unsigned char k; 


void setup() { 
  for( char i=3 ; i<=10 ; i++ ) pinMode(i, OUTPUT); 
} 

void loop() { 
  char i; 
  for(i=0 ; i<=7 ; i++) {
    if(i==k || i==14-k) digitalWrite(i+3, HIGH);  
    else digitalWrite(i+3, LOW);
  }
// 위 문장을 아래와 같이 간단한 문장으로 만들 수 있음
// for(char i=0 ; i<=7 ; i++) digitalWrite(i+3, i==k || i==14-k);
  k= (k+1)%14; 
  delay(500);              // wait for half second 
}
