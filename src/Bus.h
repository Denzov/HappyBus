#ifndef _BUS_H_
#define _BUS_H_

#include "Door.h"
#include "GameConst.h"

#include <iostream>

class Bus{
public:
    const float height = 400.0f, width = 1000.0f;
    float vertical_speed = 5;

    bool doorsOpen = 0;    

    Vector2 position = { (SCREEN_WEEDTH - width)/2, (SCREEN_HEIGHT - height)/2};

    Bus();
    void draw();

private:
    Door door[3];
    const Color color = { 255, 216, 0, 255 };
    const float DELTA_W_DOOR = 80;

    const float WIDTH_DOOR_0 = (width - (DELTA_W_DOOR * 6))/8 ;


};

#endif // _BUS_H_ 