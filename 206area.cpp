#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "请输入两个整数：";
	cin >> a >> b;
	int c = 1;
	int d = (a < b) ? a : b;
	for (int i = 1; i <= d; i++) {
		if (a % i == 0 && b % i == 0) {
			c = i;
		}
	}
	int e = (a * b) / c;
	cout << "最大公约数 (GCD): " << c << endl;
	cout << "最小公倍数 (LCM): " << e<< endl;
	return 0;
}