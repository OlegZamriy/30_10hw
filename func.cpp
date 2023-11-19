#include "header.h"
#include <iostream>
#include <cmath>

void drawRectangle(int height, int width) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

int factorial(int n) {
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int cube(int num) {
    return num * num * num;
}

int findMax(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

bool isPositive(int num) {
    return num > 0;
}

int power(int base, int exponent) {
    return static_cast<int>(std::pow(base, exponent));
}

int sumInRange(int num1, int num2) {
    int sum = 0;
    for (int i = num1; i <= num2; ++i) {
        sum += i;
    }
    return sum;
}

void findPerfectNumbers(int start, int end) {
    for (int num = start; num <= end; ++num) {
        int sum = 0;
        for (int i = 1; i <= num / 2; ++i) {
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == num) {
            std::cout << num << " is a perfect number." << std::endl;
        }
    }
}

void displayCard(int card) {
    std::cout << "Card: " << card << std::endl;
}

bool isLuckyNumber(int num) {
    // Implement your logic to check if a number is "lucky"
    return false;
}
