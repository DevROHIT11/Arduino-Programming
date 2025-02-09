//serial monitor
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600); //tells the serial monitor to initalize the reading data with bodrate

}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available() == 1 ) {  
  
  char name = Serial.read();
  Serial.print(name);
  }
}
