#include "Human.h"

void Human::enterHuman()
{
	cout << "\nВведите данные о пациенте\n";
	cout << "Фамилия: "; cin >>surname ;
	cout << "Имя: "; cin >> name;
	cout << "Отчество: "; cin >>otchestvo ;
	cout << "Адрес пациента: "; cin >>adres;
	cout << "Номер телефона (+38): "; cin >>namberTel;
	cout << "\n";
}
