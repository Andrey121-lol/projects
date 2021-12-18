#include "Avto.h"
#include "Avtomarket.h"


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Avtomarket mark;
	Avto* car;

	char fName[80];
	int k = 0;

	while (1) {
		cout << "\n0: Exit\n";
		cout << "1: Добавить записи в файл\n";
		cout << "2: Вывести содержимое файла на экран\n";
		cout << "3: Список авто заданной марки\n";
		cout << "4: Cписок авто заданой модели,которые используются больше 'n' лет\n";
		cout << "5: Список авто заданного года ,цена которых больше указаной\n";
		cin >> k;

		switch (k) {

		case 1:

			cout << "\nВведите количество автомобилей: ";
			int z;
			cin >> z; car = new Avto[z];
			mark.enter_struckt_cars(car, z);
			cin.ignore();
			cout << "\nВведите имя файла: ";
			cin.getline(fName, 80);
			mark.fileWrite(fName, car, z);
			break;

		case 2:
			cout << "\nВведите имя файла: "; cin.ignore();
			cin.getline(fName, 80);
			z = mark.fileOfSize(fName);
			if (z != 0) {
				car = new Avto[z];
				mark.readFile(fName, car, z);
				cout << "\n Содержимое файла: \n";
				mark.print_struct_car(car, z); cin.ignore();
			}

			break;

		case 3:
			cout << "\n Список авто заданной марки: \n";
			cout << "\nВведите имя файла: "; cin.ignore();
			cin.getline(fName, 80);
			z = mark.fileOfSize(fName);
			if (z != 0) {
				car = new Avto[z];
				mark.readFile(fName, car, z);
				mark.searchStruc_marka(car, z);
			}


			break;

		case 4:
			cout << "\n Cписок авто заданой модели,которые используются больше 'n' лет: \n";
			cout << "\nВведите имя файла: "; cin.ignore();
			cin.getline(fName, 80);
			z = mark.fileOfSize(fName);
			if (z != 0) {
				car = new Avto[z];
				mark.readFile(fName, car, z);
				mark.searchStruc_model_and_year(car, z);
				//print_struct_pat(x, z);
			}


			break;

		case 5:
			cout << "\n <<Список авто заданного года ,цена которых больше указаной>>\n";
			char search_diagnos[50];

			cout << "\nВведите имя файла: "; cin.ignore();
			cin.getline(fName, 80);
			z = mark.fileOfSize(fName);
			if (z != 0) {
				car = new Avto[z];
				mark.readFile(fName, car, z);
				mark.searchStruc_year_more_cena(car, z);

			}

			break;

		case 0:
			exit(0);
			break;
		}
	}

	delete[]car;
	return 0;
}