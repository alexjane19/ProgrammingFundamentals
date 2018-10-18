#include <iostream>
using namespace std;
void typeSet(int n)
{
	int t , num ;
	bool soudi=false , nozli=false ;
	cout<<"Please Enter Your Numbers:"<<endl; 
	cin>>t;
	while(n!=1)
	{
		cin>>num;
		if(t<num)
			soudi=true;
		if(t>num)
			nozli=true;
		t=num;
		n--;
	}
	if(soudi==true && nozli==false)
		cout<<"numbers set is ascending.\n";
	//صعودی
	if(soudi==false && nozli==true)
		cout<<"numbers set is descending.\n";
	//نزولی
	if(soudi==true && nozli==true)
		cout<<"numbers set is not ascending and descending.\n";
	//نه صعودی نه نزولی	
}
int main()
{
	int number;
	cout<<"How many numbers you want to enter ?";  
	cin>>number;
	typeSet(number);
	system("pause");
	return 0;
}