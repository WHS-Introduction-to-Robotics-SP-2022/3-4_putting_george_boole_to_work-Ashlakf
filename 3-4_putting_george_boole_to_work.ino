/* This sketch will be used to create a cycle where three lights turn
on in sequence and the Serial monitor displays the status of those 
lights. */

// Initialize variables

int x = 1;
int Led1=8;
int Led2=9;
int Led3=10;
void setup()
{
    // Start Serial Moniter and set up pins
    Serial.begin(9600);
    pinMode (Led1,OUTPUT);
    pinMode (Led2, OUTPUT);
    pinMode (Led3, OUTPUT);
    
    while (x <2 ) {
        // Display the cycle number in the Serial Monitor
        Serial.print("Cycle no ");
        Serial.println(x);
        
        // Turn on each LED in sequence
       digitalWrite(Led1,HIGH);
       delay(2000);
       digitalWrite(Led2,HIGH);
       delay(2000);
       digitalWrite(Led3,HIGH);
       delay(2000);
       digitalWrite(Led1,LOW);
       digitalWrite(Led2,LOW);
       digitalWrite(Led3,LOW);
        x = x + 1;
    }
}

void loop()
{

}
