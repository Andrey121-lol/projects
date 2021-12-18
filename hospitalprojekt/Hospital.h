#pragma once

#include "Human.h"
#include "Patient.h"

#include <fstream>
#include <iostream>

using namespace std;

class Hospital
{
public:

	void enterPatients(Patient pat[], int kol);

	void printPaatients(Patient pat[], int kol);

	void fileWrite(char* txt, Patient pat[], int n);

	int fileOfSize(char* txt);

	void readFile(char* txt, Patient* pat, int n);

	void rewriteFile(char* txt, Patient* pat, int kol);

	void searchDiagnos(Patient* pat, int kol, char diagnos[]);

	void searchDiapozon(Patient* pat, int kol);

	void sortSurname(Patient* pat, int kol);

};

