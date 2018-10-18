#include<iostream>
#include<stdio.h>
#include<ctime>
#include<cstdlib>

using namespace std;

int width,height,mine;

char gametable[31][36];
bool answgame[32][37];

enum status{ Continue,Won,Lost};
status gamests=Continue;

void difficultly(int selectdiff)
{
	//esay
	if(selectdiff==1)
	{
		height=9;
		width=9;
		mine=10;
	}
	//normal
	if(selectdiff==2)
	{
		height=16;
		width=16;
		mine=40;
	}
	//hard
	if(selectdiff==3)
	{
		height=16;
		width=30;
		mine=99;
	}
	//custom
	if(selectdiff==4)
	{
		cout<<"Height (9-30): ";
		cin>>height;
		if(height>30 || height<9)
		{
			cout<<"Please Enter From 9 to 30 for Height !\n";
			cout<<"Height (9-30): ";
			cin>>height;
		}
		cout<<"Width (9-35): ";
		cin>>width;
		if(width>35 || width<9)
		{
			cout<<"Please Enter From 9 to 35 for Width !\n";
			cout<<"Width (9-35): ";
			cin>>width;
		}
		cout<<"Mine (10-900): ";
		cin>>mine;
		if(mine>900 || mine<10)
		{
			cout<<"Please Enter From 10 to 900 for Mine !\n";
			cout<<"Mine (10-900): ";
			cin>>mine;
		}
	}

}

void setMines()
{
	int countM=0;

	for(int i=0;i<(height+2);i++)
		for(int j=0;j<(width+2);j++)
			answgame[i][j] = true;

	while(countM< mine)
	{
		int i = rand() % (height+2);
		int j = rand() % (width+2);

		if(i!=0 && i!=(height+1) &&  j!=0 && j!=(width+1))
			if(answgame[i][j])
			{
				countM++;
				answgame[i][j] = false;
			}	
	}
}

void startgame()
{
	int selectdiff;

	cout<<"Please Select Difficultly: 1.Easy  2.Normal  3.Hard  4.Custom"<<endl;
	cin>>selectdiff;

	if(selectdiff>4 || selectdiff<1)
	{
		cout<<"Please Enter From 1 to 4: \n";
		cin>>selectdiff;
	}

	difficultly(selectdiff);

	system("cls");

	srand((unsigned int)time(0));

	for(int i=0;i<=height;i++)
	{
		if(i==0)
			gametable[i][0] ='#';
		if(i!=0 && i<=9)
			gametable[i][0] = i +'0';
		if(i>9)
			gametable[i][0] = i+7 +'0';
		for(int j=0; j<=width;j++)
		{
			if(j!=0 && j<=9)
			{
				if (i != 0)
					gametable[i][j]='*';
				else
					gametable[i][j]= j+'0';
			}
			if(j!=0 && j>9)
			{
				if (i != 0)
					gametable[i][j]='*';
				else
					gametable[i][j]= j+7+'0';
			}
			cout<<gametable[i][j]<<" ";
		}
		cout<<endl;
	}

	setMines();
}

void answerGame()
{ 
	cout<<endl;
	cout<<"\tAnswer Of Game\n";

	for(int i=0;i<height+1;i++)
	{
		if(i==0)
			cout<<"#";
		if(i!=0)
			cout<<gametable[i][0]; 
		for(int j=1;j<width+1;j++)
		{
			if(i==0)
				cout<<" "<<gametable[i][j];
			if(i!=0)
				cout<<" "<<answgame[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
}

void show()
{
	system("cls");

	for(int i=0;i<=height;i++)
	{
		for(int j=0;j<=width;j++)
			cout<<gametable[i][j]<<" ";
		cout<<endl;
	}
}

void ngame()
{
	int selecttg;
	cout<<"What will you be doing?\n";
	cout<<"1.New Game\n2.Exit\n";
	cin>>selecttg;

	if(selecttg>2 || selecttg<1)
	{
		cout<<"Please Enter 1 or 2: \n";
		cin>>selecttg;
	}

	if(selecttg==1)
	{
		gamests=Continue;
		system("cls");
		startgame();
	}
	else
	{
		cout<<"\nGoooooooooooD ByE";
		gamests=Lost;
	}
}

void menu1()
{
	int selectwi,selecthe,i=0,bomb=0,countgame=1;

	cout<<"Please Enter Two Numbers (for example: 3 4):\n";
	cout<<"Height(1-"<<height<<"): ";
	cin>>selecthe;
	cout<<"Width(1-"<<width<<"): ";
	cin>>selectwi;

	if(selecthe>height || selectwi>width)
	{
		cout<<"Please Enter For First Number From 1"<<" to "<<height<<" ! \n";
		cout<<"Please Enter For Second Number From 1"<<" to "<<width<<" ! \n";
		cout<<"Please Enter Two Numbers (for example: 3 4):\n";
		cout<<"Height(1-"<<height<<"): ";
		cin>>selecthe;
		cout<<"Width(1-"<<width<<"): ";
		cin>>selectwi;
	}


	if(answgame[selecthe][selectwi]==1)
	{
		countgame++;
		while(i<8)
		{

			if(answgame[selecthe-1][selectwi-1]==0)
				bomb++;
			i++;
			if(answgame[selecthe-1][selectwi]==0)
				bomb++;
			i++;
			if(answgame[selecthe-1][selectwi+1]==0)
				bomb++;
			i++;
			if(answgame[selecthe][selectwi-1]==0)
				bomb++;
			i++;
			if(answgame[selecthe][selectwi+1]==0)
				bomb++;
			i++;
			if(answgame[selecthe+1][selectwi-1]==0)
				bomb++;
			i++;
			if(answgame[selecthe+1][selectwi]==0)
				bomb++;
			i++;
			if(answgame[selecthe+1][selectwi+1]==0)
				bomb++;
			i++;
		}

		gametable[selecthe][selectwi]=bomb  + '0';


		show();
	}

	if(answgame[selecthe][selectwi]==0)
	{
		cout<<"\nYou Lost!!!!"<<endl;
		answerGame();
		gamests=Lost;
		ngame();
	}

	if(countgame==(width*height-mine))
	{
		cout<<"\nYou Won!!!!"<<endl;
		gamests=Won;
		ngame();
	}
}

void menu2()
{
	int selectwi,selecthe;

	cout<<"Please Enter Two Numbers (for example: 3 4):\n";
	cout<<"Height(1-"<<height<<"): ";
	cin>>selecthe;
	cout<<"Width(1-"<<width<<"): ";
	cin>>selectwi;

	if(selecthe>height || selectwi>width)
	{
		cout<<"Please Enter For First Number From 1"<<" to "<<height<<" ! \n";
		cout<<"Please Enter For Second Number From 1"<<" to "<<width<<" ! \n";
		cout<<"Please Enter Two Numbers (for example: 3 4):\n";
		cout<<"Height(1-"<<height<<"): ";
		cin>>selecthe;
		cout<<"Width(1-"<<width<<"): ";
		cin>>selectwi;
	}

	if(answgame[selecthe][selectwi]==0)
	{
		gametable[selecthe][selectwi]='B';
		mine--;

		show();
	}

	if(answgame[selecthe][selectwi]==1)
	{
		cout<<"\nYou Lost!!!!"<<endl;
		answerGame();
		gamests=Lost;
		ngame();
	}

	if(mine==0)
	{
		cout<<"\nYou Won!!!!"<<endl;
		gamests=Won;
		ngame();
	}
}

int main()
{

	cout<<"\t\t!@#$&*( Produced by ALEX JANE )*&$#@!\nHi,Welcome.\n\n";
	startgame();

	while(gamests==Continue)
	{
		int menu;

		cout<<"Mine = "<<mine<<"  Tile Grid: "<<height<<"*"<<width<<endl;
		cout<<"Please Select Game Of Menu: 1.Select a Grid   2.Find a Mine\n";
		cout<<"Menu: ";
		cin>>menu;

		if(menu>2 || menu<1)
		{
			cout<<"Please Enter 1 or 2!\nMenu: ";
			cin>>menu;
		}

		if(menu==1)
			menu1();
		if(menu==2)
			menu2();
	}
	return 0;
}