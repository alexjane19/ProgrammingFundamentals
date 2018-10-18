#include<iostream>
using namespace std;

int increase(int x, int count = 1) // count variable has a default value: 1
{
	x += count; // The copy of x will be changed, not the orginal x sent from caller
	return x;
}

int main()
{
	int i = 10;
	int j = increase(i, 5); // The first parameter is a variable and the second is a constant
	cout << "i = " << i << "\n"; // i = 10
	cout << "j = " << j << "\n"; // j = 15

	j = increase(10, 5); // Both parameters are constant!
	cout << "j = " << j << "\n"; // j = 15

	return 0;
}
