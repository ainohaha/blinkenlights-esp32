/*
  Bad Apple!! Rhythmic Loop of opening pattern 
  
  This version uses a short, looping array to play the 
  vocal rhythm of the main hook.
*/

// --- Pin Definitions ---
const int ledPin1 = 12;
const int ledPin2 = 13;

// --- Rhythm Calculation (138 BPM) ---
const int BPM = 138;
const int Q = 60000 / BPM;    // Quarter Note (~435 ms)
const int E = Q / 2;          // Eighth Note (~218 ms)
const int S = E / 2;          // Sixteenth Note (~109 ms)

// --- Rhythm Array ---
// Positive = Note (LED ON)
// Negative = Rest (LEDs OFF)
const int rhythm[] = {
  Q, Q, Q, S, S, S, S, Q, Q, Q, E, E
};

const int numSteps = sizeof(rhythm) / sizeof(rhythm[0]);

int currentStep = 0;   // The current position in array
int currentLed = ledPin1; // The next LED to light up (alternating effect)

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // Duration for the current step
  int duration = rhythm[currentStep];

  if (duration > 0) {
    // It's a NOTE (positive number)
    digitalWrite(currentLed, HIGH); 
    delay(duration);                
    digitalWrite(currentLed, LOW);  

    // Switch the "active" LED for the *next* note
    currentLed = (currentLed == ledPin1) ? ledPin2 : ledPin1;
    
  } else {
    // It's a REST (negative number)
    delay(-duration); // Use the positive value of the duration to wait
  }

  // Move to next step
  currentStep++;

  // If we've reached the end, loop back
  if (currentStep >= numSteps) {
    currentStep = 0;
    currentLed = ledPin1; // Reset to the first LED
  }
}
