#include<iostream>
using namespace std;
int main() 
{
int x,y,B,K,i;
cout<<"Please Enter 2 Number: ";
cin>>x>>y;
if(y>x)
{
i=x;
x=y;
y=i;
}
for(i=1;i<=x/2;i++)
	if(x%i==0 && y%i==0)
		B=i;
K=(x*y)/B;
cout<<"B.M.M= "<<B<<endl;
cout<<"K.M.M= "<<K<<endl;
system("pause");
return 0;
}