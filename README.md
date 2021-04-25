# Simple-Li-Fi-System
This is an example of simple Li-Fi system which uses simplex communication (transmitter to receiver).

First setup your Li-Fi system using the breadboard schematics as shown in "Li-Fi_bb.jpg".

upload the test code in reciever arduino and check the values of LDR in serial monitor, check with and without emitting light on LDR take the observed values and decide the threshold.
for example : the LDR value is near 90 for no light exposed and 400 for when light is exposed. 

we get the threshold here that the output value should be "0" for LDR value less than 90 and the value to be displayed should be "1" for LDR value more than 350 (because max is 400).
change the threshold values in the reciever code in comparison with "c" variable.

with the setup done and codes uploaded just plug the arduinos to computers and observe the output on seven segment display as well as on serial monitor.

to change the transmitting values change the array of binary data to your choice of binary data in the transmitting code (transmitter-lifi).

thank you 

and you can contact me for any changes you would like me to do or for any of your valuable feedbacks.


