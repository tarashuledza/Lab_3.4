// Lab_03_4.cpp
// Гуледза Тарас
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 6

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	  
	if ((pow(x-R,2)+pow(y,2) <= pow(R,2) && y >= 0) || (pow(x+R,2)+pow(y+R,2) >= pow(R,2) && y<=0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}