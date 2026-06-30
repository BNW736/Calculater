#include <iostream>
#include "raylib.h"
#include <string>
#include "outputf.h"

int main() {
    int screenWidth = 600;
    int screenHeight = 800;
    Vector2 mouse;
    std::string numbers;
    
    const char* buttons[5][4] = {
        {"C", "%", "^", "/"},
        {"7", "8", "9", "X"},
        {"4", "5", "6", "-"},
        {"1", "2", "3", "+"},
        {"0", ".", "DEL", "="}
    };

    InitWindow(screenWidth, screenHeight, "Calculator");
    SetTargetFPS(60);
    
    while (!WindowShouldClose()) {
        mouse=GetMousePosition();
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            numbers=output(mouse.x,mouse.y);
        }
        BeginDrawing();
            ClearBackground(BLACK);
            DrawRectangle(0, 200, 600, 600, WHITE); 
            for (int row = 0; row < 5; row++) {
                for (int col = 0; col < 4; col++) {
                    
                    int cellX = col * 150;
                    int cellY = 200 + (row * 120);
                    int start = cellX + 60;
                    int stop = cellY + 45;

                    DrawRectangleLines(cellX, cellY, 150, 120, RED);

                    DrawText(buttons[row][col], start , stop, 30, BLACK);
                }
            }
            
            DrawText(numbers.c_str(),580-(numbers.size()*30),140,50,WHITE);
            

        EndDrawing();
    }
    CloseWindow();
    return 0;
}