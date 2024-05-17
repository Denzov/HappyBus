#include "Bus.h"

Bus::Bus(){
    
    for(uint8_t i=0; i < 3; i++){
        std::cout<< WIDTH_DOOR_0 << '\n';
        door[i].position.x = position.x + WIDTH_DOOR_0 + door[i].width * i + DELTA_W_DOOR*(i*2 + 1);
        door[i].position.y = SCREEN_HEIGHT/2 + (height + 50);
    }
}

void Bus::draw(){
    DrawRectangle( position.x, position.y, width, height, color);
    //DrawRectangle(100, 100, 500, 500, BLACK);

    if(doorsOpen){
        door[0].draw();
        door[1].draw();
        door[2].draw();
    }
    
}