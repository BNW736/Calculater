#include <string>
#include <iostream>

int positon;
    std::string numbers;
    std::string number1;
    std::string number2;
    float answer1;
    bool answer=false;
    size_t num;
    std::string ans;

std::string output(int mousex,int mousey){
    if(mousex<150 && mousey >680){
        numbers.push_back('0');
        }
    if(mousex>150 && mousex<300 && mousey>680){
        numbers.push_back('.');
        }
    if(mousex<150 && mousey>560 && mousey<680){
        numbers.push_back('1');
        }
    if(mousex<150 && mousey>440 && mousey<560){
        numbers.push_back('4');
        }
    if(mousex<150 && mousey>320 && mousey<440){
        numbers.push_back('7');
        }
    if(mousex>150 && mousex<300 && mousey<680 && mousey>560){
        numbers.push_back('2');
        }
    if(mousex>150 && mousex<300 && mousey<560 && mousey>440){
        numbers.push_back('5');
        }
    if(mousex>150 && mousex<300 && mousey<440 && mousey>320){
        numbers.push_back('8');
       }
    if(mousex>150 && mousex<300 && mousey<320 && mousey>200){
        numbers.push_back('%');
        }
    if(mousex>300 && mousex<450 && mousey<680 && mousey>560){
        numbers.push_back('3');
        }
    if(mousex>300 && mousex<450 && mousey<560 && mousey>440){
        numbers.push_back('6');
        }
    if(mousex>300 && mousex<450 && mousey<440 && mousey>320){
        numbers.push_back('9');
        }
    if(mousex>300 && mousex<450 && mousey<320 && mousey>200){
        numbers.push_back('^');
        }
    if(mousex>450 && mousex<600 && mousey<680 && mousey>560){
        numbers.push_back('+');
       }
    if(mousex>450 && mousex<600 && mousey<560 && mousey>440){
        numbers.push_back('-');
        }
    if(mousex>450 && mousex<600 && mousey<440 && mousey>320){
        numbers.push_back('*');
        }
    if(mousex>450 && mousex<600 && mousey<320 && mousey>200){
        numbers.push_back('/');
        }
    if(mousex<150 && mousey>200 && mousey<320){
        numbers.erase();
        }
    if(mousex>300 && mousex<450 && mousey>680 ){
        numbers.pop_back();
        }
    if (mousex > 450 && mousex < 600 && mousey > 680) {
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
            }
        }
        return numbers;
        }