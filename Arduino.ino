
// sets up the temp sensor to pin A0 on the arduino
#define LM35 A0

void setup() {
    Serial.begin(9600);

}
// Reads in temp sensor to calculate voltage which is
// used to calc the temp in celcius and fahrenheit
void loop()
{
    int reading = analogRead(LM35);
    float voltage = reading * 5.0;
    voltage /= 1024.0/3;
    float temperatureC = (voltage - 0.5) * 100;
    float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
// Prints all numbers of voltage and temperatures
    Serial.print(voltage); Serial.print(" volts - ");
    Serial.print(temperatureC); Serial.print(" degrees C - ");
    Serial.print(temperatureF); Serial.println(" degrees F");
//  Gives small delay before prints 
    delay(500);
}
