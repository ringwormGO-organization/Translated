#include <iostream>
#include <cstdlib>

#include "Translated.hpp"
#include "Class-example.hpp"

KORISTI IMENO_PODRUCJE std;

POCETAK_PROGRAMA_ARGUMENTI

	PRINTAJ1 << "Square" << ZAVRSI_LINIJU;
	Square_Extent();
	PRINTAJ1 << "-----------------" << ZAVRSI_LINIJU;

	PRINTAJ1 << "Rectangle" << ZAVRSI_LINIJU;
	Rectangle_Extent();

	SUSTAV("pause");

KRAJ_PROGRAMA