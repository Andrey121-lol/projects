#pragma once

#include "Avto.h"
#include <fstream>
#include <iostream>

using namespace std;

class Avtomarket
{
public:

	void enter_struckt_cars(Avto x[], int kol);
	void fileWrite(char* txt, Avto x[], int kol);
	void print_struct_car(Avto* x, int kol);
	int fileOfSize(char* txt);
	void readFile(char* txt, Avto* x, int kol);
	void rewriteFile(char* txt, Avto* x, int kol);
	void searchStruc_year(Avto* x, int kol);
	void searchStruc_marka(Avto* x, int kol);
	void searchStruc_model_and_year(Avto* x, int kol);
	void searchStruc_year_more_cena(Avto* x, int kol);


};

