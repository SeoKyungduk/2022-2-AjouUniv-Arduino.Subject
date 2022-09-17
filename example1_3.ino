// 1. 8개의 LED가 표시하는 8비트 이진수가 0.5초마다 증가하도록  

unsigned char j, k;    // 전역변수(또는 외부변수) j와 k 는 0~255의 값을 가짐

void setup() { 
  char i; 
  for( i=3 ; i<=10 ; i++ ) pinMode(i, OUTPUT); 
  // 위 두 문장을 합하여 아래와 같이 한 문장으로 표현가능
  // for( char i=3 ; i<=10 ; i++ ) pinMode(i, OUTPUT);
  // 내부변수를 처음 사용하기 전에 변수선언
} 

void loop() { 
  j=k; 
  for(char i=3 ; i<=10 ; i++) {   // 9, 1, 4, 0, 2, 0, 1, 00001001
    digitalWrite(i, j%2);  
    j=j/2;  // j/=2; 와 동일
  }
// 위 문장을 아래와 같이 간단한 문장으로 만들 수도 있음
// for(i=3 ; i<=10 ; i++, j=j/2) digitalWrite(i, j%2);
  ++k; 
  delay(500);              // wait for half second 
} 
