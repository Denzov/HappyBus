#include "Bus.h"

Bus::Bus(){
    
    // for(uint8_t i=0; i < 3; i++){
    //     door[i].position.x = position.x;
    //     door[i].position.y = SCREEN_HEIGHT - (height + 50) ;
    // }
}

void Bus::draw(){
    DrawRectangle( position.x, position.y, width, height, color);
    //DrawRectangle(100, 100, 500, 500, BLACK);

    // if(doorsOpen){
    //     door[0].draw();
    //     door[1].draw();
    //     door[2].draw();
    // }
    
}