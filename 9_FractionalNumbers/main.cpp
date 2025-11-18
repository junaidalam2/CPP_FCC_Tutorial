#include <iostream>

int main() {
    
    float number1 = 3.14f; 
    double number2 = 3.14159; 
    int count = {42};
    int count_garbage; // will contain garbage value unless compiler puts zero
    int fruit_count (2.9); // fractional part will be discarded
    //int fruit_count2 = {2.9}; // will provide compilter error due to narrowing conversion

    //Check the size of sizeof
    std::cout << "Sizeof int : " << sizeof(int) <<std::endl;
    std::cout << "Sizeof float : " << sizeof(float) <<std::endl;
    std::cout << "Sizeof double : " << sizeof(double) <<std::endl;
    std::cout << "Total :" << number1 + number2 + count <<std::endl; 

    return 0;
}
