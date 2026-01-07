//student.cpp                     
#include <iostream>
#include"student.h" 
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex："<< sex << endl;
}
void Student::set_value() {
    num = 007;
    name[0] = 't';
    name[1] = 'c';
    name[2] = 'g';
    name[3] = '\0';
    sex = 'm';
}