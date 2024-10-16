# IEEE_HEXAPOD
## Desciption
This project began spring semester 2024 and has not been finished since due to several organizational changes putting the projects on hold. Currently, The legs, chassis, and power system have already been decided upon with the hexapod being fully constructed. However, due to the weight of the Hexapod the 9g plastic servos cannont easily support its weight for extended periods of time. This requires that the servos be replaced with more durable servos. The legs may have to be redesigned in order for the new servos to fit well. Additonally, the assigned project team may alter the design of the legs should they wish. 

The Hexapod also has no remote control and can only run with hard coded commands or commands directly through a computer. As such, a remote control needs to be added.

## Components
Below are the components to be used for this project. Additional components may be added in the future.
### [ESP32](https://en.wikipedia.org/wiki/ESP32) 
The ESP32 comes built in with WIFI and Bluetooth support. In addition, it's far more powerful than the Arduino UNO. This will be the microcontroller for the Hexapod robot.

### [MG90S](https://www.towerpro.com.tw/product/mg90s-3/)
The hexapod used to use SG90 servos. While they seemed to have sufficient power, the gear boxes quickly burned out after continual use. The MG90S is more powerful and uses more durable metal gears. 

### [PCA9685](https://cdn-learn.adafruit.com/downloads/pdf/16-channel-pwm-servo-driver.pdf) 
The PCA9685 Adafruit 16-Channel 12-bit PWM is required for controlling all 18 servo motors as the ESP32 does not have enough pins for each servo. There are currently two driver boards on the Hexapod with one addressed at 0x40 and one addressed at 0x41. Here's the official [library](https://github.com/adafruit/Adafruit-PWM-Servo-Driver-Library) for the servo driver boards.

### Sony Playstation 3 Controller
The PS3 controller is a common choice for projects such as these. Here's a [library](https://github.com/jvpernis/esp32-ps3) and [tutorial](https://dronebotworkshop.com/ps3-esp32/) for using the PS3 controller with the ESP32

### Project Goals

## Movement
The Hexapod should be able to walk on flat and textured surfaces. Additonally, it should be able to walk over obstacles at least a third of its standing height. The Servo motors have an output torque of 2.2kg/cm. As such, the legs should be built with those constaints in mind. 

The hexapod should be able to walk fowards/backwards, rotate itself, and ideally be able to turn while walking.

## Control
The hexapod should be able to be controlled wirelessly with the use of a remote controller. The hexapod should be able to work idependently, with no wires connecting it to an external power supply or controller. 

