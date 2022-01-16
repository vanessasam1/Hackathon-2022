int p1P = 11;
int p1N = 10;
int p2P = 9; 
int p2N = 8;
int p3P = 7;
int p3N = 6;
int p4P = 5;
int p4N = 4;
int p1p2p3p4P = 3;
int p1p2p3p4N = 2;

int threshold = 900;

void setup() 
{
  Serial.begin(9600);
  pinMode(p1P, OUTPUT);
  pinMode(p1N, OUTPUT);

  pinMode(p2P, OUTPUT);
  pinMode(p2N, OUTPUT);

  pinMode(p3P, OUTPUT);
  pinMode(p3N, OUTPUT);

  pinMode(p4P, OUTPUT);
  pinMode(p4N, OUTPUT);

  pinMode(p1p2p3p4P, OUTPUT);
  pinMode(p1p2p3p4N, OUTPUT);

}

void loop(){
  int ps1 = analogRead(1);
  int ps2 = analogRead(2);
  int ps3 = analogRead(3);
  int ps4 = analogRead(4);
  Serial.println(ps3);
  if(ps1 < threshold){
    digitalWrite(p1P, LOW);
    digitalWrite(p1N, HIGH);
  }
  
  if(ps2 < threshold){
    digitalWrite(p2P, LOW);
    digitalWrite(p2N, HIGH);
  }
  
  if(ps3 < threshold){ 
    digitalWrite(p3P, LOW);
    digitalWrite(p3N, HIGH);
  }
  
  if(ps4 < threshold){
    digitalWrite(p4P, LOW);
    digitalWrite(p4N, HIGH);
  }
  
  if(ps1 < threshold && ps2 < threshold && ps3 < threshold && ps4 < threshold){
    digitalWrite(p1P, HIGH);
    digitalWrite(p2P, HIGH);
    digitalWrite(p3P, HIGH);
    digitalWrite(p4P, HIGH);
    digitalWrite(p1p2p3p4P, LOW);
    digitalWrite(p1p2p3p4N, HIGH);
  }

}
