#include <iostream>
#include <string>

int main() {
    
    std::cout << "Hello C+=20 " << std::endl; 
    
    int age{21};
    std::cout << "Age: " << age << std::endl;

    std::cerr << "This is an error message." <<std::endl;
    std::clog << "This is a log message." << std::endl;

    int age1;
    std::cout << "Enter your age: ";
    std::cin >> age1;
    std::cout << "You entered: " << age1 << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer

    std::string full_name;
    std::cout << "Enter your full name: ";
    std::getline(std::cin, full_name);

    std::cout << "Full Name: " << full_name << std::endl;

    return 0;
}

