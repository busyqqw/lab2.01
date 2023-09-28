#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double m; // вхідний параметр
	double n; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу

	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;

	z1 = ((n - 1) * sqrt(n) - (m - 1) * sqrt(m)) / (sqrt(n * n * n * m) + m * n + n * n - n);
	z2 = (sqrt(n) - sqrt(m)) / n;

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
