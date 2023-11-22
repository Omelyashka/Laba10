// task1.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

using namespace std;

// Завдання 1.2 № 7

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Введення тривалості сну на добу
	int sleep_hours_per_day;
	cout << "Введіть свою середню тривалість сну (в годинах):";
	cin >> sleep_hours_per_day;

	// Підрахунок часу сну за все життя
	int sleep_hours_per_year = 365 * sleep_hours_per_day;
	int sleep_years = 75;
	int total_sleep_hours = sleep_hours_per_year * sleep_years;

	// Виведення результатів
	cout << "Ви проспите " << total_sleep_hours << " годин за 75 років." << endl;

	return 0;
}
