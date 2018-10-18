#include <iostream>
#include<string>
#include<stdlib.h>
using namespace std;

string name()
{
	string name;
	cin>>name;
	return name;
}

int read()
{	
	int x;
	for(int i=0;i<3;i++)
		cin>>x;

	return x;
}

float average()
{
	float ave,sumstu=0;
	int mark[3];

	for(int i=0;i<3;i++)
		mark[i]=read();

	for(int i=0;i<3;i++)
		sumstu+=mark[i];

	ave=sumstu/3;
	sumstu=0;

	return ave;
}
void avreageclass()
{
	float c[5][3];
	float f[3];
	float sumclass=0;

	for(int i=0;i<5;i++)
	{
		for(int j=0;j<3;j++)
			c[i][j]=(float) read();
	}

	for(int j=0;j<3;j++)
	{
		for(int i=0;i<5;i++)
			sumclass+=c[i][j];
		f[j]=sumclass/5;
		sumclass=0;
	}

	for(int j=0;j<3;j++)
		cout<<"AVERAGE OF EXAM "<<j<<"= "<<f[j]<<endl;
}
int main(){
	string namestu[5];
	float avemark[5];

	for(int i=0;i<5;i++)
	{
		namestu[i]=name();
		read();
		avemark[i]=average();
	}

	system("cls");

	cout<<"NAME\tAVERAGE"<<endl;

	for(int i=0;i<5;i++)
	cout<<namestu[i]<<"\t"<<avemark[i]<<endl;

	avreageclass();

	system("pause");
	return 0;
}