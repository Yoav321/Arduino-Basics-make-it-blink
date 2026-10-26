/*
 * This program causes one LED to blink off and on continously.
 * First Last - Month Year 
 */

const int LED_PIN = 8;
int onTime = 500;
int offTime = 500;

void setup() {
    // TODO: Configure LED_PIN as an OUTPUT.
}

void loop() {
    digitalWrite(LED_PIN, HIGH);
    delay(onTime);

    // TODO: Set LED_PIN to LOW.

    // TODO: Wait for offTimeMs.
}