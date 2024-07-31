#include <iostream>

int main() {
   
    double num1, num2;
    char operation;
    
    
    std::cout << "Simple Calculator\n";
    std::cout << "Select operation:\n";
    std::cout << "a. Addition\n";
    std::cout << "b. Subtraction\n";
    std::cout << "c. Multiplication\n";
    std::cout << "d. Division\n";
    std::cout << "Enter your choice (a/b/c/d): ";
    std::cin >> operation;
    
    if (operation != 'a' && operation != 'b' && operation != 'c' && operation != 'd') {
        std::cerr << "Invalid operation selected. Please restart the program and choose a valid operation." << std::endl;
        return 1;
    }
    
    
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    
    
    switch (operation) {
        case 'a':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case 'b':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case 'c':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case 'd':
            if (num2 != 0) {
                std::cout << "Result: " << num1 / num2 << std::endl;
            } else {
                std::cerr << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
    }

    return 0;
}
