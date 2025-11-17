#include <iostream>

int main() {
    
    float number1 = 3.14f; 
    double number2 = 3.14159; 
    int count = {42};
    int count_garbage; // will contain garbage value unless compiler puts zero

    std::cout << "Total :" << number1 + number2 + count <<std::endl; 

    return 0;
}

