#include<iostream>
#include<string>

using namespace std;

void converseCharacter(char st[])
{
	for(int i=strlen(st)-1;i>=0;i--)
		cout<<st[i];

	cout<<endl;
}

int main()
{
	char str[100];

	cin.get(str,100);

	converseCharacter(str);

	system("pause");
	return 0;
}