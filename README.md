# Arduino Projects

A collection of Arduino projects I built while learning embedded electronics and C++.  
They range from basic LED experiments to small circuits like a nightlight, traffic light controller, and temperature alert.

## Highlights

I’ve recorded short demos of many of these projects working in real hardware.

🎛️ **Full Playlist:**  
https://www.youtube.com/playlist?list=PLBFJOYu3Sm3V2En5jY78IffRuca8KWWwF

### Mini Projects (`/mini_projects`)

A few representative circuits:

- **AUTO_NIGHTLIGHT**  
  Uses a light sensor (LDR) and an LED to create an automatic nightlight. Demonstrates analog input, threshold logic, and simple calibration.

- **TOGGLE_NIGHTLIGHT_RGBLED**  
  RGB LED nightlight controlled by a pushbutton. Demonstrates digital input, PWM control of an RGB LED, and basic state handling.

- **LED_OUTPUT_TRAFFIC_LIGHTS_CROSSWALK**  
  Simulated traffic light + crosswalk system using multiple LEDs and timed states. Demonstrates state machines and timing using `millis()` (or `delay`, depending on the version).

- **TEMP_ALERT**  
  Temperature sensor input with an LED/buzzer alert when a threshold is exceeded. Demonstrates analog sensors and basic signal scaling.

Each mini project has:
- A dedicated folder in `mini_projects/`
- A short README describing the circuit, hardware, and behavior

### Basics (`/basics`)

Intro sketches focused on single concepts:

- Turning an LED on and off
- Blinking with different delays
- Using `for` loops to create LED patterns
- Reading a potentiometer with `analogRead`

Good starting points if you’re new to Arduino.

### Inputs & State (`/inputs_and_state`)

Examples that use buttons and simple state logic:

- Toggling an LED with a button
- Debouncing a pushbutton
- Incrementing brightness or state with multiple buttons
- Trick/safety switch style logic

### PWM & Analog (`/pwm_and_analog`)

Sketches that use PWM outputs and analog inputs:

- Fading LEDs
- Using potentiometers to control brightness, RGB color mixing, or DC motor speed

## Skills Demonstrated

- Reading sensors (LDR, potentiometer, temperature sensor)
- Driving outputs (LEDs, RGB LEDs, DC motor) with digital and PWM pins
- Basic state machines for timing and sequencing
- Circuit design on a breadboard (resistors, buttons, pull-ups/pull-downs)
- C++/Arduino fundamentals: `setup()`, `loop()`, functions, constants

## How to use

1. Clone the repository:

```bash
git clone https://github.com/UpinSmoke6/Arduino-Projects.git
cd Arduino-Projects
