#pragma once

#include <iostream>
#include <cstring>
#include <fstream>
#include <windows.h>
using namespace std;

class Avto
{
private:

	char marka[50];
	char model[50];
	int year;
	char color[50];
	char resNamber[10];
	int cena;

public:

	void setMarka(char* _marka) { strcpy_s(marka, _marka); }
	void setModel(char* _model){ strcpy_s(model , _model);}
	int setYear(int _year){year==_year;}
	void setColor(char* _color){ strcpy_s(color, _color);}
	void setResNamber(char* _resNamber){ strcpy_s(resNamber, _resNamber);}
	int setCena(int _cena){cena==_cena;}
	
	char* getMarka() { return marka; }
	char* getModel() { return model; }
	char* getColor() { return color; }
	char* getResNamber() { return resNamber; }
	int getYear() { return year; }
	int getCena() { return cena; }

	Avto() {
		strcpy_s(marka, "");
		strcpy_s(model, "");
		strcpy_s(color, "");
		strcpy_s(resNamber, "");
		year = 0;
		cena = 0;
	}

	~Avto(){}

	void enter_struckt_cars();
	void print_struct_car();
};

