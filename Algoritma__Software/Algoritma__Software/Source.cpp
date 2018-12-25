#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
loopyeni:
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "   AAAAAA  LL       GGGGG     OOOOOO    RRRRR    ii TTTTTTTTTT MM       MM  AAAAAA  " << endl;
	cout << "  AA    AA LL      GG   GG   OO    OO  RR   RR          TT     MMMM   MMMM AA    AA " << endl;
	cout << "  AA    AA LL     GG        OO      OO RR    RR  ii     TT     MM MM MM MM AA    AA " << endl;
	cout << "  AA    AA LL     GG        OO      OO RR   RR   ii     TT     MM  MMM  MM AA    AA " << endl;
	cout << "  AAAAAAAA LL     GG  GGGG  OO      OO RRRRR     ii     TT     MM   M   MM AAAAAAAA " << endl;
	cout << "  AA    AA LL     GG     GG OO      OO RR  RR    ii     TT     MM       MM AA    AA " << endl;
	cout << "  AA    AA LL      GG   GG   OO    OO  RR   RR   ii     TT     MM       MM AA    AA " << endl;
	cout << "  AA    AA LLLLLLL  GGGGG     OOOOOO   RR    RR  ii     TT     MM       MM AA    AA " << endl;

	cout << endl << endl << endl;

	cout << "     SSSSS    OOOOOO   FFFFFFF TTTTTTTTTT WW       WW   AAAAAA   RRRRR   EEEEEEEE   " << endl;
	cout << "    SS       OO    OO  FF          TT     WW       WW  AA    AA RR   RR  EE         " << endl;
	cout << "     SS     OO      OO FF          TT     WW       WW  AA    AA RR    RR EE         " << endl;
	cout << "      SSS   OO      OO FFFFFF      TT     WW   W   WW  AA    AA RR   RR  EEEEEE     " << endl;
	cout << "        SS  OO      OO FFFFFF      TT     WW WWWWW WW  AAAAAAAA RRRRR    EEEEEE     " << endl;
	cout << "         SS OO      OO FF          TT     WW WW WW WW  AA    AA RR  RR   EE         " << endl;
	cout << "        SS   OO    OO  FF          TT     WWWW   WWWW  AA    AA RR   RR  EE         " << endl;
	cout << "    SSSSS     OOOOOO   FF          TT      WW     WW   AA    AA RR    RR EEEEEEEE   " << endl;

	cout << endl << endl << endl;

	cout << "\n\n\nBu program bir sayi tahmin etme oyunudur..!" << endl << endl;
	cout << "Devam etmek icin enter'e basiniz...!";
	cin.get();

	system("cls");

	char secim;
	int x;
	int maxrand;
	int hak;//kalan can..
	int tahmin;

loopana:
	system("cls");
	cout << "-------------------------------------------------------------------------" << endl;
	cout << "              ** Algoritma__Software **               " << endl;
	cout << "-------------------------------------------------------------------------" << endl;
	cout << "                  *** Tahminci ***                 " << endl;
	cout << "-------------------------------------------------------------------------" << endl;
	cout << "Lutfen oynamak istediginiz zorluk seviyesini seciniz.." << endl;
	cout << "-------------------------------------------------------------------------" << endl;
	cout << "(a)Cok kolay  ---> Sayi 0 ile 20 arasinda bir tam sayi.." << endl;
	cout << "(b)Kolay      ---> Sayi 0 ile 40 arasinda bir tam sayi.." << endl;
	cout << "(c)Normal     ---> Sayi 0 ile 60 arasinda bir tam sayi.." << endl;
	cout << "(d)Zor        ---> Sayi 0 ile 80 arasinda bir tam sayi.." << endl;
	cout << "(e)Cok zor    ---> sayi 0 ile 100 arasinda bir tam sayi.." << endl << endl;
	cout << "secim: "; cin >> secim;



	if ((secim == 'a') || (secim == 'a'))
	{
		maxrand = 20;
	}
	else if ((secim == 'b') || (secim == 'B'))
	{
		maxrand = 40;
	}
	else if ((secim == 'c') || (secim == 'C'))
	{
		maxrand = 60;
	}
	else if ((secim == 'd') || (secim == 'D'))
	{
		maxrand = 80;
		srand((unsigned)time(NULL));
		x = (rand() + 20) % 80;
		hak = 8;
		goto loop;
	}
	else if ((secim == 'e') || (secim == 'E'))
	{
		maxrand = 100;
		srand((unsigned)time(NULL));
		x = (rand() + 40) % 100;
		hak = 8;
		goto loop;
	}

	else
	{
		cout << "Gecersiz secim..!" << endl << endl;
		system("cls"); goto loopana;
	}

	srand((unsigned)time(NULL));
	x = rand() % maxrand; //cout<<endl<<x<<endl;

	hak = 8;

loop:
	cout << "-------------------------------------------------------------------------" << endl;
	hak--;
	//cout<<x<<endl; 
	cout << "Tahminini yap:                               kalan hakkiniz: " << hak << endl;
	cin >> tahmin;

	if (hak < 2)
	{
		if (tahmin == x)
		{
			goto loopdogru;
		}
		cout << "-------------------------------------------------------------------------" << endl;
		cout << "Hakkin doldu, kaybettin..!" << endl;
		hak = 0;
		goto loopson;
	}

	if ((tahmin > maxrand) || (tahmin < 0))
	{
		cout << "Gecersiz bir tahmin yaptin..!Tahminin en buyuk " << maxrand << ", en kucuk 0 olmali..!" << endl << endl;
		cin.get();
		goto loop;
	}

	else if (tahmin == x)
	{
	loopdogru: cout << "\nTebrikler, Kazandin..!" << endl << endl;
		goto loopson;
	}



	else if (x < tahmin)
	{
		cout << "Biraz kucult tahminini..!" << endl << endl;
		goto loop;
	}

	else if (x > tahmin)
	{
		cout << "Biraz buyult tahminini..!" << endl << endl;
		goto loop;
	}


	cout << "-------------------------------------------------------------------------" << endl;

loopson:
	int puan;
	puan = maxrand * hak;
	cout << "Puaniniz : " << puan << endl;
	cout << "-------------------------------------------------------------------------" << endl;
	cout << "Tekrar oynamak istermisin? (E/H) " << endl;
	char yanit;
	cin >> yanit;

	if ((yanit == 'e') || (yanit == 'E'))
	{
		goto loopana;
	}
	cout << "-------------------------------------------------------------------------" << endl;
	cout << "\nOyunu oynadiginiz icin tesekkurler..!" << endl;
	cout << "Gorus ve oneriler icin iletisim adresi : alimirza.hashimzada@gmail.com" << endl;
	cout << "-------------------------------------------------------------------------" << endl;


	system("pause");
	return 0;
}//ana fonksiyon sonu..