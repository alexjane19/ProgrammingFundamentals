#include <iostream>
using namespace std;
int main()
{
	int b_num,a_num;
	bool ascend=false,descend=false;
	cout<<"<<baraye namayesh javab,vared konid har chizie gheyraz add>>"<<endl<<endl;
	//برای نمایش جواب باید هر چیزی غیر از عدد وارد کنی 
	cout<<"Please Enter Your Numbers:"<<endl; 
	cin>>b_num;
	while(cin>>a_num)
	{//حلقه تا زمانی که عدد به گیرد ادامه می یابد
		if(b_num<a_num)
			ascend=true;
		//اگر تورو باشد مجوعه صعودی است
		if(b_num>a_num)
			descend=true;
		//اگر تورو باشد مجوعه نزولی است
		b_num=a_num;
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