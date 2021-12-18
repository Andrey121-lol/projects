#pragma once
#include "Human.h"

class Patient : public Human
{
private:

	int idPat;
	char diagnos[300];
	int medcarta;
	static int countPat;
	static int countMed;

public:
	void setDiagnos(char* _diagnos) { strcpy_s(diagnos, _diagnos); }

	char* getDiagnos() { return diagnos; }
	int getIdPat() { return idPat; }
	int getMadcarta() { return medcarta; }

	Patient() {

		strcpy_s(diagnos, "");
		idPat = ++countPat;
		medcarta = ++countMed;

	}

	~Patient() {}

	void enterHuman();

	void printPat();
};

