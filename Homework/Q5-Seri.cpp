#include <iostream>
using namespace std;
int main ()
{
	int n , x;
	int sorat=1 ,makhraj=1;
	double s=0;
	cout<<"Please Enter Value Of N = ";
	cin>>n;
	cout<<"Please Enter Value Of X = ";
	cin>>x;
	while(n!=0)
	{
		for(int i=n ; i>0 ; i--){
			sorat*=x;
			makhraj*=i;
		}
		s+=(float) sorat/makhraj;
		sorat=1;
		makhraj=1;
		n--;
	}
	cout<<"Value S = "<<s<<endl;
	system("pause");
	return 0;
}