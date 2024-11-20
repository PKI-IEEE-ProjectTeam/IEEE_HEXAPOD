#include <Arduino.h>
#include <Ps3Controller.h>


void setup() {
  Serial.begin(115200);
  //the MAC address below is from my personal PS3 controller
  //for some reason SixAxisPair on my laptop cannot find the IEEE controller
  Ps3.begin("38:4f:f0:92:80:4d"); // Replace with mac from SixAxisPairTool
}

void loop() {
  if (Ps3.isConnected()) {
    // Check button presses
    if (Ps3.data.button.cross) Serial.println("Cross button pressed");
    if (Ps3.data.button.square) Serial.println("Square button pressed");
    if (Ps3.data.button.triangle) Serial.println("Triangle button pressed");
    if (Ps3.data.button.circle) Serial.println("Circle button pressed");

    // Check joystick positions
    int lx = Ps3.data.analog.stick.lx; 
    int ly = Ps3.data.analog.stick.ly; 
    int rx = Ps3.data.analog.stick.rx; 
    int ry = Ps3.data.analog.stick.ry; 

    Serial.print("Left Joystick: X=");
    Serial.print(lx);
    Serial.print(" Y=");
    Serial.println(ly);

    Serial.print("Right Joystick: X=");
    Serial.print(rx);
    Serial.print(" Y=");
    Serial.println(ry);
    
    //check D-Pad
    if (Ps3.data.button.up) Serial.println("D-pad Up pressed");
    if (Ps3.data.button.down) Serial.println("D-pad Down pressed");
    if (Ps3.data.button.left) Serial.println("D-pad Left pressed");
    if (Ps3.data.button.right) Serial.println("D-pad Right pressed");
    
    delay(500); // Small delay 
  }
}