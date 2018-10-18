#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

float area,perimeter,
	side1,side2,side3;

struct triangle
{
	float point1;
	float point2;
}p1,p2,p3;

void read()
{
	cout<<"Please Enter 3 Point (x,y)\n";

	cout<<"First Point: ";
	cin>>p1.point1>>p1.point2;

	cout<<"Second Point: ";
	cin>>p2.point1>>p2.point2;

	cout<<"Third Point: ";
	cin>>p3.point1>>p3.point2;
}

void distance()
{
	float temp;

	temp=((p1.point1-p2.point1)*(p1.point1-p2.point1))+((p1.point2-p2.point2)*(p1.point2-p2.point2));
	side1=sqrt(temp);

	temp=((p1.point1-p3.point1)*(p1.point1-p3.point1))+((p1.point2-p3.point2)*(p1.point2-p3.point2));
	side2=sqrt(temp);

	temp=((p3.point1-p2.point1)*(p3.point1-p2.point1))+((p3.point2-p2.point2)*(p3.point2-p2.point2));
	side3=sqrt(temp);
}

void areaF()
{
	float max;

	if(side2>side1)
		max=side2;
	else
		max=side1;
	if(side3>max)
		max=side3;

	double degreesin;
	degreesin=side3/max;

	area=(side1*side2*sin(degreesin))/2;
}
void perimeterF()
{
	perimeter=side1+side2+side3;
}

void print()
{
	cout<<"Area= "<<area<<endl;
	cout<<"Perimeter= "<<perimeter<<endl;
}
int main()
{
	int stop=0;

	while(stop==0)
	{
		read();
		distance();
		if((side1+side2)>side3)
			stop=1;
		else 
			cout<<"Your number can not make a triangle!!!\nTry Again...\n";	
	}

	areaF();
	perimeterF();
	system("cls");
	print();
	system("pause");
	return 0;
}