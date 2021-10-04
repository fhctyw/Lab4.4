// Main.cpp
// Лісничук Арсен
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 13

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double xp, xk, dx, R;
	double y = 0;

	cout << "R = "; cin >> R;
	
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	
	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(9) << "x |" << setw(12) << "y |" << endl;
	cout << "----------------------" << endl;


	for (double x = xp; x <= xk; x += dx)
	{
		if (x <= -R)
			y = x + R;
		else
			if (x > -R && x <= 0)
				y = sqrt(R * R - x * x);
			else
				if (x > 0 && x <= 6)
					y = R - (R * x) / 6.;
				else
					y = x - 6;

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(3) << y << " |" << endl;
	}
	cout << "----------------------" << endl;

	return 0;
}