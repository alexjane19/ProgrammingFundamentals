
#include <iostream>
using namespace std;

int main()
{
	/*
	//soal 1
	int Array[10];
	int Array1[10];
	int i,j;

	cout<<"Enter ten numbers :"<<endl;
	for(i=0;i<10;i++)
		cin>>Array[i];

	for(i=9;i<=0;i--)
		cout<<Array[i]<<'\t';

	cout<<endl;

	for (int i = 9,j = 0; i >= 0; i--,j++)
		Array1[j]=Array[i];

	for (int j = 0; j < 10; j++)
		cout<<Array1[j]<<'\t';

	*/
	/*
	//soal2
	int Array[10];
	int i,j,k=0;

	cout<<"Enter ten numbers :"<<endl;
	for(i=0;i<10;i++)
		cin>>Array[i];

	cout<<"Enter number to search : ";
	cin>>j;

	for(i=0;i<10;i++)
		if(Array[i]==j)
			k++;

	if(k==0)
		cout<<j<<" is not found."<<endl;
	else
		cout<<j<<" repeted "<<k<<" times."<<endl;
	*/	
	/*
	//soal3
	int Array[10];
	int max,min;
	int i,j;

	cout<<"Enter ten numbers :"<<endl;
	for(i=0;i<10;i++)
		cin>>Array[i];

	max=min=Array[0];

	for(i=1;i<10;i++)
	{
		if(Array[i]>max)
			max=Array[i];

		if(Array[i]<min)
			min=Array[i];
	}

	cout<< "min : "<<min<<endl;
	cout<< "max : " <<max<<endl;
	
	*/
	/*
	//soal5
	int Array[10];
	int i,j;

	cout<<"Enter ten numbers :"<<endl;
	for(i=0;i<10;i++)
		cin>>Array[i];

	cout<<"Enter number to search : ";
	cin>>j;

	for(i=0;i<10;i++)
		if(Array[i]==j)
			break;

	if(i!=10)
		cout<<j<<" is found."<<endl;
	else
		cout<<j<<" is not found."<<endl;
	*/

	
	//soal 8
	int Array[11];
	int i,j,k;

	cout<<"Enter ten numbers :"<<endl;
	for(i=0;i<10;i++)
		cin>>Array[i];

	cout<<"Enter number to add : ";
	cin>>j;

	for(i=0;i<10;i++)
		if(Array[i]>j )
			break;

	for(k=10;k>i;k--)
		Array[k]=Array[k-1];

	Array[i]=j;

	for(i=0;i<11;i++)
		cout<<Array[i]<<'\t';

/*
	int n=4;
	switch (n)
	{
	case 3:
		n++;
	case 4:
		n+=7;
		break;

	case 10:
		n*=2;
		break;

	default:
		n--;
	}
	cout<<n<<endl;*/
	char ch;
	 cin>>ch;

}
