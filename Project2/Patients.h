#pragma once

#include <iostream>
#include <cstring>
#include <fstream>
#include <windows.h>

using namespace std;

class Patients
{
public:
	int id_pat;
	char surname[30];
	char name[30];
	char otchestvo[30];
	char adres[100];
	char namber_tel[15];
	char diagnos[300];
	int medcarta;

	void enter_struckt_patients(Patients x[], int kol);
	void fileWrite(char* txt, Patients x[], int kol);
	void print_struct_pat(Patients* x, int kol);
	int fileOfSize(char* txt);
	void readFile(char* txt, Patients* x, int kol);
	void rewriteFile(char* txt, Patients* x, int kol);
	void sortStruc_surname(Patients* x, int kol);
	void sortStruc_diagnos(Patients* x, int kol);
	void searchStruc_diagnos(Patients* x, int kol, char diagnos[]);
	void searchStruc_diapozon(Patients* x, int kol);
	int rabochee_prostranstvo();
};

