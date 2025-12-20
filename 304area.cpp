//主函数部分

#include<iostream>
#include "mytriangle.h"
using namespace std;
bool is_valid(double side1, double side2, double side3) {
	return(side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1);
}
double _area(double side1, double side2, double side3) {
	double s = (side1 + side2 + side3) / 2;
	return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}
int main() {
	double a = 0, b = 0, c = 0;
	cin >> a >> b >> c;
	if (is_valid(a, b, c)) {
		double area = _area(a, b, c);
		cout << "三角形的面积为：" << area;
	}
	else {
		cout << "无法构成三角形";
	}
	return 0;
	
		

	
}
