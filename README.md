# SteeringTiller
Steering-Tiller-Joystick for Flight Simulation

![SteeringTiller_Picture](https://user-images.githubusercontent.com/49068518/112122608-c0d37f80-8bc0-11eb-8767-a4eb0d6473c1.png)

In case of you are unhappy with the z-axis-rotation of your joystick as a steering tiller, this might be interesting for you.

In adavance I'd like to highlight that this is not a copy of anyone else. The little project was done on a sunday afternoon after some frustration with curvy steering on the taxiway.

I took into account the following Joystick-Library: https://github.com/MHeironimus/ArduinoJoystickLibrary
This is a mandatory prerequisite. Thanks for that coding, Sir.

In addition there is another project which I was made aware of today, which is pretty cool as well: https://github.com/hotbso/tiller

# My Version
My version is a bit smaller and with a bit less coding. Price of material is cheap. Ans with some soldering-affinity you should be able to make it.

I use a Thrustmater-joystick but no rudder pedals. I did never like the combination of steering and rudder on the same axis.

I felt the rotating z-axis as not precise enough for a proper feeling on ground.

Here is my little homemade solution.

I took an Arduino Leonardo (basically a pro micro derivat, IMPORTANT is the ATmega32u4-chipset for USB-joystick-protocol), a potentiometer and a button. Soldered everything together and adapted some available code. The little box is then connected as a joystick to the PC. You can calibrate and attach axis or functions to it within your simulator.

It feels way better to steer on the ground. It’s like driving your car. Super precise due to wider usable angle.

If you wonder about the button and the LEDs:

The button is used as brake. You might use it as pedal disconnect as well.
The LEDs light up if turned to left or right. Following the lights out philosophy they are dark if the steering tiller is in exact forward position. Out of the corners of my eye I can see red or green if not perfectly forward. This helps in aligning on the runway or at gate at low speed.

Again the schematic is easy, the code can be copied here and soldering is not a too big thing as well.

For me it made perfectly sense and The A320 feels even better now.

See attached circuit and code and off you go.
Have fun.
