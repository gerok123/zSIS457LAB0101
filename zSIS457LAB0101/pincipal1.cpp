#include <iostream>

using namespace std;

int main()
{
	string  a;
	do {
		cout << "mi biografia" << endl;
		cout << "soy gerson roberth mamani mendoza" << endl;
		cout << "naci en tupiza-potosi en el 2000" << endl;
		cout << "sali de la u.e. andres de santa cruz" << endl;
		cout << "estoy soltero" << endl;
		cout << "estudio ing. en sistemas actualemente 2022" << endl;
		cout << " " << endl;
		cout << "coloque si para terminar" << endl;
		cin >> a;
	} while (a != "si");
	return 0;
}