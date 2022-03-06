#include "Translated.hpp"

KORISTI IMENO_PODRUCJE std;

ZNAKOVNI_NIZ2 unos;

MAPA<ZNAKOVNI_NIZ2, znakovni_niz2> test =
{
	{"jedan", "dva"}
};

POCETAK_PROGRAMA_ARGUMENTI

	PRINTAJ1 << "Unesi rijec za pretrazivanje: ";

	UNESI1 >> unos;

	AUTOMATSKI rezultat = test.find(unos);

	ako (rezultat != test.end())
	{
		PRINTAJ1 << "Nasao: " << rezultat->first << " i " << rezultat->second << "." << ZAVRSI_LINIJU_ZNAK;
	}
	inace
	{
		PRINTAJ1 << "Nista nije pronadjeno!" << ZAVRSI_LINIJU;
	}

	SUSTAV("pause");

KRAJ_PROGRAMA
