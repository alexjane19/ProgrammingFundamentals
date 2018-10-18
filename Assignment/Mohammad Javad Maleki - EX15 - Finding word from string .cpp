#include<iostream>
#include<string>

using namespace std;
int main()
{
	char a[100];
	int z=0,count=0;
	char b[100];

	cin.get(a,100);
	cin.get();
	cin.get(b,100);
	for(int i=0;i<(signed int)strlen(b);i++)
	{
		if(b[i]==a[z])
			z++;
		else
			z=0;
		if(z==strlen(a))
			count++;


	}
	cout<<a<<": There are "<<count<<" times in string."<<endl;
	system("pause");
	return 0;
}
