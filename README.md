TTP223 Touch Detection System Demo

Brief demo project that reads a digital touch output from a TTP223 touch sensor module and reports a simple touch/no-touch status to the serial console. See src/main.cpp for the implementation.

Using CLion

- Open the project in CLion. Recommended to use the Arduino or PlatformIO plugin for flashing and serial monitor support.
- Build/run configuration depends on your board/toolchain (Arduino CLI, PlatformIO, or custom CMake).

IDE Version Tested

- Tested with CLion 2025.3.2.

Code Overview

- Entry: src/main.cpp.
- Behavior: Initializes Serial at 9600 baud. Configures the touch input pin (constant `touchPin` in src/main.cpp, default: digital pin D2). Polls the TTP223 sensor repeatedly with a 400 ms delay between readings (delay(400)). Prints one of two human-readable statuses based on the digital input:
  - "Touch Detected" when sensor output is HIGH
  - "No Touch" when sensor output is LOW
- The main loop is intentionally simple and left for extension.

Key calls

- Serial.begin(9600);
- pinMode(touchPin, INPUT);
- digitalRead(touchPin);
- Serial.println(...);
- delay(400);

Libraries

- Arduino.h (core)
  - Install via Arduino Library Manager or the PlatformIO library registry if needed for your board core.

Dependencies

- Arduino core for your board (e.g., Arduino AVR, ESP32, ESP8266). No additional third-party libraries are required for this demo.

Components used with the TTP223

- TTP223 touch sensor module (or bare TTP223 chip wired appropriately)
- Microcontroller board (Arduino Uno / Nano / Mega, ESP8266, ESP32, etc.)
- Jumper wires and breadboard (optional)

Software Requirements

- CLion 2025.3.2
- Arduino toolchain: Arduino IDE or Arduino CLI, or PlatformIO (recommended for integrated build/flash in CLion).
- C/C++ toolchain compatible with chosen board (installed via board support package).

Hardware Requirements

- 3.3V or 5V compatible microcontroller (match sensor voltage).
- TTP223 touch sensor module.
- USB cable for programming and power.

Wiring (typical)

- Connect the TTP223 module to your board as follows (module-style pinout):
  - VCC -> 3.3V or 5V (match your board and module tolerance)
  - GND -> GND
  - OUT  -> Digital pin D2 (matches `touchPin = 2` in src/main.cpp)
- If you are using a bare TTP223 chip, ensure the proper mode/pull-up configuration per the module/chip datasheet. Many modules provide a stable active-HIGH digital output on OUT.

Author

Ayush1Sikarwar (GitHub)
