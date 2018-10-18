#include<iostream>
using namespace std;
int main()	
{
	int const f=10;
	int a[f],i,j=0,t;
	cout<<"Enter numbers set: ";
	for(i=0;i<f;i++)
		cin>>a[i];
	for(j=0;j<f;j++)
	{
		for(i=0;i<f-1-j;i++)

			if(a[i]>a[i+1]){
				t=a[i+1];
				a[i+1]=a[i];
				a[i]=t;
			}

	}
	for(i=0;i<f;i++)
		cout<<a[i]<<"\t";
	cout<<"middle of set= ";
	if(f%2==0)
		cout<<(float)(a[(f/2-1)]+a[f/2])/2<<endl;
	if(f%2==1)
		cout<<a[(f/2)]<<endl;

	system("pause");
	return 0;
}