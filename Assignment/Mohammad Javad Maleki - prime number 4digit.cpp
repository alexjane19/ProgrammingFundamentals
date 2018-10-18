#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
                                             cout<<'\a';
                                             // '\a' این بوقه خیلی مهمه
   int e=0,i;
   for(int number=1000;number<10000;number++)
   {
	   for(i=2;i<=number/2;i++)
	       if((number%i)==0)
	       {
              e=1;
	          break;
	       }
	       if(e==0)
		      cout<<number<<'\t';
	          e=0;
   }
                                              cout<<'\a';
                                              // '\a' این بوقه خیلی مهمه
getch();
return 0;
}
