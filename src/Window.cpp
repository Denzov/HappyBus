#include "Window.h"

Window::Window(){
    InitWindow(screenWidth, screenHeight, "HappyBus");

    SetTargetFPS(60);               

    while (!WindowShouldClose())    
    {
        BeginDrawing();
        ClearBackground(WHITE);
        EndDrawing();
    }
    CloseWindow();
}