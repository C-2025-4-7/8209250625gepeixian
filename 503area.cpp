#include<iostream>
using namespace std;
class Square {
private:
	double length;
	double width;
	double height;
public:
	void set() {
		cout << "请输入长方柱的长、宽、高：" << endl;
		cin >> length >> width >> height;
	}
	double zongtiji() {
		return length * width * height;
	}
	void show() {
		double tiji = zongtiji();
		cout << "长方柱的体积为：" << tiji << endl;;
	}
};
int main() {
	Square a, b, c;
	cout << "第一个长方柱" << endl;
	a.set();
	a.show();
	cout << "第二个长方柱" << endl;
	b.set();
	b.show();
	cout << "第三个长方柱" << endl;
	c.set();
	c.show();
	return 0;
}