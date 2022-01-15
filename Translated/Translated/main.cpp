#include <iostream>

#include "Translated.hpp"

using namespace std;

KLASA Class
{
	JAVNO:
		BROJ number = 11;
};

POCETAK_PROGRAMA_ARGUMENTI

	cout << argv[0] << endl;

	Class Test;
	cout << Test.number << endl;

	cout << "\n";

	system("pause");

KRAJ_PROGRAMA