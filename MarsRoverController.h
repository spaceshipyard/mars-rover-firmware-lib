#ifndef _MARS_ROVER_CONTROLLER_H_
#define _MARS_ROVER_CONTROLLER_H_


#include <Arduino.h>
#include <MovingPlatform.h>



class MarsRoverController {
private:
  const MovingPlatform* platform;
public:
  MarsRoverController(MovingPlatform* aPlatform);

  void setup();
  void onTick();

};



#endif /* end of include guard: _MARS_ROVER_CONTROLLER_H_ */
