#include "Patient.h"
#include "Human.h"
#include "iostream"
using namespace std;

void Patient::enterHuman()
{
	char g[500];
	cout << "\n������� ������ � ��������\n";
	cout << "�������: "; cin >> g; setSurname(g);
	cout << "���: "; cin >> g;setName(g) ;
	cout << "��������: "; cin >> g;setOtchestvo(g);
	cout << "����� ��������: "; cin >> g; setAdres(g);
	cout << "����� �������� (+38): "; cin >> g; setNamberTel(g);
	cout << "������� ��������: "; cin >> diagnos;
	cout << "\n";
}

void Patient::printPat()
{
	cout << "\nid ��������: " << idPat;
	cout << "\n�������: " <<getSurname();
	cout << "\n���: " << getName();
	cout << "\n��������: " <<getOtchestvo();
	cout << "\n����� ��������: " << getAdres();
	cout << "\n����� �������� (+38): " << getNamberTel();
	cout << "\n����������� �����: " << medcarta;
	cout << "\n������� ��������: " << diagnos;
	cout << "\n";
}
