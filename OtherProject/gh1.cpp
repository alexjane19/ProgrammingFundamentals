#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int converttopoly(char*);
int iexp[20];
double icoe[20];
int main(){
	char strpoly[100];
	double x, sum = 0;
	double hzarb = 1;
	int len;
	printf("enter chand jomleii:\n");
	scanf("%s", strpoly);
	printf("yek adad:\n");
	scanf("%lf", &x);
	len = converttopoly(strpoly);
	for (int i = 0; i < len; i++){
		hzarb = 1;
		for (int j = 0; j < iexp[i]; j++)
			hzarb *= x;
		sum += hzarb*icoe[i];

	}
	printf("%lf\n", sum);
	return 0;
}

int converttopoly(char *strpoly)
{
	for (int i = 0; i < 20; i++)
	{
		icoe[i] = 1;
		iexp[i] = 0;
	}
	char coe[20];
	char exp[20];
	int bcoe = 1;
	int bexp = 0;
	int k = 0;
	char temp[20];
	int len = 0;
	int z = 0, f = 0;
	for (int i = 0; i < strlen(strpoly)+1; i++)
	{
		f = 0;
		bcoe = 1;
		bexp = 0;
		if (strpoly[i] == ' ')
			continue;
		if (strpoly[i] != '+' && strpoly[i] != '-')
		{
			temp[z] = strpoly[i];
			z++;
		}
		if (strpoly[i] == '+' || strpoly[i] == '-' || strpoly[i] == '\0')
		{
			if (strpoly[i] == '-')
				icoe[len+1] = -1;
			temp[z] = '\0';
			len++;
			z = 0;
			for (int j = 0; j < strlen(temp)+1; j++)
			{
				if (temp[j] != 'x' && bcoe == 1)
				{
					coe[f] = temp[j];
					f++;
					if (temp[j + 1] == '\0')
					{
						coe[f] = '\0';
						int position = 0;
						double carry = 0;
						int temp1;
						for (int u = 0; coe[u] != '\0'; u++)
						{
							if (coe[u] == '.')
								position = u;
						}
						if (position == 0)
							position = strlen(coe);
						for (int q = 0; q < position; q++){
							int cross = 1;

							for (int u = q; u < position - 1; u++)
								cross *= 10;
							temp1 = coe[q] - '0';
							carry += temp1*cross;

						}
						for (int q = position + 1; q < strlen(coe); q++){
							double cross = 1;

							for (int u = position; u < q; u++)
								cross /= 10;
							temp1 = coe[q] - '0';
							carry += temp1*cross;
						}
						if (coe[0] != '\0')
						{
							icoe[k] *= carry;
						}
						f = 0;
						bcoe = 1;
						k++;
					}

				}
				if (temp[j] == 'x')
				{
					coe[f] = '\0';
					int position = 0;
					double carry = 0;
					int temp1;
					for (int u = 0; coe[u] != '\0'; u++)
					{
						if (coe[u] == '.')
							position = u;
					}
					if (position == 0)
						position = strlen(coe);
					for (int q = 0; q < position; q++){
						int cross = 1;

						for (int u = q; u < position - 1; u++)
							cross *= 10;
						temp1 = coe[q] - '0';
						carry += temp1*cross;

					}
					for (int q = position + 1; q < strlen(coe); q++){
						double cross = 1;

						for (int u = position; u < q; u++)
							cross /= 10;
						temp1 = coe[q] - '0';
						carry += temp1*cross;
					}
					if (coe[0] != '\0')
					{
						icoe[k] *= carry;
					}
					if (temp[j + 1] == '\0')
					{
						iexp[k] = 1;
						k++;
					}
					f = 0;
					bcoe = 0;

				}
				if (temp[j] == '^')
				{
					bexp = 1;
					f = 0;
					j++;
				}
				if (bexp == 1)
				{
					exp[f] = temp[j];
					f++;
				}
				if (temp[j] == '\0' && bexp == 1)
				{
					exp[f] = '\0';
					int cross;
					int carry = 0;
					int temp1;
					for (int u = 0; u < strlen(exp); u++){
						cross = 1;
						for (int q = u; q < strlen(exp) - 1; q++)
							cross *= 10;
						temp1 = exp[u] - '0';
						carry += temp1*cross;
					}

					iexp[k] = carry;
					f = 0;
					k++;
					bcoe = 1;
					bexp = 0;
				}
			}
		}


	}

return len;

}



