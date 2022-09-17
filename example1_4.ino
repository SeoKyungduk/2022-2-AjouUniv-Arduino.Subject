// 2. 8개의 LED가 표시하는 8비트 이진수가 0.5초마다 감소하도록  

unsigned char j, k=255; 

void setup() { 
  for( char i=3 ; i<=10 ; i++ ) pinMode(i, OUTPUT); 
} 

void loop() { 
  j=k; 
  for(char i=3 ; i<=10 ; i++, j=j/2) digitalWrite(i, j%2);  
  --k; 
  delay(500);              // wait for half second 
}
