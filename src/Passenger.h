#ifndef _PASSENGER_H_
#define _PASSENGER_H_

#include <raylib.h>
#include "GameConst.h"

class Passenger{
private:
    Vector2 position = {0.0f, 0.0f};
    const Color color = GRAY;
    const float radius = 30.0f;    
    
public:
    Passenger(float x, float y);
    void draw();


};

#endif // _PASSENGER_H_