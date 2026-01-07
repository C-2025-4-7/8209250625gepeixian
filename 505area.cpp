#include<iostream>
using namespace std;
class Point {
private:
	int x = 60;
	int y = 80;
public:
	void setPoint(int i, int j) {
		
		x = 60 + i;
		y = 80 + j;
		
	}
	void display(){
		cout << "新座标为：（" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point a;
	cout << "初始坐标：" << endl;
	a.display();
	cout << "第一次修改后的坐标：" << endl;
	a.setPoint(7, 9);
	a.display();
	cout << "第二次修改后的坐标：" << endl;
	a.setPoint(10, 77);
	a.display();
	cout << "第三次修改后的坐标：" << endl;
	a.setPoint(-2, 2);
	a.display();
	cout << "第四次修改后的坐标：" << endl;
	a.setPoint(4, -30);
	a.display();
}