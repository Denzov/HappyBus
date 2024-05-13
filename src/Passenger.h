#ifndef _PASSENGER_H_
#define _PASSENGER_H_

#include <raylib.h>
#include "GameConst.h"

class Passenger{
private:
    Vector2 position = {0.0f, 0.0f};
    const Color color = YELLOW;
    const float radius = 50.0f;    
    
public:
    void draw();


};

#endif // _PASSENGER_H_