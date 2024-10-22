// laba7task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cmath> // ��� ������������ cos � exp

using namespace std;

int main() {
    double x, y;

    // �������� �������� ����� x
    cout << "Enter x: ";
    cin >> x;

    // ���������� y ������� �� �������� x
    if (x < -1) {
        y = pow(cos(x), 2); // cos^2(x)
    }
    else {
        y = exp(-pow(x, 2)); // e^(-x^2)
    }

    // ��������� ����������
    cout << "y = " << y << endl;

    return 0;
}

