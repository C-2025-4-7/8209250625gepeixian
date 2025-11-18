#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	int d = 0;
	cout << "请输入三角形的三边：" << endl;
	cin >> a >> b >> c;
	d = a + b + c;
	cout << "此三角形的周长为：" << d << endl;
	if (a == b || b == c || a == c)
		cout << "此三角形为等腰三角形" << endl;
	return 0;
}