#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;

struct date
{
	int year;
	int month;
	int day;
};

struct commodity
{
	int numofcom;
	char nameofcom[100];
	char company[100];
	float price;
	date expdate;
}commodity[200], searchcom, temp, dele, rest[100];

int i, r;
int req = 0;
void startmain();
void print();

void show()
{
	system("cls");

	cout << left << setw(10) << "Id" << setw(16) << "Name" << setw(11) << "Company" << left << setw(10) <<right<< "Price" << setw(11) << "Exp" << endl;

	for (int j = 0; j < i; j++)
	{
		cout << left << setw(10) << commodity[j].numofcom << setw(16) << commodity[j].nameofcom << setw(11) << commodity[j].company << left << setw(10)  <<right
			<< commodity[j].price<< setw(10) << commodity[j].expdate.year << "/" << commodity[j].expdate.month << "/" << commodity[j].expdate.day << "\n";
	}
}

void insert()
{
	system("cls");
	commodity[i].numofcom = i + 1;
	cout << "Identity Commodity: " << commodity[i].numofcom<<endl;
	cout << "Commodity Name: ";
	cin >> commodity[i].nameofcom;
	cout << "Company: ";
	cin >> commodity[i].company;
	cout << "Price: ";
	cin >> commodity[i].price;
	cout << "Expiration Year: ";
	cin >> commodity[i].expdate.year;
	cout << "Expiration Month: ";
	cin >> commodity[i].expdate.month;
	cout << "Expiration Day: ";
	cin >> commodity[i].expdate.day;
	i++;
	
	ofstream prt("print.txt", ios::out);
	prt << left << setw(10) << "Id" << setw(16) << "Name" << setw(11) << "Company" << left << setw(10) << right << "Price" << setw(11) << "Exp" << endl;
	for (int j = 0; j < i; j++)
	{
		prt << left << setw(10) << commodity[j].numofcom << setw(16) << commodity[j].nameofcom << setw(11) << commodity[j].company << left << setw(10) << right
			<< commodity[j].price << setw(10) << commodity[j].expdate.year << "/" << commodity[j].expdate.month << "/" << commodity[j].expdate.day << "\n";
	}
	prt.close();
}

int treqsear;

void search()
{
	system("cls");

	int searchmenu;
	cout << "1.Search By Commodity Name\n2.Search By Company Name\n3.Previous Menu\n";
	cin >> searchmenu;
	system("cls");
	if (searchmenu == 1)
	{
		cout << "Please Enter Commodity Name: ";
		cin >> searchcom.nameofcom;
		cout << endl;

		int count = 0;
		for (int j = 0; j < i; j++)
		{

			int len = 0;
			for (int z = 0; z <(signed int)strlen(searchcom.nameofcom); z++)
			if (commodity[j].nameofcom[z] == searchcom.nameofcom[z] || commodity[j].nameofcom[z] == searchcom.nameofcom[z] - 32 || commodity[j].nameofcom[z] == searchcom.nameofcom[z] + 32)
				len++;

			if (len == strlen(searchcom.nameofcom))
			{
				count++;
				if (count == 1)
					cout << left << setw(10) << "Id" << setw(16) << "Name" << setw(11) << "Company" << left << setw(10) << right << "Price" << setw(11) << "Exp" << endl;
				cout << left << setw(10) << commodity[j].numofcom << setw(16) << commodity[j].nameofcom << setw(11) << commodity[j].company << left << setw(10) << right
					<< commodity[j].price << setw(10) << commodity[j].expdate.year << "/" << commodity[j].expdate.month << "/" << commodity[j].expdate.day << "\n";
			}
		}

		if (count == 0)
			cout << "This commodity is not found\n";
	}

	if (searchmenu == 2)
	{
		cout << "Please Enter Company Name: ";
		cin >> searchcom.company;
		cout << endl;

		int count = 0;
		for (int j = 0; j < i; j++)
		{

			int len = 0;
			for (int z = 0; z <(signed int)strlen(searchcom.company); z++)
			if (commodity[j].company[z] == searchcom.company[z] || commodity[j].company[z] == searchcom.company[z] - 32 || commodity[j].company[z] == searchcom.company[z] + 32)
				len++;

			if (len == strlen(searchcom.company))
			{
				count++;
				if (count == 1)
					cout << left << setw(10) << "Id" << setw(16) << "Name" << setw(11) << "Company" << left << setw(10) << right << "Price" << setw(11) << "Exp" << endl;
				cout << left << setw(10) << commodity[j].numofcom << setw(16) << commodity[j].nameofcom << setw(11) << commodity[j].company << left << setw(10) << right
					<< commodity[j].price << setw(10) << commodity[j].expdate.year << "/" << commodity[j].expdate.month << "/" << commodity[j].expdate.day << "\n";
			}
		}

		if (count == 0)
			cout << "This company is not found\n";
	}

	if (searchmenu == 3)
	{
		int treqsear=0;
		startmain();
	}
		
}

void sort()
{
	system("cls");

	cout << "1.Sort By Identity Commodity\n2.Sort By Commodity Name\n3.Sort By Company Name\n4.Sort By Price\n5.Sort By Expiration Date\n6.Previous Menu\n";
	int sort;
	cin >> sort;
	if (sort == 1)
	{
		int typesort;
		cout << "1.Ascending\n2.Descending\n";
		cin >> typesort;
		if (typesort == 1)
		{
			for (int z = 0; z < i - 1; z++)
			{
				for (int j = 0; j<i - 1 - z; j++)
				if (commodity[j].numofcom>commodity[j + 1].numofcom)
				{
					temp = commodity[j];
					commodity[j] = commodity[j + 1];
					commodity[j + 1] = temp;
				}

			}
		}
		if (typesort == 2)
		{
			for (int z = 0; z < i - 1; z++)
			{
				for (int j = 0; j < i - 1 - z; j++)
				if (commodity[j].numofcom < commodity[j + 1].numofcom)
				{
					temp = commodity[j];
					commodity[j] = commodity[j + 1];
					commodity[j + 1] = temp;
				}

			}
		}

	}
	if (sort == 2)
	{
		int typesort;
		cout << "1.Ascending\n2.Descending\n";
		cin >> typesort;
		if (typesort == 1)
		{
			int valuesort;
			for (int z = 0; z < i - 1; z++)
			{
				for (int j = 0; j<i - 1 - z; j++)
				{
					valuesort = strcmp(commodity[j].nameofcom, commodity[j + 1].nameofcom);
					if (valuesort>0)
					{
						temp = commodity[j];
						commodity[j] = commodity[j + 1];
						commodity[j + 1] = temp;
					}
				}
			}
		}

		if (typesort == 2)
		{
			int valuesort;
			for (int z = 0; z < i - 1; z++)
			{
				for (int j = 0; j < i - 1 - z; j++)
				{
					valuesort = strcmp(commodity[j].nameofcom, commodity[j + 1].nameofcom);
					if (valuesort < 0)
					{
						temp = commodity[j];
						commodity[j] = commodity[j + 1];
						commodity[j + 1] = temp;
					}
				}
			}
		}
	}
	if (sort == 3)
	{
		int typesort;
		cout << "1.Ascending\n2.Descending\n";
		cin >> typesort;
		if (typesort == 1)
		{
			int valuesort;
			for (int z = 0; z < i - 1; z++)
			{
				for (int j = 0; j<i - 1 - z; j++)
				{
					valuesort = strcmp(commodity[j].company, commodity[j + 1].company);
					if (valuesort>0)
					{
						temp = commodity[j];
						commodity[j] = commodity[j + 1];
						commodity[j + 1] = temp;
					}
				}

			}
		}
		if (typesort == 2)
		{
			int valuesort;
			for (int z = 0; z < i - 1; z++)
			{
				for (int j = 0; j < i - 1 - z; j++)
				{
					valuesort = strcmp(commodity[j].company, commodity[j + 1].company);
					if (valuesort < 0)
					{
						temp = commodity[j];
						commodity[j] = commodity[j + 1];
						commodity[j + 1] = temp;
					}
				}

			}
		}

	}
	if (sort == 4)
	{
		int typesort;
		cout << "1.Ascending\n2.Descending\n";
		cin >> typesort;
		if (typesort == 1)
		{
			for (int z = 0; z < i - 1; z++)
			{
				for (int j = 0; j<i - 1 - z; j++)
				if (commodity[j].price>commodity[j + 1].price)
				{
					temp = commodity[j];
					commodity[j] = commodity[j + 1];
					commodity[j + 1] = temp;
				}

			}
		}
		if (typesort == 2)
		{
			for (int z = 0; z < i - 1; z++)
			{
				for (int j = 0; j < i - 1 - z; j++)
				if (commodity[j].price < commodity[j + 1].price)
				{
					temp = commodity[j];
					commodity[j] = commodity[j + 1];
					commodity[j + 1] = temp;
				}

			}
		}
	}
	if (sort == 5)
	{
		int typesort;
		cout << "1.Ascending\n2.Descending\n";
		cin >> typesort;
		if (typesort == 1)
		{
			for (int z = 0; z < i - 1; z++)
			{
				for (int j = 0; j<i - 1 - z; j++)
				{
					if (commodity[j].expdate.year>commodity[j + 1].expdate.year)
					{
						temp = commodity[j];
						commodity[j] = commodity[j + 1];
						commodity[j + 1] = temp;
					}
					else if (commodity[j].expdate.year == commodity[j + 1].expdate.year && commodity[j].expdate.month>commodity[j + 1].expdate.month)
					{
						temp = commodity[j];
						commodity[j] = commodity[j + 1];
						commodity[j + 1] = temp;
					}
					else if (commodity[j].expdate.year == commodity[j + 1].expdate.year && commodity[j].expdate.month == commodity[j + 1].expdate.month && commodity[j].expdate.day > commodity[j + 1].expdate.day)
					{
						temp = commodity[j];
						commodity[j] = commodity[j + 1];
						commodity[j + 1] = temp;
					}
				}


			}
		}
		if (typesort == 2)
		{
			for (int z = 0; z < i - 1; z++)
			{
				for (int j = 0; j < i - 1 - z; j++)
				{
					if (commodity[j].expdate.year < commodity[j + 1].expdate.year)
					{
						temp = commodity[j];
						commodity[j] = commodity[j + 1];
						commodity[j + 1] = temp;
					}
					else if (commodity[j].expdate.year == commodity[j + 1].expdate.year && commodity[j].expdate.month < commodity[j + 1].expdate.month)
					{
						temp = commodity[j];
						commodity[j] = commodity[j + 1];
						commodity[j + 1] = temp;
					}
					else if (commodity[j].expdate.year == commodity[j + 1].expdate.year && commodity[j].expdate.month == commodity[j + 1].expdate.month && commodity[j].expdate.day < commodity[j + 1].expdate.day)
					{
						temp = commodity[j];
						commodity[j] = commodity[j + 1];
						commodity[j + 1] = temp;
					}
				}

			}
		}
	}

	if (sort == 6)
		startmain();
}

void remove()
{
	system("cls");

	cout << "1.Permanently Delete\n2.Temporarily Delete\n3.Previous Menu\n";
	int del;
	cin >> del;
	if (del == 1)
	{
		show();
		int treq = 1;
		do{
			cout << "\nEnter ID For Permanently Delete: ";
			cin >> dele.numofcom;
			cout << "Are you sure that you want to permanently delete this commodity? (y/n)\n";
			char qsure;
			cin >> qsure;
			if (qsure == 'y')
			{

				for (int j = 0; j < i; j++)
				if (commodity[j].numofcom == dele.numofcom)
				{
					for (int z = j; z < i - 1; z++)
						commodity[z] = commodity[z + 1];
				}
				i--;
				commodity[i].numofcom = 0;
			}
			cout << "1.Delete Next Commodity\n2.Previous Menu\n";
			int treq;
			cin >> treq;
			if (treq != 1)
				break;
		} while (treq == 1);

	}
	if (del == 2)
	{
		show();
		int treq = 1;
		do{
			cout << "\nEnter ID For Temporarily Delete: ";
			cin >> dele.numofcom;
			cout << "Are you sure that you want to temporarily delete this commodity? (y/n)\n";
			char qsure;
		cin >> qsure;
			if (qsure == 'y')
			{

				for (int j = 0; j < i; j++)
				if (commodity[j].numofcom == dele.numofcom)
				{
					rest[r] = commodity[j];
					r++;
					for (int z = j; z < i - 1; z++)
						commodity[z] = commodity[z + 1];
				}
				i--;
				commodity[i].numofcom = 0;

			}

			cout << "1.Delete Next Commodity\n2.Previous Menu\n";
			int treq;
			cin >> treq;
			if (treq != 1)
				break;
		} while (treq == 1);

		ofstream recycle("RecycleBin.data", ios::binary);
		recycle.write((char*)&rest, sizeof(rest));
		recycle.close();
	}

	if (del == 3)
		startmain();
	
	ofstream prt("print.txt", ios::out);
	prt << left << setw(10) << "Id" << setw(16) << "Name" << setw(11) << "Company" << left << setw(10) << right << "Price" << setw(11) << "Exp" << endl;
	for (int j = 0; j < i; j++)
	{
		prt << left << setw(10) << commodity[j].numofcom << setw(16) << commodity[j].nameofcom << setw(11) << commodity[j].company << left << setw(10) << right
			<< commodity[j].price << setw(10) << commodity[j].expdate.year << "/" << commodity[j].expdate.month << "/" << commodity[j].expdate.day << "\n";
	}
	prt.close();

}

void restore()
{
	char qsure;
	system("cls");
	cout << "Are you sure that you want to restore information? (y/n)\n";
	cin >> qsure;
	if (qsure == 'y')
	for (int j = 0; j < r; j++)
	{
		commodity[i] = rest[j];
		i++;
		//r--;
		rest[j].numofcom = 0;
	}
	r = 0;
	ofstream prt("print.txt", ios::out);
	prt << left << setw(10) << "Id" << setw(16) << "Name" << setw(11) << "Company" << left << setw(10) << right << "Price" << setw(11) << "Exp" << endl;
	for (int j = 0; j < i; j++)
	{
		prt << left << setw(10) << commodity[j].numofcom << setw(16) << commodity[j].nameofcom << setw(11) << commodity[j].company << left << setw(10) << right
			<< commodity[j].price << setw(10) << commodity[j].expdate.year << "/" << commodity[j].expdate.month << "/" << commodity[j].expdate.day << "\n";
	}
	prt.close();
}

void print()
{
	char qsure;
	system("cls");
	cout << "Do you want to Print information? (y/n)\n";
	cin >> qsure;
	if (qsure == 'y')
	{
		ofstream prt("print.txt", ios::out);
		prt << left << setw(10) << "Id" << setw(16) << "Name" << setw(11) << "Company" << left << setw(10) << right << "Price" << setw(11) << "Exp" << endl;
		for (int j = 0; j < i; j++)
		{
			prt << left << setw(10) << commodity[j].numofcom << setw(16) << commodity[j].nameofcom << setw(11) << commodity[j].company << left << setw(10) << right
				<< commodity[j].price << setw(10) << commodity[j].expdate.year << "/" << commodity[j].expdate.month << "/" << commodity[j].expdate.day << "\n";
		}

		prt.close();
	}

}

void startmain()
{
	while (req != 8)
	{
		system("cls");
		cout << "1.Show\n2.Search\n3.Insert\n4.Sort\n5.Delete\n6.Restore\n7.Print\n8.Exit\n";
		cin >> req;

		if (req == 1)
		{
			show();
			cout << "\n1.Previous Menu\n";
			int treq;
			cin >> treq;
			if (treq == 1)
				continue;
		}
	rsearch:
		if (req == 2)
		{
			search();
			if (req == 2)
			{
				cout << "\n1.Previous Menu\n";
				cin >> treqsear;
			}
			if (treqsear == 1) goto rsearch;
			

		}

		if (req == 3)
		{
			int treq = 1;

			while (treq == 1)
			{

				insert();
				cout << "1.Input Next Commodity\n2.Previous Menu\n";
				cin >> treq;

				if (treq == 2)
				{
					ofstream shop("shop.data", ios::binary);
					shop.write((char*)&commodity, sizeof(commodity));
					shop.close();
					break;
				}
			}
		}

		if (req == 4)
		{
			sort();
			ofstream shop("shop.data", ios::binary);
			shop.write((char*)&commodity, sizeof(commodity));
			shop.close();
		}
		if (req == 5)
		{
			remove();
			ofstream shop("shop.data", ios::binary);
			shop.write((char*)&commodity, sizeof(commodity));
			shop.close();
		}

		if (req == 6)
		{
			restore();
			ofstream shop("shop.data", ios::binary);
			shop.write((char*)&commodity, sizeof(commodity));
			shop.close();
			ofstream recycle("RecycleBin.data", ios::binary);
			recycle.write((char*)&rest, sizeof(rest));
			recycle.close();
		}

		if (req == 7)
			print();

		if (req == 8)
			break;
	}

}

int main()
{

	ifstream shop("shop.data", ios::binary);
	shop.read((char*)&commodity, sizeof(commodity));
	for (int j = 0; j < 200; j++)
	{
		if (commodity[j].numofcom == 0)
		{
			i = j;
			shop.close();
			break;
		}
	}
	
	ifstream recycle("RecycleBin.data", ios::binary);
	recycle.read((char*)&rest, sizeof(rest));
	for (int j = 0; j < 100; j++)
	{
		if (rest[j].numofcom == 0)
		{
			r = j;
			recycle.close();
			break;
		}
	}


	startmain();


	return 0;

}



