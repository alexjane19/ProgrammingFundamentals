#include<iostream>
using namespace std;

int main()
{
	int n, c = 0;
	cout << "Enter the number of digits: ";
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int *b = new int[n];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (a[i] == a[j])
				c++;
		}

		b[i] = c;
		c = 0;
	}

	int max = b[0];
	for (int i = 1; i < n; i++)
	if (b[i]>max)
	{
		max = b[i];
		c = i;
	}

	cout << endl << a[c] << ": " << max << " times";

	system("pause");
	return 0;
}
