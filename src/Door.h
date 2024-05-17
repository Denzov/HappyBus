#ifndef _DOOR_H_
#define _DOOR_H_

#include <raylib.h>

class Door
{
public:
    const float width = 130, height = 30;
    void draw();
    Vector2 position;
    bool isOpen = 0;    
};


#endif // _DOOR_H_