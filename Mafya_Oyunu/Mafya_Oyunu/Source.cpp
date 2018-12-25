//MAFYA OYUN KODLARI ÞÖYLE :

#include <iostream>
#include <windows.h>
using namespace std; //Kütüphaneleri Tanýmladýk

int main() {

		SetConsoleTitle("Mafya Oyunu"); //Oyunun Baþlýðýný Koyduk

		string ad;
		int cvp1, cvp2, cvp3, cvp4;
		int soru1;

	BastanBasla:
		cout << "Tahir Baba: Merhaba Caylak Adin Nedir? ";
		cin >> ad;
		cout << endl << ad << " : Adim " << ad << " Ve Bende Bir Gun Sizin Gibi Mafya Babasi Olmak Istiyorum.. ";
		cout << "\n\nTahir Baba: Haha! Mafya Babasi Olabilirsin Ama Benim Gibi Olamazsin Evlat..\nGit Ve Zulfikar Sana Silah Versin, Ha Birde Git Dus Al.. ";
		Sleep(9000); //Yazýyý Ekranda 9 Saniye Beklettik.
		cout << "\n\nDus Aldin, Giyindin, Silahlandin..! ";
		Sleep(3000); //Yazýyý Ekranda 3 Saniye Beklettik
		system("cls"); //Ekrandakileri Sildik..

		cout << "Tahir Baba: Mukemmel Tam Benim Istedigim Gibi Bir Adam Olmussun " << ad << " !\n";
		cout << "Ilk Gorevin ,Eger Kabul Edersen Tabi, Benim Icin Harac Topla..\nGorevi Kabul Ediyormusun? Evet = 1 | Hayir = 0 ";
		cin >> cvp1; //Cevabýmýzý cvp1 'in Icine Aldýk
		if (cvp1 == 1)
			cout << "Hic Tereddut Etmedin! Korkusuz Birine Benziyorsun " << ad << ".. \n";
		else
			if (cvp1 == 0) //Eðer Hayýr Cevabý Verilirse Girilecek Döngü..
				cout << "\nTahir Baba: Ben Seninle Dalga Geciyordum Tabi Ki Gorevi Kabul Etmek Zorundasin, Artik Sen Benim Adamimsin..";
			else //Eðer Evet(1) Ya Da Hayýr(0) Dýþýnda Bir Deðer Girilirse Girilecek Döngü..
			{
				MessageBox(NULL, "Tahir Babaya Kufur Ettin Seni Oldurdu!", "Oyun Bitti!", MB_OK);
				cout << "Yeniden Oynamak Istermisin?\nEvet = 1 | Hayir = 0";
				cin >> soru1;
				if (soru1 == 1) {
					cout << "Oyun Yeniden Yukleniyor..";
					Sleep(3000);
					system("cls");
					goto BastanBasla;
				}
				else {
					system("cls");
					cout << "Oyun Kapatiliyor Gorusmek Uzere..";
					Sleep(2000);
					return 0;
				}
			}

		cout << "Tahir Baba: Sukru'nun Meyhanesine Git Ve Benim Adima Harac Topla!\n" << ad << ": " << " Derhal Baba.. ";
		Sleep(5000);
		system("cls");

	Menu1:
		cout << "-Menu-\nGidilecek Yeri Seciniz:\n1)Sukru'nun Meyhanesi,2)Bar";
		cin >> cvp2;
		if (cvp2 == 1) {
			cout << "Sukru'nun Meyhanesine Gidiliyor Lutfen Bekleyin..";
			Sleep(3000);
			system("cls");
			cout << "Sukru: Selamun Aleykum Kardesim Buyur Suraya Gec Otur.\n" << ad << ": " << " Oturmaya Gelmedim Ben Tahir Baba'nin Adamiyim Harac Almaya Geldim..\nSukru: Bugunun Hasilati Bu Abi, Tahir Babaya Cok Selamlar.. ";
			Sleep(6000);
			system("cls");
			cout << "!!Elinde Nakit 20 Bin TL Para Var. Aklinda Ne Var?\n1) Parayi Tahir Babaya Gotur\n2) Parayla Birlikte Kac";
			cin >> cvp3;
			if (cvp3 == 1)
			{
				cout << "Tahir Baba: Aferin Delikanli Adammissin.. Bu Devirde Kimseye Guvenilmiyor. Seni Sag Kolum Yapiyorum " << ad << ".. ";

			}
			else
				if (cvp3 == 2) {
					cout << "!!Parayla Birlikte Kactin! Parayla Ne Yapmak Istiyorsun?\n1) Yeni Araba Al\n2) Yeni Ev Al\n3) Kari Kizla Ye\n ";
					cin >> cvp4;
					if (cvp4 == 1) {
						MessageBox(NULL, "Araban Tahir Baba'nin Adamlari Tarafindan Hava Ucuruldu!!", "Oyun Bitti", MB_OK);
						return 0;
					}
					else
						if (cvp4 == 2) {
							MessageBox(NULL, "Evin Tahir Baba'nin Adamlari Tarafindan Kundaklandi!!", "Oyun Bitti", MB_OK);
							return 0;
						}
						else
							if (cvp4 == 3) {
								MessageBox(NULL, "Kizlar Tahir Baba Tarafindan Gonderilen Seri Katil Cikti!!", "Oyun Bitti", MB_OK);
								return 0;
							}
							else {
								cout << "Parayla Ne Yapicagini Bilemezken Kapkacci Tarafindan Olduruldunuz!(Yanlis Bir Deger Girdiniz!)";
								Sleep(5000);
								return 0;
							}
				}

		}

		if (cvp2 == 2) {

			MessageBox(NULL, "Bara Gittin, Cok Icip Sarhos Oldun Ve Bir Kavgasinda Oldun!", "Oyun Bitti!", MB_OK);
			return 0;
		}

		Sleep(4000);
		system("cls");
		cout << "Tebrikler Tahir Babanin Sag Kolu Oldunuz! ";
		MessageBox(NULL, "Hazirlayan: Oskay UYSAL", "Tebrikler,Kazandiniz!", MB_OK);
		return 0;

	} //Main Fonksiyonunu