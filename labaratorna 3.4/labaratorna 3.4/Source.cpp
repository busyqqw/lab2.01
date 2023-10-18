// Lab_03_4.cpp
// < Меньшиков Дмитро >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 15
#include <iostream>
using namespace std;
int main()
{
	double R; // вхідний аргумент
	double x; // вхідний параметр
	double y; // вхідний параметр  
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((x * x + y * y <= R * R && x >= 0 && y <= 0) || (-R <= x && x <= 0 && 0 <= y && y <= R && pow(x + R, 2) + pow(y + R, 2) >= R * R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}