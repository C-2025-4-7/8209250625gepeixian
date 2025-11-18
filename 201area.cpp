#include <iostream>
#include<cctype>
using namespace std;
int main()
{
	char a;
	cin >> a;
	if (islower(a))
	{
		char b = toupper(a);
		cout << b << endl;
	}
	else {
		int c = a + 1;
		cout << c << endl;
	}

	return 0;
}