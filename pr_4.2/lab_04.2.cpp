// Lab_04_1.cpp
// Бахмат Катерина
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної.
// Варіант 1


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		A = 1 + 9 * x;

		if (x <= 0)
			B = log(abs(sin(x))) + pow(x, 7);
		else
			if (x > 3)
				B = 3 * x - pow(x, 5);
			else
				B = cos(abs(x + 1) / 2.) / sin(abs(x + 1) / 2.); 

		y = A + B;

		cout << "|" << setw(7)  << setprecision(3) << x
			<< " |" << setw(10) << setprecision(2) << y
			<< " |" << endl;
		
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}