#include <iostream>
using namespace std;
int main()
{
	const int n=10;
	int a[n];
	cout<<"Please Enter Your Numbers: "; 
	for(int i=0;i<n;i++)
		cin>>a[i];
	//در این حلقه اعداد آرایه را می گیریم
	bool ascend=false , descend=false;

	for(int i=0;i<n-1;i++)
	{//در این حلقه اعدادآرایه را دو تا دو تا با هم مقایسه می کنیم
		if(a[i]<a[i+1])
			ascend=true;
		//اگر تورو باشد مجوعه صعودی است
		if(a[i]>a[i+1])
			descend=true;
		//اگر تورو باشد مجوعه نزولی است
	}
	if(ascend==true && descend==false)
		cout<<"numbers set is ascending.\n";
	//صعودی
	if(ascend==false && descend==true)
		cout<<"numbers set is descending.\n";
	//نزولی
	if(ascend==true && descend==true)
		cout<<"numbers set is not ascending and descending.\n";
	//نه صعودی نه نزولی
	system("pause");
	return 0;
}