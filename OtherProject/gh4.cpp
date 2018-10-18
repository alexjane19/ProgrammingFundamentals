#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>

typedef struct  polynomial{
	double  *coe;
	int *exp;
	int n;
} poly;

typedef struct polynomials{
	char *strpolynomi;
	poly arraye;
	int n;
}term;

char*converttochar(poly p1)
{
	FILE *fp;
	fp = fopen("te.txt", "w");

	char strpoly[100], *strpol;
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

	fp = fopen("te.txt", "r");
	int c = 0;
	bool point = false;
	while (EOF)
	{
		//	fscanf(fp, "%s", strpoly[i]);
		strpoly[c] = getc(fp);
		if (strpoly[c] == 'E')
			break;
		if (strpoly[c] == '.')
			point = true;

		if (strpoly[c] == 'x' || strpoly[c] == '+' || strpoly[c] == '-')
			point = false;

		if (strpoly[c] != '0' || !point)
		{
			c++;
		}
		if (strpoly[c] == '0' && point)
		if (strpoly[c - 1] == '.')
		{
			c--;
			strpoly[c] = '0';
		}


	}
	strpoly[c] = '\0';
	strpol = (char*)malloc(sizeof(char));
	for (size_t i = 0; i < c + 1; i++)
	{
		strpol[i] = strpoly[i];
	}
	fclose(fp);
	return strpol;
}

poly converttopoly(char *strpoly)
{
	poly p1;
	int lenpoly = 1;
	for (int i = 0; i < strlen(strpoly); i++)
	if (strpoly[i] == '+' || strpoly[i] == '-')
		lenpoly++;

	p1.coe = (double*)malloc(lenpoly*sizeof(double));
	p1.exp = (int*)malloc(lenpoly*sizeof(int));
	p1.n = lenpoly;

	for (int i = 0; i < p1.n; i++)
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
		if (strpoly[i] != '+' && strpoly[i] != '-' && strpoly[i] != '\0')
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
				if (temp[j] != 'x' && bcoe == 1 && temp[j] != '\0')
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
				if (bexp == 1 && temp[j] != '\0')
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
poly menha(poly p1, poly p2)
{

	for (int i = 0; i < p1.n; i++)
	{
		for (int j = i + 1; j < p1.n; j++)
		{
			if (p1.exp[i] == p1.exp[j])
			{
				p1.coe[i] -= p1.coe[j];
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
				p2.coe[i] -= p2.coe[j];
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
				p1.coe[i] -= p2.coe[j];
				for (int z = j; z < p2.n - 1; z++)
				{
					p2.exp[z] = p2.exp[z + 1];
					p2.coe[z] = p2.coe[z + 1];
				}
				p2.n--;
			}
		}
	}
	poly sum4;
	sum4.n = p1.n + p2.n;
	sum4.coe = (double*)malloc(sum4.n*sizeof(int));
	sum4.exp = (int*)malloc(sum4.n*sizeof(int));

	for (int i = 0, j = 0; i < sum4.n; i++, j++)
	{
		if (i < p1.n)
		{
			sum4.coe[i] = p1.coe[j];
			sum4.exp[i] = p1.exp[j];
		}

		if (i == p1.n)
			j = 0;

		if (i >= p1.n)
		{

			sum4.coe[i] = p2.coe[j];
			sum4.exp[i] = p2.exp[j];

		}
	}
	sort(sum4);
	return sum4;
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

	sum.coe = (double*)malloc(sum.n*sizeof(int));
	sum.exp = (int*)malloc(sum.n*sizeof(int));

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

void removesamepoly(poly &p1)
{
	poly p2;
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
	p2.coe = p1.coe;
	p2.exp = p1.exp;
	p1.coe = (double*)malloc(p1.n*sizeof(int));
	p1.exp = (int*)malloc(p1.n*sizeof(int));

	for (int i = 0; i < p1.n; i++)
	{
		p1.coe[i] = p2.coe[i];
		p1.exp[i] = p2.exp[i];
	}

	delete[]p2.coe;
	delete[]p2.exp;
}
poly multiply(poly p1, poly p2)
{
	poly multi;
	multi.n = p1.n*p2.n;
	int count = 0;

	multi.coe = (double*)malloc(multi.n*sizeof(double));
	multi.exp = (int*)malloc(multi.n*sizeof(int));

	for (int i = 0; i < p1.n; i++)
	{
		for (int j = 0; j < p2.n; j++)
		{
			multi.coe[count] = p1.coe[i] * p2.coe[j];
			multi.exp[count] = p1.exp[i] + p2.exp[j];
			count++;
		}
	}

	for (int i = 0; i < multi.n; i++)
	{
		for (int j = i + 1; j < multi.n; j++)
		{
			if (multi.exp[i] == multi.exp[j])
			{
				multi.coe[i] += multi.coe[j];
				for (int z = j; z < multi.n - 1; z++)
				{
					multi.exp[z] = multi.exp[z + 1];
					multi.coe[z] = multi.coe[z + 1];
				}
				multi.n--;
				j--;
			}
		}
	}

	return multi;
}
poly derivative(poly p1)
{
	
	for (int i = 0; i < p1.n; i++)
	{
		p1.coe[i] *= p1.exp[i];
		p1.exp[i] -= 1;
	}
	return p1;
}
int main()
{
	FILE *fp;
	term *pols = 0, *polsnew = 0;
	int tedadejomle = 0;
	int menu = 0;
	poly menh, sum1, multi1, derpol;
	double hzarb = 1, x = 0;
	double su = 0;
	int cho = 0, cho1 = 0, cho2 = 0;
	double sum3 = 0;
	char c1[100];

	while (1)
	{
		printf("1.Vared Kardane Chand Jomlei\n2.Chop Chand Jomliha\n3.Meghdare chan jomlei be ezaye x\n4.jame cand jomli\n5.tafrighe chand jomlei\n6.zarb chand jomlei\n7.moratab sazi\n8.derivative\n9.neveshtan dar file\n10.khandan az file\n11.exit\n");
		scanf("%d", &menu);
		switch (menu)
		{
		case 1:
			if (!pols)
				pols = (term*)malloc(sizeof(term));
			else
			{
				polsnew = pols;
				pols = (term*)malloc((tedadejomle+1)*sizeof(term));
				int i;
				for (i = 0; i < tedadejomle; i++) pols[i] = polsnew[i];
				delete[] polsnew;

			}
			printf("vared kon yek chnd jomlei: ");
			gets(c1);
		fgets(c1, sizeof c1, stdin);
		c1[strlen(c1) - 1] = '\0';
			pols[tedadejomle].arraye = converttopoly(c1);
			removesamepoly(pols[tedadejomle].arraye);
			sort(pols[tedadejomle].arraye);
			pols[tedadejomle].strpolynomi = converttochar(pols[tedadejomle].arraye);
			tedadejomle++;
			(*pols).n = tedadejomle;
			break;
		case 2:
			for (int i = 0; i < (*pols).n; i++)
				printf("%d %s\n", i + 1, pols[i].strpolynomi);
			break;
		case 3:
			for (int i = 0; i < (*pols).n; i++)
				printf("%d %s\n", i + 1, pols[i].strpolynomi);

			printf("yek chand jomlei entekhab kon: ");
			scanf("%d", &cho);
			printf("yek X vared kon: ");
			scanf("%lf", &x);
			int hzarb;

			for (int i = 0; i < pols[cho - 1].arraye.n; i++){
				hzarb = 1;
				for (int j = 0; j < pols[cho - 1].arraye.exp[i]; j++)
					hzarb *= x;
				sum3 += hzarb*pols[cho - 1].arraye.coe[i];
			}
			printf("%0.lf\n", sum3);
			break;
		case 4:
			for (int i = 0; i < (*pols).n; i++)
				printf("%d %s\n", i + 1, pols[i].strpolynomi);
			char *sumch;

			printf("yek chand jomlei aval ra entekhab kon: ");
			scanf("%d", &cho1);
			printf("yek chand jomlei dovom ra entekhab kon: ");
			scanf("%d", &cho2);

			sum1 = sum(pols[cho1 - 1].arraye, pols[cho2 - 1].arraye);
			sumch = converttochar(sum1);
			printf("%s\n", sumch);
			break;
		case 5:
			for (int i = 0; i < (*pols).n; i++)
				printf("%d %s\n", i + 1, pols[i].strpolynomi);
			char *menhach;

			printf("yek chand jomlei aval ra entekhab kon: ");
			scanf("%d", &cho1);
			printf("yek chand jomlei dovom ra entekhab kon: ");
			scanf("%d", &cho2);
			menh = menha(pols[cho1 - 1].arraye, pols[cho2 - 1].arraye);
			menhach = converttochar(menh);
			printf("%s\n", menhach);
			break;
		case 6:
			for (int i = 0; i < (*pols).n; i++)
				printf("%d %s\n", i + 1, pols[i].strpolynomi);
			char * multich;

			printf("yek chand jomlei aval ra entekhab kon: ");
			scanf("%d", &cho1);
			printf("yek chand jomlei dovom ra entekhab kon: ");
			scanf("%d", &cho2);
			multi1 = multiply(pols[cho1 - 1].arraye, pols[cho2 - 1].arraye);
			multich = converttochar(multi1);
			printf("%s\n", multich);
			break;
		case 7:
			for (int i = 0; i < (*pols).n; i++)
				printf("%d %s\n", i + 1, pols[i].strpolynomi);

			printf("yek chand jomlei entekhab kon: ");
			scanf("%d", &cho);
			sort(pols[cho - 1].arraye);
			break;
		case 8:
			for (int i = 0; i < (*pols).n; i++)
				printf("%d %s\n", i + 1, pols[i].strpolynomi);
			char * derch;
			printf("yek chand jomlei entekhab kon: ");
			scanf("%d", &cho);

			derpol = derivative(pols[cho - 1].arraye);
			derch = converttochar(derpol);
			printf("%s\n", derch);

			break;
		case 9:
			fp = fopen("poly.txt", "w");
			fprintf(fp, "%d", (*pols).n);
			putc(' ', fp);
			for (int i = 0; i < (*pols).n; i++)
				fprintf(fp ,"%s\n",pols[i].strpolynomi);
			fclose(fp);
			break;
		case 10:
			fp = fopen("poly.txt", "r");
			if (fp == NULL)
				printf("Error opening file.\n");
			else{
				fscanf(fp, "%d", &tedadejomle);
				getc(fp);
				
				pols = (term*)malloc(tedadejomle*sizeof(term));
				(*pols).n = tedadejomle;
				char getfile[100];
				for (int i = 0; i < (*pols).n; i++)
				{
					fscanf(fp, "%s", getfile);
					pols[i].strpolynomi = (char*)malloc(strlen(getfile));
					int j;
					for(j=0;j<strlen(getfile);j++)
					pols[i].strpolynomi[j] = getfile[j];
					pols[i].strpolynomi[j] = '\0';

				}

				for (int i = 0; i < (*pols).n; i++)
					pols[i].arraye = converttopoly(pols[i].strpolynomi);

			}
			//fclose(fp);

			break;
		case 11:
			exit(0);
			break;

		}

	}

	return 0;
}

