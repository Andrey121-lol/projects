#include "Avtomarket.h"

void Avtomarket::enter_struckt_cars(Avto x[], int kol)
{
	for (int i = 0; i < kol; i++) {
		x[i].enter_struckt_cars();
	}
}

void Avtomarket::fileWrite(char* txt, Avto x[], int kol)
{
	ofstream t(txt);
	for (int i = 0; i < kol; i++) {
		t.write((char*)&x[i], sizeof x[i]);
	}
	t.close();
}

void Avtomarket::print_struct_car(Avto* x, int kol)
{
	for (int i = 0; i < kol; i++) {
		x[i].print_struct_car();
	}
}

int Avtomarket::fileOfSize(char* txt)
{
	ifstream t(txt);
	if (!t.is_open()) {
		cout << "���� �� ����� ���� �������� !\n";
		return 0;
	}
	t.seekg(0, ios_base::end);
	int k = t.tellg() / sizeof(Avto);
	t.close();
	return k;
}

void Avtomarket::readFile(char* txt, Avto* x, int kol)
{
	ifstream t(txt);
	for (int i = 0; i < kol; i++) {
		t.read((char*)&x[i], sizeof x[i]);
	}
	t.close();
}

void Avtomarket::rewriteFile(char* txt, Avto* x, int kol)
{
	ofstream t(txt);
	for (int i = 0; i < kol; i++) {
		t.write((char*)&x[i], sizeof x[i]);
	}
	t.close();
}

void Avtomarket::searchStruc_year(Avto* x, int kol)
{
	int  _year = 0;
	cout << "\n������� ��� ������� ����: ";
	cin >> _year;

	for (int i = 0; i < kol; ++i) {
		if (_year == x[i].getYear()) {
			cout << "\n�����: " << x[i].getMarka();
			cout << "\n������: " << x[i].getModel();
			cout << "\n��� �������: " << x[i].getYear();
			cout << "\n����: " << x[i].getColor();
			cout << "\n��������������� �����: " << x[i].getResNamber();
			cout << "\n����: " << x[i].getCena();
			cout << "\n";
		}
	}
}

void Avtomarket::searchStruc_marka(Avto* x, int kol)
{
	char  _marka[50];
	cout << "\n������� ����� ����: ";
	cin >> _marka;


	for (int i = 0; i < kol; ++i) {
		if (strcmp(x[i].getMarka(), _marka) == 0) {
			cout << "\n�����: " << x[i].getMarka();
			cout << "\n������: " << x[i].getModel();
			cout << "\n��� �������: " << x[i].getYear();
			cout << "\n����: " << x[i].getColor();
			cout << "\n��������������� �����: " << x[i].getResNamber();
			cout << "\n����: " << x[i].getCena();
			cout << "\n";
		}
	}
}

void Avtomarket::searchStruc_model_and_year(Avto* x, int kol)
{
	char  _model[50]; int xp_year = 0; int _data = 0;
	cout << "\n������� ������ ����: ";
	cin >> _model;
	cout << "\n����� ������ ���?: ";
	cin >> _data;
	cout << "\n������� ����������� ������� ����?: ";
	cin >> xp_year;


	for (int i = 0; i < kol; ++i) {
		if (strcmp(x[i].getModel(), _model) == 0 && (_data - x[i].getYear() >= xp_year)) {
			cout << "\n�����: " << x[i].getMarka();
			cout << "\n������: " << x[i].getModel();
			cout << "\n��� �������: " << x[i].getYear();
			cout << "\n����: " << x[i].getColor();
			cout << "\n��������������� �����: " << x[i].getResNamber();
			cout << "\n����: " << x[i].getCena();
			cout << "\n";
		}
	}
}

void Avtomarket::searchStruc_year_more_cena(Avto* x, int kol)
{
	int _cena_ = 0; int _year_ = 0;
	cout << "\n������� ��� ����: ";
	cin >> _year_;
	cout << "\n����� ����: ";
	cin >> _cena_;



	for (int i = 0; i < kol; ++i) {
		if ((x[i].getYear() == _year_) && (x[i].getCena() > _cena_)) {
			cout << "\n�����: " << x[i].getMarka();
			cout << "\n������: " << x[i].getModel();
			cout << "\n��� �������: " << x[i].getYear();
			cout << "\n����: " << x[i].getColor();
			cout << "\n��������������� �����: " << x[i].getResNamber();
			cout << "\n����: " << x[i].getCena();
			cout << "\n";
		}
	}
}
