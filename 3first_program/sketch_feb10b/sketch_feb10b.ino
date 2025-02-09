//PROGRAM FOR ONBOARD LED AT PIN 13 IN ARDUINO TO BLINK 

void setup() {
  // put your setup code here, to run once:
  
  pinMode(13 , OUTPUT); //will send output to pin 13
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(13 , HIGH);
  delay(1000); // 1 sec ke liye on hoga
  digitalWrite(13 , LOW);
  delay(1000);  // 1 sec ke liye off hoga

}
