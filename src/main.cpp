#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded Touch Detection System using TTP223
 * @author Ayush1Sikarwar
 * @date 2026-02-17
 *
 * @details
 * Reads digital touch input from a TTP223 touch sensor and prints
 * structured messages to the Serial Monitor every 300 ms.
 */

const uint8_t touchPin = 2;
int touchState = 0;

/**
 * @brief Initialize Serial and touch input.
 *
 * @details
 * Configures the Serial Monitor at 9600 baud and sets the touch
 * sensor pin mode to INPUT. Prints an initialization banner.
 */
void setup() {
    Serial.begin(9600);
    pinMode(touchPin, INPUT);
    Serial.println("=== TTP223 Touch Detection System Initialized ===");
}

/**
 * @brief Poll the TTP223 sensor and report touch state.
 *
 * @details
 * Reads the digital state from `touchPin`. If the sensor output is
 * HIGH, prints "Touch Detected"; otherwise prints "No Touch".
 * The check runs repeatedly with a 300 ms delay between readings.
 */
void loop() {
    touchState = digitalRead(touchPin);

    if (touchState == HIGH) {
        Serial.println("Touch Detected");
    } else {
        Serial.println("No Touch");
    }

    delay(400);
}
