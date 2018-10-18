#include<iostream>
using namespace std;
int main() 
{
	int a[10],i,c=0,j,k;
	for(i=0;i<10;i++)
		cin>>a[i];
	int b[10][2];
	for(i=0, k=0;i<10;i++)
	{
		for(j=0;j<k;j++)
		{
			if(b[j][0] == a[i] && i < 9)
			{
				i++;
				j=0;
			} 
		}
		b[k][0] = a[i];
		for(j=0;j<10;j++)
		{
			if(a[i]==a[j])
				c++;
		}
		b[k][1] = c;
		k++;
		c=0;
	}
	for (i= 0; i< k-1; i++)
		cout<< b[i][0] << "\t" << b[i][1]<<endl;
	system("pause");
	return 0;
}