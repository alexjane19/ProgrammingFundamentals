#include<iostream>
using namespace std;

int increase(int &x, int count = 1) // The first parameter is declared by reference, but the second is declared by value
{
	x += count;
	return x;
}

int main(int argc, char* argv[])
{
	int i = 10;
	int j = increase(i, 5);
	cout << "i = " << i << "\n"; // i = 15
	cout << "j = " << j << "\n"; // j = 15

	//j = increase(10, 5); //WRONG, since the first parameter can not be constant

	return 0;
}
