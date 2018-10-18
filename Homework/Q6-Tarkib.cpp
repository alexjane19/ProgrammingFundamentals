#include <iostream>
using namespace std;
int trkib(int n,int m)
{
	if(m==n || m==0)
		return 1;
	if(m==1)
		return n;
	return trkib(n-1,m)+trkib(n-1,m-1);
}
int main(){
	int n,m;
	cout<<"Enter Value of N: ";
	cin>>n;
	cout<<"Enter Value of M: ";
	cin>>m;
	cout<<"Value of (n,m) = "<<trkib(n,m)<<endl;
	system("pause");
}
