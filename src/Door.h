#ifndef _DOOR_H_
#define _DOOR_H_

#include <raylib.h>

class Door
{
private:
    const float width = 20, height = 20;
public:
    void draw();
    Vector2 position;
    bool isOpen = 1;    
};


#endif // _DOOR_H_