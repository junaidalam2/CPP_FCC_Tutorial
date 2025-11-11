#include <iostream>


int main() {

    std::cout << "Hello World!" << std::endl; // compile time error: missing semicolon

    //Run time error
    int value = 7 / 0;
    std::cout << "Value: " << value << std::endl;

    return 0; // inform os that program ended successfully
}
