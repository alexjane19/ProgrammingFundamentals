#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
typedef struct polys{
	int exp[20];
	double coe[20];
	int n;
}poly;

poly converttopoly(char*);
poly sum(poly, poly);
void sort(poly &);
char*converttochar(poly);
int main(){
	char *p11, *p22, *sumchar;
	poly p1, p2;
	poly sum1;
	double hzarb=1,x;
	double su = 0;

	char c1[100], c2[100];
	printf("enter c1:\n");
	scanf("%s", c1);
	printf("enter c2:\n");
	scanf("%s", c2);
	p1 = converttopoly(c1);
	sort(p1);
	p11 = converttochar(p1);
	printf("%s\n", p11);
	p2 = converttopoly(c2);
	sort(p2);
	p22 = converttochar(p2);
	printf("%s\n", p22);
	sum1 = sum(p1, p2);
	sumchar = converttochar(sum1);
	printf("%s\n", sumchar);
	printf("\nyek adad:\n");
	scanf("%lf", &x);
	for (int i = 0; i < p1.n; i++)
	{
		hzarb = 1;
		for (int j = 0; j < p1.exp[i]; j++)
			hzarb *= x;
		su += hzarb*p1.coe[i];

	}
	printf("%lf\n", su);

	return 0;
}
void sort(poly &p1)
{
	for (int i = 0; i < p1.n - 1; i++)
	{
		for (int j = 0; j < p1.n - 1 - i; j++)
		if (p1.exp[j] < p1.exp[j + 1])
		{
			int temp1;
			double temp2;
			temp2 = p1.coe[j];
			p1.coe[j] = p1.coe[j + 1];
			p1.coe[j + 1] = temp2;

			temp1 = p1.exp[j];
			p1.exp[j] = p1.exp[j + 1];
			p1.exp[j + 1] = temp1;
		}

	}

}


char*converttochar(poly p1)
{
	char strpoly[100];
	FILE *fp;
	fp = fopen("text.txt", "w");
	for (int i = 0; i < p1.n; i++)
	{
		if (p1.exp[i] == 1)
		{
			if (p1.coe[i] != 0)
			{
				if (p1.coe[i] == 1)
				{
					if (i == 0)
						putc('x', fp);
					else
						fprintf(fp, "%s", "+x");
				}

				if (p1.coe[i] == -1)
					fprintf(fp, "%s", "-x");


				if (p1.coe[i] > 0 && p1.coe[i] != 1)
				{
					if (i == 0)
					{
						fprintf(fp, "%lf", p1.coe[i]);
						putc('x', fp);
					}

					else
					{
						putc('+', fp);
						fprintf(fp, "%lf", p1.coe[i]);
						putc('x', fp);
					}

				}
				if (p1.coe[i]<0 && p1.coe[i] != -1)
				{
					fprintf(fp, "%lf", p1.coe[i]);
					putc('x', fp);
				}
			}
		}
		if (p1.exp[i]>1)
		{
			if (p1.coe[i] != 0)
			{
				if (p1.coe[i] == 1)
				{
					if (i == 0)
					{
						putc('x', fp);
						putc('^', fp);
						fprintf(fp, "%d", p1.exp[i]);

					}

					else
					{
						fprintf(fp, "%s", "+x^");
						fprintf(fp, "%d", p1.exp[i]);

					}
				}

				if (p1.coe[i] == -1)
				{
					fprintf(fp, "%s", "-x^");
					fprintf(fp, "%d", p1.exp[i]);

				}

				if (p1.coe[i] > 0 && p1.coe[i] != 1)
				{
					if (i == 0)
					{
						fprintf(fp, "%lf", p1.coe[i]);
						fprintf(fp, "%s", "x^");
						fprintf(fp, "%d", p1.exp[i]);

					}
					else
					{
						fprintf(fp, "%s", "+");
						fprintf(fp, "%lf", p1.coe[i]);
						fprintf(fp, "%s", "x^");
						fprintf(fp, "%d", p1.exp[i]);

					}

				}
				if (p1.coe[i] < 0 && p1.coe[i] != -1)
				{
					fprintf(fp, "%lf", p1.coe[i]);
					fprintf(fp, "%s", "x^");
					fprintf(fp, "%d", p1.exp[i]);

				}
			}
		}
		if (p1.exp[i] == 0)
		{
			if (p1.coe[i] != 0)
			{
				if (p1.coe[i] == 1)
				{
					if (i == 0)
						putc('1', fp);

					else
						fprintf(fp, "%s", "+1");

				}

				if (p1.coe[i] == -1)
					fprintf(fp, "%s", "-1");


				if (p1.coe[i] > 0 && p1.coe[i] != 1)
				{
					if (i == 0)
						fprintf(fp, "%lf", p1.coe[i]);
					else
					{
						putc('+', fp);
						fprintf(fp, "%lf", p1.coe[i]);
					}

				}
				if (p1.coe[i] < 0 && p1.coe[i] != -1)
					fprintf(fp, "%lf", p1.coe[i]);
			}
		}
	}
	putc('E', fp);
	fclose(fp);

	fp = fopen("text.txt", "r");
	int c = 0;
	while (EOF)
	{
		//	fscanf(fp, "%s", strpoly[i]);
		strpoly[c] = getc(fp);
		if (strpoly[c] == 'E')
			break;
		
		if (strpoly[c] != '0')
		{
				c++;
		}
		if (strpoly[c] == '0')
		if (strpoly[c - 1] == '.')
		{
			c--;
			strpoly[c] = '0';
		}
		
			
	}
	strpoly[c] = '\0';
	fclose(fp);
	return strpoly;
}

poly converttopoly(char *strpoly)
{
	poly p1;
	for (int i = 0; i < 20; i++)
	{
		p1.coe[i] = 1;
		p1.exp[i] = 0;
	}
	char coe[20];
	char exp[20];
	int bcoe = 1;
	int bexp = 0;
	int k = 0;
	char temp[20];
	int len = 0;
	int z = 0, f = 0;
	for (int i = 0; i < strlen(strpoly) + 1; i++)
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
				p1.coe[len + 1] = -1;
			temp[z] = '\0';
			len++;
			z = 0;
			for (int j = 0; j < strlen(temp) + 1; j++)
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
							p1.coe[k] *= carry;
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
						p1.coe[k] *= carry;
					}
					if (temp[j + 1] == '\0')
					{
						p1.exp[k] = 1;
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

					p1.exp[k] = carry;
					f = 0;
					k++;
					bcoe = 1;
					bexp = 0;
				}
			}
		}


	}
	p1.n = len;
	return p1;

}

poly sum(poly p1, poly p2)
{
	poly sum;
	for (int i = 0; i < p1.n; i++)
	{
		for (int j = i + 1; j < p1.n; j++)
		{
			if (p1.exp[i] == p1.exp[j])
			{
				p1.coe[i] += p1.coe[j];
				for (int z = j; z < p1.n - 1; z++)
				{
					p1.exp[z] = p1.exp[z + 1];
					p1.coe[z] = p1.coe[z + 1];
				}
				p1.n--;
			}
		}
	}
	for (int i = 0; i < p2.n; i++)
	{
		for (int j = i + 1; j < p2.n; j++)
		{
			if (p2.exp[i] == p2.exp[j])
			{
				p2.coe[i] += p2.coe[j];
				for (int z = j; z < p2.n - 1; z++)
				{
					p2.exp[z] = p2.exp[z + 1];
					p2.coe[z] = p2.coe[z + 1];
				}
				p2.n--;
			}
		}
	}
	for (int i = 0; i < p1.n; i++)
	{
		for (int j = 0; j < p2.n; j++)
		{
			if (p1.exp[i] == p2.exp[j])
			{
				p1.coe[i] += p2.coe[j];
				for (int z = j; z < p2.n - 1; z++)
				{
					p2.exp[z] = p2.exp[z + 1];
					p2.coe[z] = p2.coe[z + 1];
				}
				p2.n--;
			}
		}
	}
	sum.n = p1.n + p2.n;


	for (int i = 0, j = 0; i < sum.n; i++, j++)
	{
		if (i < p1.n)
		{
			sum.coe[i] = p1.coe[j];
			sum.exp[i] = p1.exp[j];
		}

		if (i == p1.n)
			j = 0;

		if (i >= p1.n)
		{

			sum.coe[i] = p2.coe[j];
			sum.exp[i] = p2.exp[j];

		}
	}
	sort(sum);
	return sum;
}