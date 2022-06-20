#include "../Library/Translated.hpp"

KORISTI IMENO_PODRUCJE std;

ZNAKOVNI_NIZ unos;

MAPA<ZNAKOVNI_NIZ, ZNAKOVNI_NIZ> test =
{
	{"jedan", "dva"}
};

POCETAK_PROGRAMA_ARGUMENTI

	cpp_ispis << "Unesi rijec za pretrazivanje: ";

	cpp_unesi >> unos;

	automatski rezultat = test.find(unos);

	ako (rezultat != test.end())
	{
		cpp_ispis << "Nasao: " << rezultat->first << " i " << rezultat->second << "." << '\n';
	}

	inace
	{
		cpp_ispis << "Nista nije pronadjeno!" << zavrsi_liniju;
	}

	znak kraj;

	c_unesi("%c", kraj);

KRAJ_PROGRAMA