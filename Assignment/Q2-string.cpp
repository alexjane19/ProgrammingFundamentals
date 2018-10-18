#include<iostream>
#include<string>

using namespace std;

int main()
{

	char a[80];
	int x=0,i;
	cin.get(a,80,'\n');
	x=strlen(a);
	for(i=0;i<strlen(a);i++)
		if(a[i]==' ')
		{
			for(int j=i;j<x;j++)
				a[j]=a[j+1];
			x--;
			i--;
		}

	cout<<a<<endl;

	system("pause");
	return 0;
}