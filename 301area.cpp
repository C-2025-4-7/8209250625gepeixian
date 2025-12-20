#include <iostream>
using namespace std;
void max(int i, int j)
{
	int a = i,  b = j;
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	cout << "最大公约数为：" << a;
}
int main() {
	int c=0, d=0;
	cout << "请输入两个数" << endl;
	cin >> c >> d;
	max(c, d);
	return 0;
}