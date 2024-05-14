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
            camera.target.y += 3;
        }
        else{
            state = BOARDING;
        }
        break;

    case BOARDING:
        boarding();
        break;

    case TRANSITION_TO_DRIVING:
        if(bus.position.y + (bus.height) > SCREEN_HEIGHT/2){
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
