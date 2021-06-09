const int LED_PIN = A7;
const int VOLT_INPUT_PIN = A0;
int LOOP_COUNTER = 0;
boolean isHIGH = true;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  LOOP_COUNTER++;
  if ((int)(LOOP_COUNTER % 20) == 1){
    if (isHIGH){
      digitalWrite(LED_PIN, HIGH);
      isHIGH = false;
      Serial.print("TRUE,"+(String)(millis()/1000));
    } else{
      digitalWrite(LED_PIN, LOW);
      isHIGH = true;
      Serial.print("FALSE,"+(String)(millis()/1000));
    }
  }
  float data = analogRead(VOLT_INPUT_PIN);
  float voltage = data * 5 / 1024;
  Serial.println(data);
  delay(100);
}
