#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

using namespace std;

int main()
{
	char arr[91][20] = { "adana","KAHRAMAMARAÞ","amasya","ankara","antalya","artvin","bilecik","bitlis","bolu","burdur",
		"bursa","denizli","edirne","erzincan","erzurum","gaziantep","giresun","hakkari","hatay","mersin","istanbul",
		"izmir","kars","kastamonu","kayseri","kocaeli","konya","malatya","manisa","mardin","ordu","rize","sakarya",
		"samsun","siirt","sino p"," sivas","tokat","trabzon","tunceli","van","yozgat","zonguldak","aksaray","bayburt",
		"karaman","batman","ardahan","yalova","kilis","osmaniye" };
	char harf;
	char toplam[15] = { '&','&','&','&','&','&','&','&','&','&','&','&', '&','&','&' };
	int i, size = 0, x, y = 0, d = 0, t = 0;
	srand(time(NULL));
	printf("sehiri tahmin et?\n");
	x = 0 + rand() % 50;
	size = strlen(arr[x]);
	for (i = 0; i<size; i++)
	{
		printf("__ ");
	}
	printf("\n");
	while (y<5)
	{
		printf("\nbir harf gir ");
		fflush(stdin);
		cin >> harf;
		for (i = 0; i<size; i++)
		{
			if (harf == arr[x][i])
			{
				toplam[i] = harf;
				d++;
				t++;
			}
		}
		if (d == 0)
		{
			printf("\a");
			y++;
		}
		if (d != 0)
		{
			for (i = 0; i<size; i++)
			{
				if (toplam[i] != '&')
				{
					printf("%c ", toplam[i]);
				}
				else {
					printf("__ ");
				}
			}
		}
		else {
			printf("%d. hakkinizi doldurdunuz\n", y);
			if (y != 5)
			{
				printf("%d hakkiniz kaldi\n", 5 - y);
			}
			if (y == 5)
			{
				printf("GAME OVER!!!\n");
				printf("dogru cevap '%s' olacakti\n\n", arr[x]);
			}
		}
		if (t == size)
		{
			printf("\n\nTEBRIKLER !!!\n");
			break;
		}
		d = 0;
		printf("\n");
	}
	printf("\n");
	system("pause");
	return(0);
}