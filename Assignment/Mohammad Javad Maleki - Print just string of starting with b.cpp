#include <iostream>
#include <string>

using namespace std;

int main()
{
	char a [100];

	do
	{
		cin.get();
		cin.get(a,100);

		if(a[0]=='b')
			cout<<"\t"<<a<<"\n";
	}
	while(a[0]!='\0');

	system("pause");
	return 0;
}