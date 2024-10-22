// laba7task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cmath> // для використання cos і exp

using namespace std;

int main() {
    double x, y;

    // Введення значення змінної x
    cout << "Enter x: ";
    cin >> x;

    // Обчислення y залежно від значення x
    if (x < -1) {
        y = pow(cos(x), 2); // cos^2(x)
    }
    else {
        y = exp(-pow(x, 2)); // e^(-x^2)
    }

    // Виведення результату
    cout << "y = " << y << endl;

    return 0;
}

