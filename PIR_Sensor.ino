#define SENSOR_PIN D2
#define led_PIN D1
#define led_PIN2 D0



void setup() {
  
  pinMode(SENSOR_PIN,INPUT);
  pinMode(led_PIN,OUTPUT);
  pinMode(led_PIN2,OUTPUT);
  Serial.begin(9600);

}

void loop() {
 int motion=digitalRead(SENSOR_PIN);

 if(motion){
  Serial.println("Motion Detected");
  digitalWrite(led_PIN,HIGH);
  delay(2000);
 }
else{
   Serial.println("No Motion Detected");
   digitalWrite(led_PIN,LOW);
  delay(2000);
}



}
