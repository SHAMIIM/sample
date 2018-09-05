int r=10,g=12,b=13;
int R=4,G=6,B=7;
void setup() {
  // put your setup code here, to run once:
 pinMode(r,OUTPUT);pinMode(g,OUTPUT);pinMode(b,OUTPUT);
 pinMode(R,OUTPUT);pinMode(G,OUTPUT);pinMode(B,OUTPUT);
 pinMode(11,OUTPUT);pinMode(5,OUTPUT);
 digitalWrite(11,LOW);
 digitalWrite(5,LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 // digitalWrite(5,HIGH);
 for(int i=10;i<256;++i)
  for(int j=10;j<256;++j)
    for(int k=10;k<256;++k)
    {
      {
        analogWrite(R,i);
        analogWrite(G,i);
        analogWrite(B,i);
        delay(10);
      }
      {
        analogWrite(R,i);
        analogWrite(G,i);
        analogWrite(B,j);
        delay(10);
      }
      {
        analogWrite(R,i);
        analogWrite(G,j);
        analogWrite(B,i);
        delay(10);
      }
      {
        analogWrite(R,i);
        analogWrite(G,j);
        analogWrite(B,j);
        delay(10);
      }
      {
        analogWrite(R,j);
        analogWrite(G,i);
        analogWrite(B,i);
        delay(10);
      }
      {
        analogWrite(R,j);
        analogWrite(G,i);
        analogWrite(B,j);
        delay(10);
      }
      {
        analogWrite(R,j);
        analogWrite(G,j);
        analogWrite(B,i);
        delay(10);
      }
      {
        analogWrite(R,j);
        analogWrite(G,j);
        analogWrite(B,j);
        delay(10);
      }
      {
        analogWrite(R,j);
        analogWrite(G,j);
        analogWrite(B,k);
        delay(10);
      }
      {
        analogWrite(R,j);
        analogWrite(G,k);
        analogWrite(B,j);
        delay(10);
      }
      {
        analogWrite(R,j);
        analogWrite(G,k);
        analogWrite(B,k);
        delay(10);
      }
      {
        analogWrite(R,k);
        analogWrite(G,j);
        analogWrite(B,j);
        delay(10);
      }
      {
        analogWrite(R,k);
        analogWrite(G,j);
        analogWrite(B,k);
        delay(10);
      }
      {
        analogWrite(R,k);
        analogWrite(G,k);
        analogWrite(B,j);
        delay(10);
      }
      {
        analogWrite(R,k);
        analogWrite(G,k);
        analogWrite(B,k);
        delay(10);
      }
    }
}
