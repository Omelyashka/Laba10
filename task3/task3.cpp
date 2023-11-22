// task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <Windows.h>
#define M_PI 3.14 
using namespace std;

// Завдання 3 № 2

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double z1, z2, a;

    cout << "Введіть a (у градусах) ";
    cin >> a;
    if (a == 0) {
        cout << "Неправильне число";
    }

    else {
        a = a * M_PI / 180;

        z1 = (cos(a) + sin(a) + cos(3 * a) + sin(3 * a));
        z2 = (2 * sqrt(2) * cos(a) * sin(M_PI / 4 + 2 * a));

        cout << "z1 = " << z1 << endl;
        cout << "z2 = " << z2 << endl;
    }
    return 0;

}
