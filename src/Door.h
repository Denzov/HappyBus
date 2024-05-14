#ifndef _DOOR_H_
#define _DOOR_H_

#include <raylib.h>

class Door
{
public:
    const float width = 100, height = 20;
    void draw();
    Vector2 position;
    bool isOpen = 1;    
};


#endif // _DOOR_H_