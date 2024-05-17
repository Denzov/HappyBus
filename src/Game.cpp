#include "Game.h"

void Game::Run(){
    InitWindow(SCREEN_WEEDTH, SCREEN_HEIGHT, "HappyBus");
    SetTargetFPS(FPS);               
    
    road = LoadTexture("textures\\road.png");

    while (!WindowShouldClose())    
    {
        BeginDrawing();
        BeginMode2D(camera);
        DrawTexture(road, 0, 0, WHITE);
        if(IsKeyPressed(KEY_SPACE)) state = TRANSITION_TO_DRIVING;
        
        step();
        
        EndMode2D();
        EndDrawing();
    }

    CloseWindow();
}

void Game::step(){
    switch (state)
    {
    case TRANSITION_TO_BOARDING:
        if(bus.position.y < SCREEN_HEIGHT - (bus.height + 50)){
            bus.position.y += bus.vertical_speed;
        }    
        else if(camera.target.y < SCREEN_HEIGHT/2 - (bus.height/2 + 50)){
            bus.doorsOpen = 1;    
            camera.target.y += 4;
        }
        else{
            
            
            state = BOARDING;
        }
        break;

    case BOARDING:
        boarding();
        break;

    case TRANSITION_TO_DRIVING:
        if(camera.target.y > 0){
            bus.doorsOpen = 0;    
            camera.target.y -= 4;
        } 
        else if(bus.position.y + (bus.height/2) > SCREEN_HEIGHT/2){
            bus.position.y -= bus.vertical_speed;
        }       
        else{
            
            state = DRIVING;
        }
        break;

    case DRIVING:
        driving();
        break;

    }
    bus.draw();
}

void Game::boarding(){


}

void Game::driving(){
    
}

void Game::spawn_passengers_on_station(){
    uint8_t value_passengers = GetRandomValue(7, 14); 
    for(uint8_t i = 0; i < value_passengers; i++){
        //float x = GetRandomValue();
        //station_passengers.push_back(Passenger({}));
        
    }
}