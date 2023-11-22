// task1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

using namespace std;

// Завдання 1.1 №7

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int day1, month1, year1;
    int day2, month2, year2;

    cout << "Введіть дату дня народження (день місяць рік): ";
    cin >> day1 >> month1 >> year1;

    cout << "Введіть теперішню дату: ";
    cin >> day2 >> month2 >> year2;
    int years = year2 - year1;
    int months = month2 - month1;
    if (months < 0) {
        months += 12;
        years--;
    }

    cout << "Кількість повних років і місяців: " << years << " років " << months << " місяців" << endl;

    return 0;
}