/* SNHU Robotics
 *
 * Fight robots! Fight!
 */

// Arduino Libs
#include "Arduino.h"

// ESP Libs
#include "esp_camera.h"
#include <WiFi.h>

// Pins
#include "cameraInit.h"

// Wifi settings
const char *ssid = "BattleBot";
const char *password = "iamnotacrook";

void setup()
{
    // Serial over USB
    Serial.begin(115200);

    // Wifi setup
    WiFi.softAP(ssid, password);

    IPAddress IP = WiFi.softAPIP();
    Serial.print("AP IP address: ");
    Serial.println(IP);

    // Camera
    camera_init();

    // Print MOTD
    Serial.println(MOTD);
}

// the loop function runs over and over again forever
void loop()
{
    Serial.println("Greatness awaits..");
    delay(1000);
}
