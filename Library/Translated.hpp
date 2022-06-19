/**
 * @author: Andrej Bartulin
 * PROJECT: Library which translate most of C++ keywords and some functions to Croatian
 * LICENSE: MIT License
 * DESCRIPTION: Main header file
 * INFORMATION: If you want enable setting uncomment. If you want disable, comment setting
 *
*/

#pragma once

/* settings, postavke */
#define INCLUDE_HEADER_FILES
#define USE_NON_CAPITAL

#ifdef INCLUDE_HEADER_FILES
	#include <iostream>
	#include <string>
	#include <map>

	#include <stdio.h>
	#include <stdlib.h>
#endif

#define MAJOR 2
#define MINOR 0
#define PATCH 1
#define VERSION "v" MAJOR "." MINOR "." PATCH

/* ---------------         --------------- */

/* main function - glavna funkcija */
#define POCETAK_PROGRAMA int main() {
#ifdef USE_NON_CAPITAL
	#define pocetak_programa int main() {
#endif
#define POCETAK_PROGRAMA_ARGUMENTI int main(int argc, char **argv) {
#ifdef USE_NON_CAPITAL
	#define pocetak_programa_argumenti int main(int argc, char **argv) {
#endif
#define KRAJ_PROGRAMA return 0; }
#ifdef USE_NON_CAPITAL
	#define kraj_programa return 0; }
#endif

/* void function */
#define FUNKCIJA void // function don't return any type
#ifdef USE_NON_CAPITAL
	#define funkcija void
#endif

/* Variable integers - varijable */
#define CIJELI int
#define DUPLO double
#define REALNI float
#define DUGO long
#define KRATKI short
#define ZNAK char
#define ZNAKOVNI_NIZ1 const char*
#define ZNAKOVNI_NIZ2 std::string
#define TOCNO_NETOCNO bool

#ifdef USE_NON_CAPITAL
	#define cijeli int
	#define duplo double
	#define realni float
	#define dugo long
	#define kratki short
	#define znak char
	#define znakovni_niz1 const char*
	#define znakovni_niz2 std::string
	#define tocno_netocno bool
#endif

#define TIP_DEFINICIJE typedef
#define STALNA const

#ifdef USE_NON_CAPITAL
	#define tip_defenicije typedef
	#define stalna const
#endif

/* enums, structs, classes, namespaces - slogovi, klase */
#define ENUM enum
#define SLOG struct
#define UNIJA union
#define KLASA class

#define IMENO_PODRUCJE namespace
#define KORISTI using

#define JAVNO public
#define ZASTICENO protected
#define PRIVATNO private

#define VIRTUALNO virtual

#ifdef USE_NON_CAPITAL
	#define slog struct
	#define unija union
	#define klasa class
	#define imeno_podrucje namespace
	#define korsiti using

	#define javno public
	#define zasticeno protected
	#define privatno private

	#define virtualno virtual
#endif

/* std::map */
#define MAPA std::map

#ifdef USE_NON_CAPITAL
	#define mapa std::map
#endif

/* if, else, switch - uvjeti */
#define AKO if
#define AKO2 else if
#define INACE else

#define SKLOPKA switch
#define SLUCAJ case

#ifdef USE_NON_CAPITAL
	#define ako if
	#define ako2 else if
	#define inace else

	#define sklopka switch
	#define slucaj case
#endif

/* Loops - petlje */
#define UCINI_DOK do
#define DOK while
#define ZA for

#define NASTAVI continue
#define PREKINI break

#ifdef USE_NON_CAPITAL
	#define pocetak_programa ucini_dok do
	#define dok while
	#define za for

	#define nastavi continue
	#define prekini break
#endif

/* other - drugo */
#define AUTOMATSKI auto
#define UHVATI catch
#define VRATI return

#ifdef USE_NON_CAPITAL
	#define automatski auto
	#define uhvati catch
	#define vrati return
#endif

/* printing and user input function - ispis i unos podataka */
#define PRINTAJ1 std::cout // #include <iostream>
#define PRINTAJ2 printf // #include <stdio.h>

#ifdef USE_NON_CAPITAL
	#define printaj1 std::cout // #include <iostream>
	#define printaj2 printf // #include <stdio.h>
#endif

#define ZAVRSI_LINIJU std::endl; // #include <iostream>
#define ZAVRSI_LINIJU_ZNAK '\n';

#ifdef USE_NON_CAPITAL
	#define zavrsi_liniju std::endl; // #include <iostream>
	#define zavrsi_liniju_znak '\n';
#endif

#define UNESI1 std::cin // #include <iostream>
#define UNESI2 scanf // #include <stdio.h>

#ifdef USE_NON_CAPITAL
	#define unesi1 std::cin // #include <iostream>
	#define unesi2 scanf // #include <stdio.h>
#endif

/* functions - funckcije */
#define SUSTAV system
#define C_ZNAKOVNI_NIZ c_str

#ifdef USE_NON_CAPITAL
	#define sustav system
	#define c_znakovni_niz c_str
#endif

/* memory - memorija */
#define NOVO new
#define IZBRISI delete
#define ALOCIRAJ malloc
#define PONOVO_ALOCIRAJ realloc
#define OSLOBODI free

#ifdef USE_NON_CAPITAL
	#define novo new
	#define izbrisi delete
	#define alociraj malloc
	#define ponovo_alociraj realloc
	#define oslobodi free
#endif
