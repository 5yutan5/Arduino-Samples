const int VOLT_PIN = A0;
float R = 100000;
float voltages = 0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    for(int i=0; i < 10; i++){
      voltages += float(analogRead(VOLT_PIN)) * 5 / 1024;
      delay(10);
    }
    float voltage = voltages / 10;
    float resistance = voltage * R / (5 - voltage + 0.00000001);
    Serial.println(resistance);
    voltages = 0;
    delay(10);
}
