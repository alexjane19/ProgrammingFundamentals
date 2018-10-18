#include<iostream>
#include<string>

using namespace std;

const int digit=21;

char numch1[digit],numch2[digit];
int num1[digit],num2[digit],sum[digit];

void readstr()
{
	cin.get(numch1,digit+1);
	cin.get();
	cin.get(numch2,digit+1);
}

void convert()
{
	for(int i=0;i<(signed int)strlen(numch1);i++)
	{
		num1[i]=numch1[i] - '0';
		num2[i]=numch2[i] - '0';
	}
}

void sumM()
{
	for(int i=0;i<digit;i++)
		sum[i]=num1[i]+num2[i];

	for(int i=19;i>0;i--)
		if(sum[i]>=10)
		{
			sum[i]%=10;
			sum[i-1]+=1;
		}
}
void print()
{
	for(int i=0;i<digit;i++)
		cout<<sum[i];
}

int main()
{
	readstr();
	convert();
	sumM();
	print();

	cout<<endl;

	system("pause");
	return 0;
}