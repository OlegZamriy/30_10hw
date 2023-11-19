#include "header.h"
#include <iostream>

int main() {
    int choice;

    do {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Draw Rectangle" << std::endl;
        std::cout << "2. Factorial" << std::endl;
        std::cout << "3. Check Prime" << std::endl;
        std::cout << "4. Cube" << std::endl;
        std::cout << "5. Find Max" << std::endl;
        std::cout << "6. Check Positive" << std::endl;
        std::cout << "7. Power" << std::endl;
        std::cout << "8. Sum in Range" << std::endl;
        std::cout << "9. Perfect Numbers" << std::endl;
        std::cout << "10. Display Card" << std::endl;
        std::cout << "11. Check Lucky Number" << std::endl;
        std::cout << "0. Exit" << std::endl;

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            int height, width;
            std::cout << "Enter height: ";
            std::cin >> height;
            std::cout << "Enter width: ";
            std::cin >> width;
            drawRectangle(height, width);
            break;
        }
        case 2: {
            int n;
            std::cout << "Enter a number: ";
            std::cin >> n;
            std::cout << "Factorial: " << factorial(n) << std::endl;
            break;
        }
        case 3: {
            int num;
            std::cout << "Enter a number: ";
            std::cin >> num;
            std::cout << (isPrime(num) ? "Prime" : "Not Prime") << std::endl;
            break;
        }
        case 4: {
            int num;
            std::cout << "Enter a number: ";
            std::cin >> num;
            std::cout << "Cube: " << cube(num) << std::endl;
            break;
        }
        case 5: {
            int num1, num2;
            std::cout << "Enter first number: ";
            std::cin >> num1;
            std::cout << "Enter second number: ";
            std::cin >> num2;
            std::cout << "Max: " << findMax(num1, num2) << std::endl;
            break;
        }
        case 6: {
            int num;
            std::cout << "Enter a number: ";
            std::cin >> num;
            std::cout << (isPositive(num) ? "Positive" : "Negative or Zero") << std::endl;
            break;
        }
        case 7: {
            int base, exponent;
            std::cout << "Enter base: ";
            std::cin >> base;
            std::cout << "Enter exponent: ";
            std::cin >> exponent;
            std::cout << "Power: " << power(base, exponent) << std::endl;
            break;
        }
        case 8: {
            int num1, num2;
            std::cout << "Enter first number: ";
            std::cin >> num1;
            std::cout << "Enter second number: ";
            std::cin >> num2;
            std::cout << "Sum in Range: " << sumInRange(num1, num2) << std::endl;
            break;
        }
        case 9: {
            int start, end;
            std::cout << "Enter start of range: ";
            std::cin >> start;
            std::cout << "Enter end of range: ";
            std::cin >> end;
            findPerfectNumbers(start, end);
            break;
        }
        case 10: {
            int card;
            std::cout << "Enter card number: ";
            std::cin >> card;
            displayCard(card);
            break;
        }
        case 11: {
            int num;
            std::cout << "Enter a six-digit number: ";
            std::cin >> num;
            std::cout << (isLuckyNumber(num) ? "Lucky Number" : "Not Lucky Number") << std::endl;
            break;
        }
        case 0:
            std::cout << "Exiting program. Goodbye!" << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
        }

    } while (choice != 0);

    return 0;
}
