// task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;

// Завдання 2 № 22

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int i = 22;
	// Координати вершин трикутника
	double Ax = 0;
	double Ay = 0;
	double Bx = i;
	double By = i - 1;
	double Cx = -i;
	double Cy = i + 1;

	// Обчислення координат медіани m від вершини B
	double Mx = (Ax + Bx) / 2;
	double My = (Ay + By) / 2;
	double Mb = sqrt(pow(Mx - Bx, 2) + pow(My - By, 2));

	// Обчислення радіуса вписаного кола r
	double AB = sqrt(pow(Bx - Ax, 2) + pow(By - Ay, 2));
	double BC = sqrt(pow(Cx - Bx, 2) + pow(Cy - By, 2));
	double AC = sqrt(pow(Cx - Ax, 2) + pow(Cy - Ay, 2));
	double p = (AB + BC + AC) / 2;
	double r = sqrt(((p - AB) * (p - BC) * (p - AC)) / p);

	// Виведення результатів
	cout << "Mb = " << Mb << endl;
	cout << "r =  " << r << endl;

	return 0;
}