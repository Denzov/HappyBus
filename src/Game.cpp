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
        else if(camera.target.y < SCREEN_HEIGHT/2 - 50){
            bus.doorsOpen = 1;    
            camera.target.y += 4;
        }
        else{
            
            spawn_station_passengers();
            state = BOARDING;
        }
        break;

    case BOARDING:
        boarding();
        draw_station_passengers();
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

void Game::spawn_station_passengers(){
    uint8_t value_passengers = GetRandomValue(7, 14); 
    for(uint8_t i = 0; i < value_passengers; i++){
        float x = GetRandomValue(BUS_STATION_ZONE_LEFT, BUS_STATION_ZONE_RIGHT);
        float y = GetRandomValue(BUS_STATION_ZONE_TOP, BUS_STATION_ZONE_BOTTOM);

        station_passengers.push_back(Passenger({x, y}));
    }
}

void Game::draw_station_passengers(){
    for(uint8_t i = 0; i < station_passengers.size(); i++){
        station_passengers[i].draw();
    }
}
