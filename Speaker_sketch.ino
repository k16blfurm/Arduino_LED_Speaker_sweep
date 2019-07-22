int speaker_pin = 13; 
int led = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(speaker_pin, OUTPUT);
      
}

void loop() {
  // put your main code here, to run repeatedly:
  int speaker = 0;
  float sweep = 1000;
  bool TRUE = true;
//  pinMode(speaker_pin, OUTPUT);

  while(TRUE == true)
  {
  digitalWrite(speaker_pin, HIGH);
  digitalWrite(led, HIGH);
  delay(sweep);
  digitalWrite(speaker_pin, LOW);
  digitalWrite(led, LOW);
  delay(sweep);
  if(sweep <= 100 && sweep >= 30)
  sweep = sweep -5 ;
  if(sweep <= 1000 && sweep >= 100)
  sweep = sweep - 100;
  if(sweep <= 30 && sweep >= 2)
  sweep = sweep - 0.5;
  delay(10);
  if (sweep == 2)
  sweep = 1;
  if(sweep == 1)
  sweep = sweep /.01;
  }
}
