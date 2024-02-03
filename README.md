# Sensors Actuators 

## Introduction
This repository contains some basic sensors I have tested and practiced with Arduino and Esp32 during my projects and in my leisure time. Those are the basic codes for each sensor. And I detailed those sensors. All these contents are simplified for understanding not complicated as it's on examples of libraries.

## BUZZER
+ Buzzers are piezoelectric devices that can produce a sound for a specific voltage. 
+ Good practice that we connect buzzers through a resistor.
+ It can give various frequency sounds as we give input to it.
+ There are some special functions for this buzzer to work.
  - tone(buzzer_input_pin, frequency, duration_for hold)
  - noTone( buzzer_input_pin)
+ Here frequency can be any value related to the chord (C to B and their entities)
+ In practice, we create frequencies in an array. Eg: int chords[]={C, D, E, F, G, A, B, C_H, ….}

## PUSH BUTTONS  
+ When pressing these buttons, the short circuit the 2 end pins and allow current to flow through them.
+ We must use a resistor to achieve our needs.
+ Mostly used to get some input from the user.
+ We mainly configure them in 2 stages.
  - Active low: Give GND voltage when pushing the button.
  - Active high: Give HIGH(5V,3.3V) voltage when pushing the button.

## DHTXX: Temperature & Humidity sensor.
+ Simple sensor to measure temperature and humidity.
+ Importantly they give those values as digital signals.
+ DHT11: wide range of both measurements but low accuracy.
+ DHT22: narrow range of parameters mentioned, but high accuracy.
+ Requirement: DHTXX library
+ They have 3 pinouts.
	- VCC: connect to 3.3V or 5V. 
	- GND: connect to the GND of the circuit. 
  - DATA: they give the digital readings (output themselves, input to Microcontroller).

## OLED display. 128x64
+ This is used to display a message.
+ Ability to print in different colours, and sizes with high resolution.
+ Requirement: Adafruit_Adafruit_GFX, Adafruit_SSD1306, Wire library
+ This has 4 pins.
	- Ground and VCC
  - SDA, SCL: Connected to the corresponding SCL and SDA pin in the Microcontroller. 

