#include "Avto.h"

void Avto::enter_struckt_cars()
{
	cout << "\nВведите данные о автомобиле\n";
	cout << "Марка: "; cin >> marka;
	cout << "Модель: "; cin >> model;
	cout << "Год выпуска: "; cin >> year;
	cout << "Цвет: "; cin >> color;
	cout << "Регистрационный номер: "; cin >> resNamber;
	cout << "Цена: "; cin >> cena;
}

void Avto::print_struct_car()
{
	cout << "\nМарка: " << marka;
	cout << "\nМодель: " << model;
	cout << "\nГод выпуска: " << year;
	cout << "\nЦвет: " <<color;
	cout << "\nРегистрационный номер: " << resNamber;
	cout << "\nЦена: " << cena;
	cout << "\n";
}
