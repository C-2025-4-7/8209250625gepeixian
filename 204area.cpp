#include <iostream>
using namespace std;
int main()
{
	double num1, num2, result;
	char op;
	cout << "请输入一个表达式";
	cin >> num1 >> op >> num2;
	switch (op) {
	case '+':
		result = num1 + num2;
		cout << result << endl;
		break;

	case'-':
		result = num1 - num2;
		cout << result << endl;
		break;

	case'*':
		result = num1 * num2;
		cout << result << endl;
		break;
	case'/':
		if (num2 == 0)
			cout << "无法进行运算，除数需不为0" << endl;
		else
			result = num1 / num2;
		cout << result << endl;
		break;
	case'%':
		if (num2 == 0)
			cout << "无法进行运算" << endl;
		else if (num1 != (int)num1 || num2 != (int)num2)
			cout << "无法进行运算，两数应为整数" << endl;
		else
			result = (int)num1 % (int)num2;
		cout << result << endl;
		break;
	default:
		cout << "无法运算" << endl;
		break;
	}
	return 0;

}