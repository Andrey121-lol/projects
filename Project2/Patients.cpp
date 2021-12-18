#include "Patients.h"


void Patients::enter_struckt_patients(Patients x[], int kol)
{
	for (int i = 0; i < kol; i++) {
		cout << "\nВведите данные о пациенте\n";
		for (int i = 0; i < kol; i++) {
			x[i].id_pat = 0; x[i].id_pat = x[i].id_pat + i;
		}

		cout << "Фамилия: "; cin >> x[i].surname;
		cout << "Имя: "; cin >> x[i].name;
		cout << "Отчество: "; cin >> x[i].otchestvo;
		cout << "Адрес пациента: "; cin >> x[i].adres;
		cout << "Номер телефона (+38): "; cin >> x[i].namber_tel;
		for (int i = 0; i < kol; i++) {
			x[i].medcarta = 0; x[i].medcarta = x[i].medcarta + i;
		}
		cout << "Диагнос пациента: "; cin >> x[i].diagnos;
	}
}

void Patients::fileWrite(char* txt, Patients x[], int kol)
{
	ofstream t(txt);
	for (int i = 0; i < kol; i++) {
		t.write((char*)&x[i], sizeof x[i]);
	}
	t.close();
}

void Patients::print_struct_pat(Patients* x, int kol)
{
	for (int i = 0; i < kol; i++) {
		cout << "\nid пациента: " << x[i].id_pat;
		cout << "\nФамилия: " << x[i].surname;
		cout << "\nИмя: " << x[i].name;
		cout << "\nОтчество: " << x[i].otchestvo;
		cout << "\nАдрес пациента: " << x[i].adres;
		cout << "\nНомер телефона (+38): " << x[i].namber_tel;
		cout << "\nМедецинская карта: " << x[i].medcarta;
		cout << "\nДиагнос пациента: " << x[i].diagnos;
		cout << "\n";
	}
}

int Patients::fileOfSize(char* txt)
{
	ifstream t(txt);
	if (!t.is_open()) {
		cout << "Файл не может быть открытым !\n";
		return 0;
	}
	t.seekg(0, ios_base::end);
	int k = t.tellg() / sizeof(Patients);
	t.close();
	return k;
}

void Patients::readFile(char* txt, Patients* x, int kol)
{
	ifstream t(txt);
	for (int i = 0; i < kol; i++) {
		t.read((char*)&x[i], sizeof x[i]);
	}
	t.close();
}

void Patients::rewriteFile(char* txt, Patients* x, int kol)
{
	ofstream t(txt);
	for (int i = 0; i < kol; i++) {
		t.write((char*)&x[i], sizeof x[i]);
	}
	t.close();
}

void Patients::sortStruc_surname(Patients* x, int kol)
{
	Patients s;
	for (int i = 1; i < kol; i++)
		for (int j = kol - 1; j >= i; j--)
			if (_stricmp(x[j].surname, x[j - 1].surname) < 0) {
				s = x[j];
				x[j] = x[j - 1];
				x[j - 1] = s;
			}
			else if (_stricmp(x[j].surname, x[j - 1].surname) == 0) {
				if (_stricmp(x[j].name, x[j - 1].name) < 0) {
					s = x[j];
					x[j] = x[j - 1];
					x[j - 1] = s;
				}
			}
}

void Patients::sortStruc_diagnos(Patients* x, int kol)
{
	Patients s;
	for (int i = 1; i < kol; i++)
		for (int j = kol - 1; j >= i; j--)
			if (_stricmp(x[j].diagnos, x[j - 1].diagnos) < 0) {
				s = x[j];
				x[j] = x[j - 1];
				x[j - 1] = s;
			}
}

void Patients::searchStruc_diagnos(Patients* x, int kol, char diagnos[])
{
	for (int i = 0; i < kol; ++i) {
		if (strcmp(x[i].diagnos, diagnos) == 0) {
			cout << "\nid пациента: " << x[i].id_pat;
			cout << "\nФамилия: " << x[i].surname;
			cout << "\nИмя: " << x[i].name;
			cout << "\nОтчество: " << x[i].otchestvo;
			cout << "\nАдрес пациента: " << x[i].adres;
			cout << "\nНомер телефона (+38): " << x[i].namber_tel;
			cout << "\nМедецинская карта: " << x[i].medcarta;
			cout << "\nДиагнос пациента: " << x[i].diagnos;
			cout << "\n";
		}
	}
}

void Patients::searchStruc_diapozon(Patients* x, int kol)
{
	int min = 0, max = 0;
	cout << "\nВведите минимальное значение: ";
	cin >> min;
	cout << "\nВведите максимальное значение: ";
	cin >> max;
	for (int i = 0; i < kol; ++i) {
		if (min <= x[i].id_pat && max >= x[i].id_pat) {
			cout << "\nid пациента: " << x[i].id_pat;
			cout << "\nФамилия: " << x[i].surname;
			cout << "\nИмя: " << x[i].name;
			cout << "\nОтчество: " << x[i].otchestvo;
			cout << "\nАдрес пациента: " << x[i].adres;
			cout << "\nНомер телефона (+38): " << x[i].namber_tel;
			cout << "\nМедецинская карта: " << x[i].medcarta;
			cout << "\nДиагнос пациента: " << x[i].diagnos;
			cout << "\n";
		}
	}
}

int Patients::rabochee_prostranstvo()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char fName[80];
	int k = 0; Patients* x;
	while (1) {
		cout << "\n0: Exit\n";
		cout << "1: Добавить записи в файл\n";
		cout << "2: Вывести содержимое файла на экран\n";
		cout << "3: Сортировка данных по фамилии\n";
		cout << "4: Сортировка данных по диагнозу\n";
		cout << "5: Вывести список пациентов с данным диагнозом\n";
		cout << "6: Поиск id пациента в заданом диапазоне\n";
		cin >> k;

		switch (k) {

		case 1:

			cout << "\nВведите количество пациентов: ";
			int z;
			cin >> z; x = new Patients[z];
			enter_struckt_patients(x, z);
			cin.ignore();
			cout << "\nВведите имя файла: ";
			cin.getline(fName, 80);
			fileWrite(fName, x, z);
			break;

		case 2:
			cout << "\nВведите имя файла: "; cin.ignore();
			cin.getline(fName, 80);
			z = fileOfSize(fName);
			if (z != 0) {
				x = new Patients[z];
				readFile(fName, x, z);
				cout << "\n Содержимое файла: \n";
				print_struct_pat(x, z); cin.ignore();
			}

			break;

		case 3:
			cout << "\n Сортировка данных по фамилии: \n";
			cout << "\nВведите имя файла: "; cin.ignore();
			cin.getline(fName, 80);
			z = fileOfSize(fName);
			if (z != 0) {
				x = new Patients[z];
				readFile(fName, x, z);
				sortStruc_surname(x, z);
				print_struct_pat(x, z);
				cout << "\nСохранить отсортированные данные? (Y/N): ";
				char tak; cin >> tak;
				if (tak == 'Y' || tak == 'y')
					rewriteFile(fName, x, z);
			}

			break;

		case 4:
			cout << "\n Сортировка данных по диагнозу: \n";
			cout << "\nВведите имя файла: "; cin.ignore();
			cin.getline(fName, 80);
			z = fileOfSize(fName);
			if (z != 0) {
				x = new Patients[z];
				readFile(fName, x, z);
				sortStruc_diagnos(x, z);
				print_struct_pat(x, z);
				cout << "\nСохранить отсортированные данные? (Y/N): ";
				char tak; cin >> tak;
				if (tak == 'Y' || tak == 'y')
					rewriteFile(fName, x, z);
			}

			break;

		case 5:
			cout << "\n <<Поиск по диагнозу>>\n";
			char search_diagnos[50];

			cout << "\nВведите имя файла: "; cin.ignore();
			cin.getline(fName, 80);
			cout << "\n Введите диагноз: "; cin.getline(search_diagnos, 50);
			z = fileOfSize(fName);
			if (z != 0) {
				x = new Patients[z];
				readFile(fName, x, z);
				searchStruc_diagnos(x, z, search_diagnos);

			}

			break;

		case 6:
			cout << "\n <<Поиск id пациента в заданом диапозоне>>\n";
			int id;
			cout << "\nВведите имя файла: "; cin.ignore();
			cin.getline(fName, 80);
			z = fileOfSize(fName);
			if (z != 0) {
				x = new Patients[z];
				readFile(fName, x, z);
				searchStruc_diapozon(x, z);
			}
			break;


		case 0:
			exit(0);
			break;
		}
	}

	delete[]x;
	return 0;
}