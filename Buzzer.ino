const int photo = 3;
const int BUZZ = 9;
 
void setup() {
  //Pin Configurations
  //Outputs
  pinMode(BUZZ, OUTPUT);
  digitalWrite(BUZZ, LOW);
 
  //Inputs
  pinMode(photo, INPUT_PULLUP);
 
}
 
void loop() {
  //if/else loop checks if photoresistor is high or low
  if(digitalRead(photo)==HIGH){
    digitalWrite(BUZZ, HIGH);
  }else{
    digitalWrite(BUZZ, LOW);
  }
 
}
