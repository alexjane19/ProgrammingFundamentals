#include <iostream>
#include <string>

using namespace std;

int main()
{
	char a[100];
	int j,i,z,x,c=0;

	cin.get(a,100);

	x=strlen(a);

	for(j=0;j<x;j++)
	{
		for(i=j+1;i<x;i++)
		{
			if(a[j]==a[i])
			{
				for(z=i;z<x;z++)
					a[z]=a[z+1];
				i--;
				x--;
			}	
		}
	}
	for(int z=0;z<x;z++)
		cout<<a[z];

	cout<<endl;

	system("pause");
	return 0;
}