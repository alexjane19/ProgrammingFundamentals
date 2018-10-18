#include <iostream>
using namespace std;
int main()
{
int n,i,j,c,t=1;
cout<<"PLease Enter A Number: ";
cin>>n;
c=n;
  while(c!=0)
  {
	for(i=1;i<c;i++)
		cout<<' ';
	for(j=1;j<=t;j++)
		cout<<"*";
	cout<<endl;
	t+=2;
	c--;
  }
                                              cout<<'\a';
                                              // '\a' این بوقه خیلی مهمه
c=n;
t=n-1;
  while(n!=1)
  {
	for (i=c;i>=n;i--)
		 cout<<' ';
	for(j=1;j<=2*t-1;j++)
		 cout<<"*";
	cout<<endl;
    t-=1;
	n--;
  }
                                              cout<<'\a';
                                              // '\a' این بوقه خیلی مهمه
system("pause");
return 0;
}