const int VOLT_PIN = A0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    float data = analogRead(VOLT_PIN);
    Serial.println(data);
    delay(100);
}
