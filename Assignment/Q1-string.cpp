#include<iostream>
#include<string>

using namespace std;

int main()
{

	char a[80];

	cin.get(a,80,'\n');

	for(int i=0;i<strlen(a);i++)
		if(a[i]>=97 && a[i]<=122)
			a[i]=a[i]-32;

	cout<<a<<endl;

	system("pause");
	return 0;
}