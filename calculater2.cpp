#include <iostream>
#include "raylib.h"
#include <string>

int main() {
    int screenWidth = 600;
    int screenHeight = 800;
    Vector2 mouse;
    int positon;
    std::string numbers;
    std::string number1;
    std::string number2;
    float answer1;
    bool answer=false;
    size_t num;
    std::string ans;

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
            if(mouse.x<150 && mouse.y >680){
                numbers.push_back('0');
                }
            if(mouse.x>150 && mouse.x<300 && mouse.y>680){
                numbers.push_back('.');
            }
            if(mouse.x<150 && mouse.y>560 && mouse.y<680){
                numbers.push_back('1');
            }
            if(mouse.x<150 && mouse.y>440 && mouse.y<560){
                numbers.push_back('4');
            }
            if(mouse.x<150 && mouse.y>320 && mouse.y<440){
                numbers.push_back('7');
            }
            
            if(mouse.x>150 && mouse.x<300 && mouse.y<680 && mouse.y>560){
                numbers.push_back('2');
            }
            if(mouse.x>150 && mouse.x<300 && mouse.y<560 && mouse.y>440){
                numbers.push_back('5');
            }
            if(mouse.x>150 && mouse.x<300 && mouse.y<440 && mouse.y>320){
                numbers.push_back('8');
            }
            if(mouse.x>150 && mouse.x<300 && mouse.y<320 && mouse.y>200){
                numbers.push_back('%');
            }
           
            if(mouse.x>300 && mouse.x<450 && mouse.y<680 && mouse.y>560){
                numbers.push_back('3');
            }
            if(mouse.x>300 && mouse.x<450 && mouse.y<560 && mouse.y>440){
                numbers.push_back('6');
            }
            if(mouse.x>300 && mouse.x<450 && mouse.y<440 && mouse.y>320){
                numbers.push_back('9');
            }
            if(mouse.x>300 && mouse.x<450 && mouse.y<320 && mouse.y>200){
                numbers.push_back('^');
            }
            if(mouse.x>450 && mouse.x<600 && mouse.y<680 && mouse.y>560){
                numbers.push_back('+');
            }
            if(mouse.x>450 && mouse.x<600 && mouse.y<560 && mouse.y>440){
                numbers.push_back('-');
            }
            if(mouse.x>450 && mouse.x<600 && mouse.y<440 && mouse.y>320){
                numbers.push_back('*');
            }
            if(mouse.x>450 && mouse.x<600 && mouse.y<320 && mouse.y>200){
                numbers.push_back('/');
            }
            if(mouse.x<150 && mouse.y>200 && mouse.y<320){
                
                numbers.erase();
            }
            if(mouse.x>300 && mouse.x<450 && mouse.y>680 ){
                numbers.pop_back();
                
            }
            if (mouse.x > 450 && mouse.x < 600 && mouse.y > 680) {
                char list[] = {'/', '*', '-', '+','%','^'};
                char sign = ' '; 
                size_t num = std::string::npos;

                for (int x = 0; x < 6; x++) {
                    num = numbers.find(list[x]);
                    if (num != std::string::npos) {
                        sign = list[x]; 
                        break;          
                     }
                }

                if (num != std::string::npos && sign != ' ') {
                    if (sign == '%') {
                        long num1 = std::stoll(numbers);
                        answer1 = num1 / 100;
                    }
                    std::cout << numbers.substr(num) << "\n";
        
                    std::string number1 = numbers.substr(0, num);
                    std::string number2 = numbers.substr(num + 1); 

                    long num1 = std::stoll(number1);
                    long num2 = std::stoll(number2);
                    long answer1 = 0;

                    if (sign == '/') {
                        if (num2 != 0) { 
                        answer1 = num1 / num2;
                        } else {
                            std::cout << "Error: Division by zero!\n";
                        }
                    } else if (sign == '*') {
                        answer1 = num1 * num2;
                    } else if (sign == '-') {
                        answer1 = num1 - num2;
                    } else if (sign == '+') {
                        answer1 = num1 + num2;
                    }else if (sign == '^') {
                        answer1 = num1 ^ num2;
                    }

                 
            ans = std::to_string(answer1);
            numbers=ans;
            answer = true;
            }
        }
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
            if(answer==false){
                DrawText(numbers.c_str(),580-(numbers.size()*30),140,50,WHITE);}
            if(answer==true){
                DrawText(ans.c_str(),580-(ans.size()*30),140,50,WHITE);
            }
            answer=false;
            mouse={0,0};

            
        EndDrawing();
    }
    CloseWindow();
    return 0;
}