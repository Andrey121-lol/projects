#include "Patient.h"
#include "Human.h"
#include "iostream"
using namespace std;

void Patient::enterHuman()
{
	char g[500];
	cout << "\nВведите данные о пациенте\n";
	cout << "Фамилия: "; cin >> g; setSurname(g);
	cout << "Имя: "; cin >> g;setName(g) ;
	cout << "Отчество: "; cin >> g;setOtchestvo(g);
	cout << "Адрес пациента: "; cin >> g; setAdres(g);
	cout << "Номер телефона (+38): "; cin >> g; setNamberTel(g);
	cout << "Диагнос пациента: "; cin >> diagnos;
	cout << "\n";
}

void Patient::printPat()
{
	cout << "\nid пациента: " << idPat;
	cout << "\nФамилия: " <<getSurname();
	cout << "\nИмя: " << getName();
	cout << "\nОтчество: " <<getOtchestvo();
	cout << "\nАдрес пациента: " << getAdres();
	cout << "\nНомер телефона (+38): " << getNamberTel();
	cout << "\nМедецинская карта: " << medcarta;
	cout << "\nДиагнос пациента: " << diagnos;
	cout << "\n";
}
