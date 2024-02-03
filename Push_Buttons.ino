int buttonPin1 = 2; //let's took as active low
int buttonPin2 = 4; //let's took as active high

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(buttonPin1,INPUT);
  pinMode(buttonPin2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int button_1_stage = digitalRead(buttonPin1);
  int button_2_stage = digitalRead(buttonPin2);

  //active low
  if (button_1_stage == LOW){
    Serial.println("Push button 1 is pressed.");
    delay(200);  //debounced 
  }

  //active High
  if (button_1_stage == HIGH){
    Serial.println("Push button 2 is pressed.");
    delay(200);  //debounced 
  }

}

