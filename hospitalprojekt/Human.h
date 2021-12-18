#pragma once

#include <iostream>
#include <string.h>

using namespace std;

class Human
{
private:

	char surname[30];
	char name[30];
	char otchestvo[30];
	char adres[100];
	char namberTel[15];

public:

	void setSurname(char* _surname) { strcpy_s(surname, _surname); }
	void setName(char* _name) { strcpy_s(name, _name); }
	void setOtchestvo(char* _otchestvo) { strcpy_s(otchestvo, _otchestvo); }
	void setAdres(char* _adres) { strcpy_s(adres, _adres); }
	void setNamberTel(char* _namberTel) { strcpy_s(namberTel, _namberTel); }


	char* getSurname() { return surname; }
	char* getName() { return name; }
	char* getOtchestvo() { return otchestvo; }
	char* getAdres() { return adres; }
	char* getNamberTel() { return namberTel; }

	Human() {
		strcpy_s(surname, "");
		strcpy_s(name, "");
		strcpy_s(otchestvo, "");
		strcpy_s(adres, "");
		strcpy_s(namberTel, "");

	}

	~Human() {}

	void enterHuman();
	
};