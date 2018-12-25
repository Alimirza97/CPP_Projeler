#include <iostream>
#include <locale.h>
using namespace std;

char zemin[5][5] = { { '1','|','2','|','3' },
{ '-','|','-','|','-' },
{ '4','|','5','|','6' },
{ '-','|','-','|','-' },
{ '7','|','8','|','9' } };

char oyuncu[2] = { 'X','O' };

int yer = 0;

int tur;

void yaz(int, char);


void zeminciz() {

	cout << endl;

	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 4; j++) {
			cout << zemin[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

}

void oyna(char player) {

	cout << "Sýra " << player << "'de : ";

	cin >> yer;

	player == 'X' ? yaz(yer, 'X') : yaz(yer, 'O');

}

void yaz(int yer, char oyuncu) {

	switch (yer) {

	case 1:
		zemin[0][0] = oyuncu;
		break;
	case 2:
		zemin[0][2] = oyuncu;
		break;
	case 3:
		zemin[0][4] = oyuncu;
		break;
	case 4:
		zemin[2][0] = oyuncu;
		break;
	case 5:
		zemin[2][2] = oyuncu;
		break;
	case 6:
		zemin[2][4] = oyuncu;
		break;
	case 7:
		zemin[4][0] = oyuncu;
		break;
	case 8:
		zemin[4][2] = oyuncu;
		break;
	case 9:
		zemin[4][4] = oyuncu;
		break;
	default:
		cout << "Hatalý Giriþ !" << endl;
		if (oyuncu == 'X') {
			oyna('X');
		}
		else {
			oyna('Y');
		}

	}

}

int main() 
{
	setlocale(LC_ALL, "Turkish");

	zeminciz();

	tur = 1;

	while (tur <= 9) {

		oyna(tur % 2 == 0 ? oyuncu[1] : oyuncu[0]);

		zeminciz();

		tur++;
	}

	cout << "Oyun Bitti !" << endl;

	return 0;
}
