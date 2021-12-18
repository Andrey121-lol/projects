#include "Hospital.h"

void Hospital::enterPatients(Patient pat[], int kol) {
	for (int i = 0; i < kol; i++) {
		pat[i].enterHuman();
	}
}

void Hospital::printPaatients(Patient pat[],  int kol) {
	for (int i = 0; i < kol; i++) {
		pat[i].printPat();
	}
}

void Hospital::fileWrite(char* txt, Patient pat[], int n) {
	ofstream t(txt, ios::binary | ios::app);
	for (int i = 0; i < n; i++) {
		t.write((char*)&pat[i], sizeof pat[i]);
	}
	t.close();
}

int Hospital::fileOfSize(char* txt) {
	ifstream t(txt, ios::binary);
	if (!t.is_open()) {
		cout << "‘айл не может быть открыт!\n";
		return 0;
	}
	t.seekg(0, ios_base::end);
	int k = t.tellg() / sizeof(Patient);
	t.close();
	return k;
}

void Hospital::readFile(char* txt, Patient* pat, int n) {
	ifstream t(txt, ios::binary);
	for (int i = 0; i < n; i++) {
		t.read((char*)&pat[i], sizeof pat[i]);
	}
	t.close();
}

void Hospital::rewriteFile(char* txt, Patient* pat, int kol) {
	ofstream t(txt, ios::binary);
	for (int i = 0; i < kol; i++) {
		t.write((char*)&pat[i], sizeof pat[i]);
	}
	t.close();

}

void Hospital::searchDiagnos(Patient* pat, int kol, char _diagnos[]) {
	for (int i = 0; i < kol; ++i) {
		if (strcmp(pat[i].getDiagnos(), _diagnos) == 0) {
			pat[i].printPat();
		}
	}
}

void Hospital::searchDiapozon(Patient* pat, int kol) {
	int min = 0, max = 0;
	cout << "\n¬ведите минимальное значение: ";
	cin >> min;
	cout << "\n¬ведите максимальное значение: ";
	cin >> max;
	for (int i = 0; i < kol; ++i) {
		if (min <= pat[i].getIdPat() && max >= pat[i].getIdPat()) {
			pat[i].printPat();
		}
	}
}

void Hospital::sortSurname(Patient* pat, int kol) {
	Patient s;
	for (int i = 1; i < kol; i++)
		for (int j = kol - 1; j >= i; j--)
			if (_stricmp(pat[j].getSurname(), pat[j - 1].getSurname()) < 0) {
				s = pat[j];
				pat[j] = pat[j - 1];
				pat[j - 1] = s;
			}
			else if (_stricmp(pat[j].getSurname(), pat[j - 1].getSurname()) == 0) {
				if (_stricmp(pat[j].getName(), pat[j - 1].getName()) < 0) {
					s = pat[j];
					pat[j] = pat[j - 1];
					pat[j - 1] = s;
				}
			}

}
