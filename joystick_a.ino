int A = 0,B = 0;
int a = 4, b = 5, c = 6, d = 7;
void setup(){
  Serial.begin(9600);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  
}
void loop(){
  A=analogRead(A0);
  B=analogRead(A1);
  if(A>=700){
    Serial.println("MF");
    MB();
  }
  if(A<=300){
    Serial.println("MB");
    MF();
  }
  if(B>=700){
    Serial.println("MR");
    ML();
  }
  if(B<=300){
    Serial.println("ML");
    MR();
  }
  if(A>=450 && A <= 550  && B >= 450 && B <= 550){
    Serial.println("MS");
    MS();
  }
}
void MF(){
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  delay(10);
}
void MB(){
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  delay(10);
}
void ML(){
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  delay(10);
}
void MR(){
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  delay(10);
}
void MS() {
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  delay(10);
}
