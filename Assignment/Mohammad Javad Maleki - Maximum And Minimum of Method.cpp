#include<iostream>
using namespace std;
int maxi=0;
int maxmin(int *a,int *i)
{
	int m=maxi;
	if(*i==10)
		return m;
	if(a[*i]>m)
		maxi=m=a[*i];
	*i=*i+1;
	return maxmin(a,i);
}
int main()
{
	int i,a[10],result;
	for(i=0;i<10;i++)
		cin>>a[i];
	maxi=a[0];
	i=1;
	result=maxmin(a,&i);
	cout<<"The max number is : "<<result;

	system("pause");
	return 0;
}
