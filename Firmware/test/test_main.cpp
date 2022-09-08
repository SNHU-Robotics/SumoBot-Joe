// Notes here https://docs.platformio.org/en/latest/tutorials/core/unit_testing_blink.html#tutorial-unit-testing-blink

// Arduino Libs
#include <Arduino.h>
#include <unity.h>

// void setUp(void) {
// // set stuff up here
// }

// void tearDown(void) {
// // clean stuff up here
// }

void test_nothing(void)
{
    // Test nothing
    TEST_ASSERT_TRUE(true);
}

void setup()
{
    // Wait for startup
    delay(2000);

    UNITY_BEGIN(); // IMPORTANT
    RUN_TEST(test_nothing);

    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    UNITY_END(); // Stop unit testing
}
