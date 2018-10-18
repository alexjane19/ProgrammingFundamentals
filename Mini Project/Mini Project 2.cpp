#include <iostream>
#include<string>
using namespace std;
int main()
{
	int counter,lengthOfString;
	char a[100];
	cin.get(a,100);
	lengthOfString=strlen(a);//tole reshteh ra bedast miavarad
	counter=lengthOfString;
	while(counter!=0)//halgheh adame miyabad ta vaghti ke tamame reshteh ra check konad
	{
		if(a[counter]==' ')//agar be blank beresad vared shart mishavad
		{
			for(int j=counter+1 ; j<lengthOfString ; j++)
				cout<<a[j];//az blank ta antehaye kalame chap mikonad
			cout<<" ";
			lengthOfString=counter;//makane blank feli ra dar lengthOfString gharar midahd
		}
		counter--;
	}
	for(int j=counter ; j<lengthOfString ; j++)//chon dar makan 0 araye digar blanki vojod nadard bayad in halghe neveshteh shavad ke az 0 ta avalin blank ra chop mikond
		cout<<a[j];
	cout<<endl;
	system("pause");
	return 0;
}