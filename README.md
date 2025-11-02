# das Blinkenlights

# Assignment for Arduino Rhythmic LED Patterns

Needed to create three distinct rhythmic patterns for blinking LEDs using an Adafruit ESP32 Feather and the Arduino IDE.

> **Assignment:**
> "To start getting familiar with the Arduino IDE... please experiment with creating different patterns of blinking LED. You can use Morse code, you can try to recreate a musical rhythm, or any other familiar patterns. Create 3 of those rhythmic patterns."

## Patterns Included

This ZIP file contains the following three sketches:

1.  **`Bad_Apple.ino`**:
    * **Pattern:** The main vocal/rhythmic hook of the song "Bad Apple!!" by Nomico.
    * **How it Works:** Uses an array of constant "note" values (`Q`, `E`, `S`) to define the rhythm at 138 BPM. Two LEDs alternate to create a "two-finger tap" effect that matches the song's flow.
    * **LEDs Used:** 2

2.  **`Morse_Code.ino`**:
    * **Pattern:** Blinks the international Morse code distress signal "SOS" (... --- ...).
    * **How it Works:** Uses `dot()` and `dash()` functions with different `delay()` timings to create a recognizable, non-musical pattern.
    * **LEDs Used:** 1

3.  **`Heartbeat.ino`**:
    * **Pattern:** A steady, rhythmic "lub-dub... pause..." of a human heartbeat.
    * **How it Works:** Uses a simple loop of short and long delays to simulate the two-beat pulse followed by a rest.
    * **LEDs Used:** 1

## Hardware Setup

* **Board:** Adafruit ESP32 Feather
* **Components:**
    * 2x LEDs (for `Bad_Apple.ino`)
    * 2x 220Ω Resistors
    * Breadboard and Jumper Wires

The sketches are configured to use **Pin 12** and **Pin 13** on the ESP32 Feather.

## How to Run

1.  Open any of the `.ino` files in the Arduino IDE.
2.  Connect the ESP32 Feather to the computer.
3.  Select the "Adafruit ESP32 Feather" (or your specific board) from the **Tools > Board** menu.
4.  Select the correct COM port from the **Tools > Port** menu.
5.  Wire the LED(s) as described in the sketch comments (typically from Pin 12/13 to GND, through a 220Ω resistor).
6.  Click the "Upload" button.
