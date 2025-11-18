#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "请输入要输出的行数: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}