/*-----HESAP MAKÝNESÝ 4 ÝÞLEM-----*/
#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <locale.h>
/*_.-*-._SABÝT DEÐÝÞKENLER_.-*-._*/
#define KALIN   "\e[01m"
#define ITALIK  "\e[03m"
#define GUMUS   "\e[02m"
#define KIRMIZI "\e[31m"
#define SARI    "\e[33m"
#define MAVI    "\e[34m"
#define MOR     "\e[35m"
#define YESIL   "\e[32m"
#define NORMAL  "\e[00m"
//std Aduzayý Kullanýmý
using namespace std;
//Deðiþkenler
float sayi1 = 0, sayi2 = 1;
//Fonksiyon Prototipleri
void Ana_Menu();
void Toplama();
void Cikarma();
void Carpma();
void Bolme();
//Satýriçi Fonksiyon
inline void Karsilama(void)
{
	system("cls");
	cout << KALIN << KIRMIZI << "\t\t\tHESAP MAKÝNESÝ" << NORMAL << endl;
	cout << ITALIK << "\t\t\tYükleniyor!!!" << NORMAL << endl;
	cout << "\t\t\t";
	Sleep(5);
	cout << KIRMIZI << "Yükleme Tamamlandý..." << NORMAL << endl;
	Sleep(3);
}
//Ana Fonksiyon
int main()
{
	setlocale(LC_ALL, "Turkish");
	Ana_Menu();
	system("pause");
	return 0;
}
//Ana_Menu Fonksiyonun Tanýmlanmasý
void Ana_Menu()
{
	Karsilama();
	system("cls");
	int secim = 0;

	cout << SARI << "_H_E_S_A_P___M_A_K_Ý_N_E_S_Ý_" << NORMAL << endl;
	cout << MAVI << "_Toplama___________________1_" << NORMAL << endl;
	cout << MOR << "_Çýkarma___________________2_" << NORMAL << endl;
	cout << YESIL << "_Çarpma____________________3_" << NORMAL << endl;
	cout << GUMUS << "_Bölme_____________________4_" << NORMAL << endl;
	cout << SARI << "_H_E_S_A_P___M_A_K_Ý_N_E_S_Ý_" << NORMAL << endl;
	cout << MAVI << "_Seçiminiz: ";
	cin >> secim;
	cout << NORMAL;

	switch (secim)
	{
	case 1:
		Toplama();
		break;
	case 2:
		Cikarma();
		break;
	case 3:
		Carpma();
		break;
	case 4:
		Bolme();
		break;
	default:
		cout << KIRMIZI << "Hatalý Seçim Yaptýnýz... Çýkýþ Yapýlýyor!!!" << endl;
		Sleep(3);
		cout << "________________________________________________________________________________" << NORMAL << endl;
	}
}
//Toplama Fonksiyonunun Tanýmlanmasý
void Toplama()
{
	system("cls");
	int secim;

	cout << YESIL << "--->>> Birinci Sayýyý Giriniz: ";
	cin >> sayi1;
	cout << NORMAL << MOR << "--->>> Ýkinci Sayýyý Giriniz: ";
	cin >> sayi2;
	cout << NORMAL << GUMUS << "--->>> SONUÇ: " << NORMAL << KIRMIZI << sayi1 + sayi2 << endl;
	cout << NORMAL << ITALIK << "\t\t\tAna Menü'ye dönmek için 1'e;" << endl;
	cout << "\t\t\tÇýkýþ Yapmak için rastgele bir tuþa basýnýz..." << endl;
	cin >> secim;
	cout << NORMAL;

	if (secim == 1)
		Ana_Menu();
}
//Cikarma Fonksiyonunun Tanýmlanmasý
void Cikarma()
{
	system("cls");
	int secim;

	cout << YESIL << "--->>> Birinci Sayýyý Giriniz: ";
	cin >> sayi1;
	cout << NORMAL << MOR << "--->>> Ýkinci Sayýyý Giriniz: ";
	cin >> sayi2;
	cout << NORMAL << GUMUS << "--->>> SONUÇ: " << NORMAL << KIRMIZI << sayi1 - sayi2 << endl;
	cout << NORMAL << ITALIK << "\t\t\tAna Menü'ye dönmek için 1'e;" << endl;
	cout << "\t\t\tÇýkýþ Yapmak için rastgele bir tuþa basýnýz..." << endl;
	cin >> secim;
	cout << NORMAL;

	if (secim == 1)
		Ana_Menu();
}
//Carpma Fonksiyonunun Tanýmlanmasý
void Carpma()
{
	system("cls");
	int secim;

	cout << YESIL << "--->>> Birinci Sayýyý Giriniz: ";
	cin >> sayi1;
	cout << NORMAL << MOR << "--->>> Ýkinci Sayýyý Giriniz: ";
	cin >> sayi2;
	cout << NORMAL << GUMUS << "--->>> SONUÇ: " << NORMAL << KIRMIZI << sayi1 * sayi2 << endl;
	cout << NORMAL << ITALIK << "\t\t\tAna Menü'ye dönmek için 1'e;" << endl;
	cout << "\t\t\tÇýkýþ Yapmak için rastgele bir tuþa basýnýz..." << endl;
	cin >> secim;
	cout << NORMAL;

	if (secim == 1)
		Ana_Menu();
}
//Bölme Fonksiyonunun Tanýmlanmasý
void Bolme()
{
	system("cls");
	int secim;

	cout << YESIL << "--->>> Birinci Sayýyý Giriniz: ";
	cin >> sayi1;
	cout << NORMAL << MOR << "--->>> Ýkinci Sayýyý Giriniz: ";
	cin >> sayi2;
	cout << NORMAL << GUMUS << "--->>> SONUÇ: " << NORMAL << KIRMIZI << sayi1 / sayi2 << endl;
	cout << NORMAL << ITALIK << "\t\t\tAna Menü'ye dönmek için 1'e;" << endl;
	cout << "\t\t\tÇýkýþ Yapmak için rastgele bir tuþa basýnýz..." << endl;
	cin >> secim;
	cout << NORMAL;

	if (secim == 1)
		Ana_Menu();
}
//Kod Sonu...