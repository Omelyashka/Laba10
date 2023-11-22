// task4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <Windows.h>
#define e 2.718
#define M_PI 3.14 

using namespace std;

// Завдання 4 № 22

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const double q = 2;

    double b = 1.8;
    double t = pow(b, 3) + pow(e, sqrt(q));
    double x = pow(t, 3) + pow(b, 2);
    double y = pow(atan(x), 2);

    cout << "t = " << t << "\nx = " << x << "\ny = " << y;

    return 0;
}
