//for declare a pinout for buzzer
#define buzzer 2 //or we can use int buzzer=2

int num_of_chords = 7;

int C = 262;
int D = 294;
int E = 330;
int F = 349;
int G = 392;
int A = 440;
int B = 494;

int chords[] = {C,D,E,F,G,A,B};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //continuously play CDEFGAB
  for (int i=0; i<8; i++){
    tone(buzzer, chords[i], 500);
    Serial.println(chords[i]);
    noTone(buzzer);
    delay(5);
  }

}
