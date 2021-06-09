const int VOLT_PIN = A0;
float data;
float voltage;

void setup()
{
    Serial.begin(9600);
}


void loop()
{
    float data = analogRead(VOLT_PIN);
    voltage = data * 5 / 1024;
    Serial.println(voltage);
    delay(100);
}
