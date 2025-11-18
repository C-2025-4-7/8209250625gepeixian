#include <iostream>
using namespace std;
int main()
{
	double a, b;
	cout << "请输入今天的温度(华氏度）:" << endl;
	cin >> a;
	b = (a-32)*5.0/9.0;
	cout << "今天的温度为：" << b << "摄氏度" << endl;
	return 0;
}