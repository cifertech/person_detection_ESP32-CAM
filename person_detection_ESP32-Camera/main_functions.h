#ifndef TENSORFLOW_LITE_EXPERIMENTAL_MICRO_EXAMPLES_PERSON_DETECTION_MAIN_FUNCTIONS_H_
#define TENSORFLOW_LITE_EXPERIMENTAL_MICRO_EXAMPLES_PERSON_DETECTION_MAIN_FUNCTIONS_H_

// Initializes all data needed for the example. The name is important, and needs
// to be setup() for Arduino compatibility.
void setup();

// Runs one iteration of data gathering and inference. This should be called
// repeatedly from the application code. The name needs to be loop() for Arduino
// compatibility.
void loop();

#endif  // TENSORFLOW_LITE_EXPERIMENTAL_MICRO_EXAMPLES_PERSON_DETECTION_MAIN_FUNCTIONS_H_
