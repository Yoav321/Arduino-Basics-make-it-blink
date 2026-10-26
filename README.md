# Lab: Arduino Basics - Make It Blink

Build a circuit, explain how its resistor limits current, and program one LED to blink. This short lab prepares you for the one-week **Signals and Systems** project. You will use these skills to build a prototype system with at least three LEDs and meaningful signal states.

This README serves as your notes. Replace each `your answer` with your own response. Record observations as you work.

**Name:** your answer  
**Date:** your answer

## 1. Meet the hardware

In your ELEGOO kit, locate:

- Arduino Uno R3
- USB data cable
- Breadboard
- One red LED
- Jumper wires
- 330 Ω (ohm) and 1 kΩ (1000 Ω) resistors

These directions assume an **Arduino Uno R3**. Confirm the voltage and pin labels with your instructor if using a different board.

Your instructor will explain the following components using the accompanying slides. Write your explanations in your own words.

### Safety

- Wear safety glasses when working with the components.
- Disconnect USB and any other power before moving wires or components.
- Always use a series resistor with the LED.
- Never connect 5V directly to GND. This creates a short circuit.
- Check your wiring and LED direction before connecting power.

### Arduino Uno R3

What does the microcontroller chip do? How does the rest of the board help you connect, power, and program it?

> your answer

### Breadboard

How does a breadboard connect components? Explain which holes connect, including the power rails, groups of five holes, and center gap. Check whether your power rails have breaks.

> your answer

### Light-emitting diode (LED)

What does an LED do? How can you identify its anode (+) and cathode (−), and why does its direction matter?

> your answer

### Resistor

What does a resistor do? How can you identify the 330 Ω and 1 kΩ resistors?

> your answer

Before continuing, identify **5V**, **GND**, and **digital pin 8** on your Arduino.

## 2. Circuits and Ohm’s law

Your instructor will model a simple circuit using your Arduino kit or Tinkercad. Use the demonstration and slides to answer the following questions.

### Circuit

What is a circuit? Describe the path of conventional current from 5V through the components to GND, the return connection to the power supply.

> your answer

### Open circuit

What makes a circuit open? Predict what happens when you remove one jumper wire from the current path.

> your answer

### Closed circuit

What makes a circuit complete? How does closing the circuit affect current flow?

> your answer

### Voltage

Voltage is measured in volts (V). What does voltage describe, and which two connections provide the voltage difference in this circuit?

> your answer

### Current

Current is measured in amperes (A), often expressed as milliamperes (mA). What does current describe? How many milliamperes equal one ampere?

> your answer

### Resistance

Resistance is measured in ohms (Ω). How does increasing resistance affect current when the applied voltage stays the same?

> your answer

### Ohm’s law

Your instructor will explain how voltage, current, and resistance relate.

**Write Ohm’s law and rearrange it to solve for resistance. Include the units for each quantity.**

> your answer

### Calculate the resistance

Follow the red LED example in the slides. For this exercise, assume:

- Arduino supply voltage: **5 V**
- Red LED voltage drop: **2 V**
- Target current: **10 mA**, or **0.010 A**

These are values for our example, not verified specifications for every LED.

**How much voltage is across the resistor?**

> your answer

**Use `R = V / I` to calculate the resistance needed. Show your work.**

> your answer

**Our kit has 330 Ω resistors. Why is 330 Ω an appropriate choice for this calculation?**

> your answer

## 3. Build and test the LED circuit

Follow your instructor’s demonstration. Disconnect USB and any other power before building or changing the circuit.

Connect these components in one series path:

```text
Arduino 5V → 330 Ω resistor → LED anode (+)
LED cathode (−) → Arduino GND
```

Use the breadboard to connect the components. Keep the LED’s legs in separate groups of connected holes.

1. Identify your resistor using its labeled packaging, color bands, or a multimeter.
2. Have your instructor or partner check the wiring and LED direction.
3. Connect USB. The LED should stay on without a program controlling it.

**How did you verify your resistor’s value?**

> your answer

### Compare resistance and brightness

**Predict:** What will happen to the current and LED brightness if you replace the 330 Ω resistor with a 1 kΩ resistor?

> your answer

1. Disconnect USB.
2. Replace the 330 Ω resistor with a 1 kΩ resistor.
3. Reconnect USB and observe.
4. Disconnect USB and restore the 330 Ω resistor.

| Resistor | Observed brightness |
| --- | --- |
| 330 Ω | your answer |
| 1 kΩ | your answer |

**Did the results match your prediction? Explain using resistance and current.**

> your answer

## 4. Control the LED with code

The 5V pin supplies steady power. A digital output pin lets your program switch the LED on and off.

With USB disconnected, move **only the wire connected to 5V** to **digital pin 8**. Keep the resistor, LED, and GND connections in place.

```text
Arduino pin 8 → 330 Ω resistor → LED anode (+)
LED cathode (−) → Arduino GND
```

### Set up Arduino IDE

1. Open Arduino IDE and create a new sketch.
2. Save it as `blink`.
3. Replace the default code with the starter code in this repo (blink.ino).
4. Connect the Arduino using the USB data cable.
5. Select **Arduino Uno** and the port connected to your board.

Arduino `.ino` sketches use C/C++.

### Understand the program

Your instructor will explain these parts of the code. Record their purposes in your own words.

| Code | What does it do? |
| --- | --- |
| `/* */` | your answer |
| `//`    | your answer |
| `void`  | your answer |
| `setup()` | your answer |
| `loop()` | your answer |
| `pinMode(LED_PIN, OUTPUT)` | your answer |
| `digitalWrite(LED_PIN, HIGH)` | your answer |
| `digitalWrite(LED_PIN, LOW)` | your answer |
| `delay(onTime)` | your answer |

**Why is `LED_PIN` a constant, while `onTime` and `offTime` are variables?**

> your answer

## 5. Make it blink

1. Add your name and date to the program’s header.
2. Complete the three TODOs using the functions above.
3. Follow class conventions for names, indentation, and comments.
4. Click **Verify** to compile the program and check for errors.
5. Fix any errors, then click **Upload** to send the program to your Arduino.

**Before uploading, predict how long the LED will stay on, how long it will stay off, and how long one complete cycle will take.**

> your answer

### Experiment with timing

Observe at least five cycles for each trial. Change the timing variables and upload the program again each time.

| Trial | On time (ms) | Off time (ms) | Observations |
| --- | --- | --- | --- |
| Initial blink | 500 | 500 | your answer |
| Faster blink | 200 | 200 | your answer |
| Brief flash, long pause | 100 | 900 | your answer |

**What would happen if you placed the blinking instructions in `setup()` instead of `loop()`?**

> your answer

**What is the difference between Verify and Upload?**

> your answer

### Troubleshooting

- **Code will not compile:** check capitalization, semicolons, and matching braces.
- **Code will not upload:** check the board selection, port, and USB data cable.
- **LED stays dark:** disconnect power, then check LED direction, breadboard connections, pin 8, and GND.
- **LED stays on:** check that its supply wire connects to pin 8 instead of 5V. Confirm your code sets the pin LOW and waits.

**Describe one problem and how you solved it. If everything worked, describe a check you used to confirm your circuit or code.**

> your answer

## 6. Finish and reflect

- [ ] One external LED blinks continuously after power-on or reset.
- [ ] All questions and observations in this README are complete.
- [ ] My code uses a named constant, timing variables, and Arduino functions.
- [ ] My code follows class style and documentation conventions.
- [ ] My repository contains this completed README and my finished `blink/blink.ino` sketch.

**How could a blink pattern communicate useful information in your Signals and Systems project? Describe one example.**

> your answer

Your project will expand these skills to at least three LEDs and three meaningful signal states.