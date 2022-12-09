int Led = 5;
int val;
int sensorpin = 2;

int gombpin = 4;
int gomb;
int count=0;

void setup() {
 pinMode(Led, OUTPUT);
 pinMode(sensorpin, INPUT);
 pinMode(gombpin, INPUT);
 Serial.begin(9600);
}

void loop() {
delay(1000);
  gomb = digitalRead(gombpin);
  // Serial.println("Path clear" );
  if (gomb == LOW)
  
  {
    count++; 
    
     Serial.println("gomb kiengedve" );
  } 
  else 
  {
    count=0;
    Serial.println("gomb benyomva" );
  
  }
  
  if (count>=5){
    if (digitalRead(Led)==LOW){
        digitalWrite(Led, HIGH);}
  } else{
        if (digitalRead(Led)==HIGH){
        digitalWrite(Led, LOW);}
  }
  

}

