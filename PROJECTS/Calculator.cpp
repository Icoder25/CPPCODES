#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

class Calculator {
private:
    double num1, num2, result;
    char operation;

public:
    Calculator() : num1(0), num2(0), result(0), operation('+') {}

    void displayMenu() {
        std::cout << "\n=== C++ Calculator ===" << std::endl;
        std::cout << "Available operations:" << std::endl;
        std::cout << "+ : Addition" << std::endl;
        std::cout << "- : Subtraction" << std::endl;
        std::cout << "* : Multiplication" << std::endl;
        std::cout << "/ : Division" << std::endl;
        std::cout << "^ : Power" << std::endl;
        std::cout << "s : Square root" << std::endl;
        std::cout << "q : Quit" << std::endl;
        std::cout << "=====================" << std::endl;
    }

    void getInput() {
        std::cout << "\nEnter operation (+, -, *, /, ^, s, q): ";
        std::cin >> operation;

        if (operation == 'q' || operation == 'Q') {
            return;
        }

        if (operation == 's' || operation == 'S') {
            std::cout << "Enter number: ";
            std::cin >> num1;
        } else {
            std::cout << "Enter first number: ";
            std::cin >> num1;
            std::cout << "Enter second number: ";
            std::cin >> num2;
        }
    }

    bool calculate() {
        switch (operation) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 == 0) {
                    std::cout << "Error: Division by zero!" << std::endl;
                    return false;
                }
                result = num1 / num2;
                break;
            case '^':
                result = pow(num1, num2);
                break;
            case 's':
            case 'S':
                if (num1 < 0) {
                    std::cout << "Error: Cannot calculate square root of negative number!" << std::endl;
                    return false;
                }
                result = sqrt(num1);
                break;
            case 'q':
            case 'Q':
                return false;
            default:
                std::cout << "Error: Invalid operation!" << std::endl;
                return false;
        }
        return true;
    }

    void displayResult() {
        std::cout << std::fixed << std::setprecision(2);
        
        if (operation == 's' || operation == 'S') {
            std::cout << "√" << num1 << " = " << result << std::endl;
        } else {
            std::cout << num1 << " " << operation << " " << num2 << " = " << result << std::endl;
        }
    }

    bool shouldContinue() {
        return (operation != 'q' && operation != 'Q');
    }
};

// Function to clear input buffer
void clearInputBuffer() {
    std::cin.clear();
    std::cin.ignore(10000, '\n');
}

int main() {
    Calculator calc;
    char continueChoice;

    std::cout << "Welcome to the C++ Calculator!" << std::endl;

    do {
        calc.displayMenu();
        calc.getInput();

        if (!calc.shouldContinue()) {
            std::cout << "Thank you for using the calculator. Goodbye!" << std::endl;
            break;
        }

        if (calc.calculate()) {
            calc.displayResult();
        }

        // Check if user wants to continue
        std::cout << "\nDo you want to perform another calculation? (y/n): ";
        std::cin >> continueChoice;
        clearInputBuffer();

    } while (continueChoice == 'y' || continueChoice == 'Y');

    std::cout << "Calculator closed. Goodbye!" << std::endl;
    return 0;
}