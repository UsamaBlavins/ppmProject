int led_Pin = 13;                                      // initializing the led pin
int output_Pin = A0;                     // initializing the sensor output pin
int period = 20;


void setup ( )                           // Code written in it will only run once.
{
  pinMode (led_Pin, OUTPUT);                   // declaring led pin as output
  Serial.begin (115200);// setting baud rate at 115200
}

void loop () {
    // initializing other variables
    int rawValue = analogRead (output_Pin);// Reading the sensors values
    Serial.println (rawValue);// printing the sensor output value on the screen
    delay (period);
    // record number as fast as you can, do maths after
    // metal tube, heat shrink around back of wire
    // metal over the device
    
} 
