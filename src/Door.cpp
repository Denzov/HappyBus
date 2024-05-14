#include "Door.h"

void Door::draw(){
    DrawRectangle( position.x, position.y, width, height, BLACK );
}