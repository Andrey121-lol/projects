#include "Avto.h"

void Avto::enter_struckt_cars()
{
	cout << "\n������� ������ � ����������\n";
	cout << "�����: "; cin >> marka;
	cout << "������: "; cin >> model;
	cout << "��� �������: "; cin >> year;
	cout << "����: "; cin >> color;
	cout << "��������������� �����: "; cin >> resNamber;
	cout << "����: "; cin >> cena;
}

void Avto::print_struct_car()
{
	cout << "\n�����: " << marka;
	cout << "\n������: " << model;
	cout << "\n��� �������: " << year;
	cout << "\n����: " <<color;
	cout << "\n��������������� �����: " << resNamber;
	cout << "\n����: " << cena;
	cout << "\n";
}
