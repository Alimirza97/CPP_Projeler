#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>

using namespace std;

#define SENSITIVITY .1
int ez1[1000] = { 0 };
int ez2[1000] = { 0 };
int uzun = 1;
int a[10][10] = { 0 };
int b[2] = { 0 };
int say = 0;
int son = 1;
int r = 0;
int sure = 0;
void delay(double sec);
void ciz(void);
char mleft(void);
char mright(void);
char mup(void);
char mdown(void);
void yemek(void);
void ezber(void);
void delay(double sec)
{
	double total = 0.;
	clock_t tstart = clock();
	clock_t tend;
	double duration;
	for (;; )
	{
		tend = clock();
		duration = (double)(tend - tstart) / CLOCKS_PER_SEC;
		if (fabs(duration - sec) < SENSITIVITY)
			return;
	}
}
int main()
{
	int i, k, r, t;
	char b = 'a';
	srand(time(NULL));
	a[4][4] = 1;
	for (i = 0; i <= 9; i++)
	{
		a[0][i] = 3;
		a[9][i] = 3;
		a[i][0] = 4;
		a[i][9] = 4;
	}
	a[0][9] = 4;
	yemek();
	ciz();
	b = _getch();
	for (r = 0; r<1000; r++)
		if (son == 1)
			switch (b)
			{
			case 'w':
				b = mup();
				break;
			case 's':
				b = mdown();
				break;
			case 'a':
				b = mleft();
				break;
			case 'd':
				b = mright();
				break;
			}
		else if (son == 2)
		{
			cout << "Duvara carptiniz. Cikmak icin bir tusa basin.\nSure: %d saniye\nUzunluk: %d\nPuan: %d " << sure / 2, uzun, 10 * uzun - sure / 2;
			cin >> i;
			return 0;
		}
		else if (son == 0)
		{
			cout << "Kendinize carptiniz. Cikmak icin bir tusa basin.\nSure: saniye\nUzunluk: %d\nPuan: %d " << sure / 2, uzun, 10 * uzun - sure / 2;
			cin >> i;
			return 0;
		}
}
char mleft()
{
	int i, k, t;
	char b;
	for (i = 0; i<10; i++)
	{
		for (k = 0; k<10; k++)
		{
			if (!_kbhit())
			{
				if (a[i][k] == 1)
				{
					if (a[i][k - 1] == 2)
					{
						son = 0;
					}
					a[i][k - 1] = 1;
					a[i][k] = 0;
					ciz();
					if (son != 1)
					{
						r = 1000;
						return b;
					}
					delay(.4);
					i = 0;
					k = 0;
				}
			}
			else if (_kbhit() && son == 1)
			{
				b = _getch();
				i = 10;
				k = 10;
				return b;
			}
			else if (son != 1)
			{
				r = 1000;
				return b;
			}
		}
	}
}
char mright()
{
	int i, k, t;
	char b;
	for (i = 0; i<10; i++)
		for (k = 0; k<10; k++)
			if (!_kbhit())
			{
				if (a[i][k] == 1)
				{
					if (a[i][k + 1] == 2)
					{
						son = 0;
					}
					a[i][k + 1] = 1;
					a[i][k] = 0;
					ciz();
					if (son != 1)
					{
						r = 1000;
						return b;
					}
					delay(.4);
					i = 0;
					k = 0;
				}
			}
			else if (_kbhit() && son == 1)
			{
				b = _getch();
				i = 10;
				k = 10;
				return b;
			}
			else if (son != 1)
			{
				r = 1000;
				return b;
			}
}
char mup()
{
	int i, k, t;
	char b;
	for (i = 0; i<10; i++)
		for (k = 0; k<10; k++)
			if (!_kbhit())
			{
				if (a[i][k] == 1)
				{
					if (a[i - 1][k] == 2)
					{
						son = 0;
					}
					a[i - 1][k] = 1;
					a[i][k] = 0;
					ciz();
					if (son != 1)
					{
						r = 1000;
						return b;
					}
					delay(.4);
					i = 0;
					k = 0;
				}
			}
			else if (_kbhit() && son == 1)
			{
				b = _getch();
				i = 10;
				k = 10;
				return b;
			}
			else if (son != 1)
			{
				r = 1000;
				return b;
			}
}
char mdown()
{
	int i, k, t;
	char b;
	for (i = 0; i<10; i++)
		for (k = 0; k<10; k++)
			if (!_kbhit())
			{
				if (a[i][k] == 1)
				{
					if (a[i + 1][k] == 2)
					{
						son = 0;
					}
					a[i + 1][k] = 1;
					a[i][k] = 0;
					ciz();
					if (son != 1)
					{
						r = 1000;
						return b;
					}
					delay(.4);
					i = 0;
					k = 0;
				}
			}
			else if (_kbhit() && son == 1)
			{
				b = _getch();
				i = 10;
				k = 10;
				return b;
			}
			else if (son != 1)
			{
				r = 1000;
				return b;
			}
}
void ciz()
{
	int i, k, t, p;
	sure++;
	ezber();
	for (i = 0; i<10; i++)
		if (a[i][9] == 1 || a[i][0] == 1 || a[0][i] == 1 || a[9][i] == 1)
		{
			son = 2;
			r = 1000;
		}
	for (p = 0; p<10; p++)
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		for (i = 0; i<10; i++)
		{
			for (k = 0; k<10; k++)
			{
				if (a[i][k] == 1 && (i != b[0] || k != b[1]))
				{
					printf("x");
					p = 10;
				}
				else if (a[i][k] == 0 && i == b[0] && k == b[1])
				{
					printf(".");
					p = 10;
				}
				else if ((a[i][k] == 1 || a[i][k] == 2) && i == b[0] && k == b[1])
				{
					printf("x");
					yemek();
					uzun++;
					if (uzun == 64)
						printf("WOW");
				}
				else if (a[i][k] == 4)
					printf("|");
				else if (a[i][k] == 3)
					printf("=");
				else if (a[i][k] == 2)
				{
					printf("*");
					p = 10;
				}
				else if (a[i][k] == 0)
				{
					printf(" ");
					p = 10;
				}
			}
			putchar('\n');
		}
	}
}
void yemek()
{
	int t, c;
	for (t = 0; t<10000000; t++)
	{
		srand(time(NULL));
		c = (rand() % 90) + 10;
		b[0] = c % 10;
		b[1] = (c - c % 10) / 10;
		if (a[b[0]][b[1]] == 0)
			t = 100000000;
		else if (a[(b[0] + t) % 7 + 1][b[1]] == 0)
		{
			b[0] = (b[0] + t) % 7 + 1;
			t = 100000000;
		}
		else if (a[b[0]][(b[1] + t) % 7 + 1] == 0)
		{
			b[1] = (b[1] + t) % 7 + 1;
			t = 100000000;
		}
		else if (a[(b[0] + t) % 7 + 1][(b[1] + t) % 7 + 1] == 0)
		{
			b[0] = (b[0] + t) % 7 + 1;
			b[1] = (b[1] + t) % 7 + 1;
			t = 100000000;
		}
	}
}
void ezber()
{
	int i, k, t;
	for (i = 0; i<10; i++)
		for (k = 0; k<10; k++)
			if (a[i][k] == 1)
			{
				ez1[say] = i;
				ez2[say] = k;
			}
	for (k = 0; k <= say; k++)
		a[ez1[k]][ez2[k]] = 0;
	for (t = 1; t <= uzun; t++)
		a[ez1[say - t + 1]][ez2[say - t + 1]] = 2;
	a[ez1[say]][ez2[say]] = 1;
	say++;
}