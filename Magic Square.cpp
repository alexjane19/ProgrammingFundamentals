#include <iostream>
#include<iomanip>

using namespace std;

void generateSquare(int n)
{
	int magicSquare[100][100];

	// set all slots as 0
	memset(magicSquare, 0, sizeof(magicSquare));


	// Initialize position for 1
	int i = n / 2;
	int j = n - 1;

	// One by one put all values in magic square
	for (int num = 1; num <= n*n;)
	{
		if (i == -1 && j == n) //3rd condition
		{
			j = n - 2;
			i = 0;
		}
		else
		{
			//1st condition helper if next number goes to out of square's right side
			if (j == n)
				j = 0;
			//1st condition helper if next number is goes to out of square's upper side
			if (i < 0)
				i = n - 1;
		}
		if (magicSquare[i][j]) //2nd condition
		{
			j -= 2;
			i++;
			continue;
		}
		else
			magicSquare[i][j] = num++; //set number

		j++;  i--; //1st condition
	}


	// print magic square
	cout << "The Magic Square for n=: " << n << "\nSum of each row or column: " << n*(n*n + 1) / 2 << endl << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			cout << setw(4) << magicSquare[i][j];
		cout << endl;
	}
}

// Driver program to test above function
int main()
{

	while (1)
	{
		int n; // Works only when n is odd
		cout << "The size must be an odd number.\n";
		cout << "Enter size of magic square: ";
		cin >> n;
		if ((n % 2) == 0)
		{
			system("cls");
			continue;
		}
		system("cls");
		generateSquare(n);

		char q;
		cout << "\nDo you want to keep? (y/n)\n";
		cin >> q;
		if (q == 'y')
		{
			system("cls");
			continue;
		}
		else
			break;
	}

	return 0;
}