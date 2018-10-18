#include<iostream>
#include<string>
using namespace std;
int main()	
{
	char a[100],ch;
	int lenghtstr,sign,putsign;
	cin.get(a,100);
	lenghtstr=strlen(a);
	for(int j=0;j<lenghtstr;j++)
	{
		for(int i=0;i<lenghtstr-1-j;i++)
			if(a[i]>a[i+1])
			{
				ch=a[i];
				a[i]=a[i+1];
				a[i+1]=ch;
			}
	}

	for(int i=0;i<lenghtstr;i++)
		if(a[i]>=97)
		{
			sign=i;
			break;
		}
		a[lenghtstr+1]='\0';

		for(int i=0;i<lenghtstr;i++)
		{
			if(a[i]>(a[sign]-32))
			{
				ch=a[sign];
				putsign=i;
				for(int j=sign;j>=i;j--)
					a[j]=a[j-1];

				a[putsign]=ch;
				sign++;	
			}

		}

		for(int i=0;i<lenghtstr;i++)
			cout<<a[i];
		cout<<endl;
		system("pause");
		return 0;
}
