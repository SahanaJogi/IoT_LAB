const int ledPins[] = {2,3,4,5,6}; // LED connected to pins 2, 3, 4, 5, 6 
const int numLeds = 5; // Number of LEDs 
void setup() { 
// Set all the LED pins as OUTPUT 
for (int i = 0; i < numLeds; i++) { 
pinMode(ledPins[i], OUTPUT); 
} 
} 
void loop() { 
// Scroll from left to right 
for (int i = 0; i < numLeds; i++) { 
digitalWrite(ledPins[i], HIGH); // Turn on current LED 
delay(200); // Wait for 200 ms 
digitalWrite(ledPins[i], LOW); // Turn off current LED 
} 
// Scroll from right to left 
for (int i = numLeds - 1; i >= 0; i--) { 
digitalWrite(ledPins[i], HIGH); // Turn on current LED 
delay(200); // Wait for 200 ms 
digitalWrite(ledPins[i], LOW); // Turn off current LED 
} 
} 
