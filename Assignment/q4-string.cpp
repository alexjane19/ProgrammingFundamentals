#include<iostream>
#include<string>

using namespace std;

int main()
{

	char a[80];
	int x=0,i;
	cin.get(a,80,'\n');
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=' '){
			x++;
			continue;
		}

		if(x==4){
			a[i-4]='L';
			a[i-3]='o';
			a[i-2]='v';
			a[i-1]='e';

		}
		x=0;
	}

	cout<<a<<endl;

	system("pause");
	return 0;
}