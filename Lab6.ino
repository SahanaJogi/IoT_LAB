//Define the pin where the sensor is connected 
const int sensorPin=A1;//AnalogpinA1 for the soilmoisture sensor  
const int ledPin = 13;// Digital pin 13 for an alert LED (optional) 
//Define moisture threshold values 
const int dryThreshold=800;//Higher values indicate drysoil  
const int wetThreshold=500;//Lower values indicate wetsoil 
void setup(){ 
//Initialize the serial communication  
Serial.begin(9600); 
// Set the LED pin as output  
pinMode(ledPin,OUTPUT); 
Serial.println("SoilMoisture Sensor TestStarting..."); 
} 
void loop(){ 
//Read the sensor value 
int sensorValue=analogRead(sensorPin); 
//Print the sensor value for debugging  
Serial.print("Soil Moisture Level: ");  
Serial.println(sensorValue); 
//Check soilmoisture levels and take action  
if (sensorValue > dryThreshold) { 
Serial.println("Soil is DRY. Watering required.");  
digitalWrite(ledPin,HIGH);//Turnon the LED as an alert 
}  
else  
{ 
Serial.println("Soil is  WET.");  
digitalWrite(ledPin,LOW);//Turnoff the LED 
} 
}
