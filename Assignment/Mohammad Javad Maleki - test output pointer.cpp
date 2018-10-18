#include<iostream>
using namespace std;

int main()
{
	int x = 5;
	int *p;
	p = &x;

	cout << "x : " << x << "\n&x : " << &x
		<< "\n(*p)++ : " << (*p)++ << "\np++ : " << p++ << "\n*(p++) : " << *(p++) << endl;

	system("pause");
	return 0;
}
