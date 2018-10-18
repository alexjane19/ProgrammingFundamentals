#include<iostream>
using namespace std;
int main() 
{
	int a[10],i,j;
	cout<<"Enter numbers set: ";
	for(i=0;i<10;i++)
		cin>>a[i];
	cout<<"Enter one number: ";
	cin>>j;
	for(i=0;i<10;i++){
		if(a[i]==j)
			i++;
		if(i!=10)
			cout<<a[i]<<endl;}
	system("pause");
	return 0;
}