#include <iostream>
#include <windows.h>
#include <cmath>
#include <math.h>

using namespace std;



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int j = 1;
	const double PI = 3.141592653589793;
	int cikl = 1;

	while (cikl)
	{
		int swit = 0;
		
		cout << "\n\n\tMENU" ;
		for (int i = 1; i <= 10; i++) {
			cout << endl << i << " задание.";
		}

		cout << "\n\nвыбери задание :";
		cin >> swit;
		switch (swit)
		{
		case 1: {

			cout << "\n\t1 задание"<<endl;
			int arr[10] = { 0 };
			for (int i = 0; i <= 10; i++) {
				if (arr[i] == 0) {
					cout << "\n0 [" << i << "]";
				}
			}
		
			break; }
		case 2: {

			cout << "\n\t2 задание" << endl;
			int arr[10] = { 1,2,3,4,-5,-6,-7,8,9,10 };
			
			for (int i = 0; i <= 10; i++) {
				if (arr[i] < 0) {
					arr[i] = 0;
				
				}
			}
			for (int i = 0; i <= 10; i++) {
				cout <<endl<< arr[i];
			}
			break; }

		case 3: {
			cout << "\n\t2 задание" << endl;
			int min;

			break;
		}

		

		}

	}
}
	
