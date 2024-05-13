#ifndef _BUS_H_
#define _BUS_H_

#include "Door.h"
#include "GameConst.h"

class Bus{
private:
    Door door[3];
    const Color color = { 255, 216, 0, 255 };

public:

    const float height = 400.0f, width = 1000.0f;
    float vertical_speed = 5;

    bool doorsOpen = 0;    

    Vector2 position = { (SCREEN_WEEDTH - width)/2, (SCREEN_HEIGHT - height)/2};

    Bus();
    void draw();

};

#endif // _BUS_H_ 