#include <iostream>

int main() {
    
    int number1 = 15; // Decimal
    int number2 = 017; // Octal
    int number3 = 0x0F; // Hexadecimal
    int number4 = 0b1111; // Binary (C++14 and later)

    std::cout << "Number in Decimal: " << number1 << std::endl;
    std::cout << "Number in Octal: " << number2 << std::endl;
    std::cout << "Number is Hexadecimal: " << number3 << std::endl;
    std::cout << "Number in Binary: " << number4 << std::endl;

    return 0;
}

