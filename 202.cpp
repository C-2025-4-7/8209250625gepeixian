#include<iostream>
using namespace std;
int main()
{
	double a ;
	double b=0;
	cin >> a;
	if (a > 0 && a < 1)
		b = 3 - 2 * a;
	else if (a < 5)
		b = 2.0 / (4 * a) + 1;
	else if (a < 10)
		b = a * a;
	cout << b << endl;
	return 0;
}