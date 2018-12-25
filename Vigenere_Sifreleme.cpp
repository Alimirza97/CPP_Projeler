#include <iostream>
#include <string>
using namespace std;

string alfabe = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string sifre = "BSM";
string metin = "SAKARYAUNIVERSITESI";

int konumBul(string text, char c)
{
	int index = 0;
	int size = text.length();
	for (int i = 0; i < size; i++)
	{
		if (text[i] == c)
		{
			index = i;
			break;
		}
	}

	return index;
}

string sifreli_metin_olsutur(string _metin, string _sifre)
{

	int sayi = _metin.length() / _sifre.length();
	int mod = _metin.length() % _sifre.length();
	string sifre_metin = "";
	for (int i = 0; i < sayi; i++)
	{
		sifre_metin += sifre;
	}

	for (int j = 0; j < mod; j++)
	{
		sifre_metin += sifre[j];
	}
	return sifre_metin;
}

int main()
{

	int index_sifreli_metin = 0;

	int index_metin = 0;
	string kaydirmaMetin;
	string sifreli_metin = sifreli_metin_olsutur(metin, sifre);

	for (int i = 0; i < sifreli_metin.length(); i++)
	{
		index_sifreli_metin = konumBul(alfabe, sifreli_metin[i]) + 1;
		kaydirmaMetin = alfabe.substr(index_sifreli_metin, alfabe.length()) + alfabe.substr(0, index_sifreli_metin);
		index_metin = konumBul(alfabe, metin[i]);

		cout << kaydirmaMetin[index_metin];
	}

	cin.get();
	cin.ignore();
}
