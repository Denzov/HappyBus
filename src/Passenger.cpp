#include "Passenger.h"

void Passenger::draw(){
    DrawCircleV(position, radius, color);
}

Passenger::Passenger(float x, float y){
    this->position.x = x;
    this->position.y = y;
}