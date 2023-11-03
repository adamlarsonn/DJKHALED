#define LM35 A0

void setup() {
    Serial.begin(9600);

}

void loop()
{
    int reading = analogRead(LM35);
    float voltage = reading * 5.0;
    voltage /= 1024.0/3;
    float temperatureC = (voltage - 0.5) * 100;
    float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;

    Serial.print(voltage); Serial.print(" volts - ");
    Serial.print(temperatureC); Serial.print(" degrees C - ");
    Serial.print(temperatureF); Serial.println(" degrees F");

    delay(500);
}