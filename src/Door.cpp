#include "Door.h"

void Door::draw(){
    DrawRectangle( position.x - width/2, position.y - height/2, width, height, BLACK );
}