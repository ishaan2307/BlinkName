#define dot_time 300 
#define dash_time 900 
#define same_letter 300 
#define diff_letter 900




void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // display ishaan 
  displayI(); 
  delay(diff_letter);
  displayS();
  delay(diff_letter);
  displayH();
  delay(diff_letter); 
  displayA();
  delay(diff_letter); 
  displayN();
  delay(diff_letter); 

}


void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dot_time);
  digitalWrite(LED_BUILTIN, LOW); 
}

void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dash_time);
  digitalWrite(LED_BUILTIN, LOW); 
}

void displayI()
{
  dot();
  delay(same_letter); 
  dot(); 
  
}

void displayS()
{
  dot();
  delay(same_letter);
  dot();
  delay(same_letter);
  dot();
}

void displayH()
{
  dot();
  delay(same_letter);
  dot();
  delay(same_letter);
  dot();
  delay(same_letter);
  dot();
}

void displayA()
{
  dot();
  delay(same_letter);
  dash();
}



void displayN()
{
  dash();
  delay(same_letter);
  dot();
}
