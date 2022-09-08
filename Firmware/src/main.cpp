/* Orbital Percession
 * Concord Robotics
 *
 * Fight robots! Fight!
 */

// Arduino Libs
#include "Arduino.h"

#define FLASH_LED 4

void setup()
{
    // Serial over USB
    Serial.begin(115200);

    // initialize digital pin LED_BUILTIN as an output.
    pinMode(FLASH_LED, OUTPUT);

    delay(500);

    // Print MOTD
    Serial.println(MOTD);
}

// the loop function runs over and over again forever
void loop()
{
    Serial.println("Greatness awaits..");
    delay(1000);
}
