#include "Patient.h"
#include "Hospital.h"

#include <string>
#include <windows.h>

using namespace std;

int Patient::countPat = 0;
int Patient::countMed = 0;

int main() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Hospital hosp;
	Patient* pat;
	

	char fName[80];
	int k = 0;
	while (1) {
		cout << "\n0: Exit\n";
		cout << "1: Добавить записи в файл\n";
		cout << "2: Вывести содержимое файла на экран\n";
		cout << "3: Сортировка данных по фамилии\n";
		cout << "4: Вывести список пациентов с данным диагнозом\n";
		cout << "5: Поиск id пациента в заданом диапазоне\n";
		cin >> k;

		switch (k) {

		case 1:

			cout << "\nВведите количество пациентов: ";
			int z;
			cin >> z; pat = new Patient[z];
			hosp.enterPatients(pat, z);
			cin.ignore();
			cout << "\nВведите имя файла: ";
			cin.getline(fName, 80);
			hosp.fileWrite(fName, pat, z);
			break;

		case 2:
			cout << "\nВведите имя файла: "; cin.ignore();
			cin.getline(fName, 80);
			z = hosp.fileOfSize(fName);
			if (z != 0) {
				pat = new Patient[z];
				hosp.readFile(fName, pat, z);
				cout << "\n Содержимое файла: \n";
				hosp.printPaatients(pat, z); cin.ignore();
			}

			break;

		case 3:
			cout << "\n Сортировка данных по фамилии: \n";
			cout << "\nВведите имя файла: "; cin.ignore();
			cin.getline(fName, 80);
			z = hosp.fileOfSize(fName);
			if (z != 0) {
				pat = new Patient[z];
				hosp.readFile(fName, pat, z);
				hosp.sortSurname(pat, z);
				hosp.printPaatients(pat, z);
				cout << "\nСохранить отсортированные данные? (Y/N): ";
				char tak; cin >> tak;
				if (tak == 'Y' || tak == 'y')
					hosp.rewriteFile(fName, pat, z);
			}

			break;

		case 4:
			cout << "\n <<Поиск по диагнозу>>\n";
			char search_diagnos[50];

			cout << "\nВведите имя файла: "; cin.ignore();
			cin.getline(fName, 80);
			cout << "\n Введите диагноз: "; cin.getline(search_diagnos, 50);
			z = hosp.fileOfSize(fName);
			if (z != 0) {
				pat = new Patient[z];
				hosp.readFile(fName, pat, z);
				hosp.searchDiagnos(pat, z, search_diagnos);

			}

			break;

		case 5:
			cout << "\n <<Поиск id пациента в заданом диапозоне>>\n";
			int id;
			cout << "\nВведите имя файла: "; cin.ignore();
			cin.getline(fName, 80);
			z = hosp.fileOfSize(fName);
			if (z != 0) {
				pat = new Patient[z];
				hosp.readFile(fName, pat, z);
				hosp.searchDiapozon(pat, z);
			}
			break;

		case 0:
			exit(0);
			break;
		}
	}
	
	delete[]pat;
	return 0;
}

