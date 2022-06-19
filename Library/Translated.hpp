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
	#ifdef __cplusplus
		#include <iostream>
		#include <string>
		#include <map>
		#include <vector>
		#include <functional>
	#endif

	#include <stdio.h>
	#include <stdlib.h>
#endif

#define MAJOR 2
#define MINOR 2
#define PATCH 0
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
#define ZNAKOVNI_NIZ std::string
#define TOCNO_NETOCNO bool

#ifdef USE_NON_CAPITAL
	#define cijeli int
	#define duplo double
	#define realni float
	#define dugo long
	#define kratki short
	#define znak char
	#define znakovni_niz std::string
	#define tocno_netocno bool
#endif

#define TIP_DEFINICIJE typedef
#define STALNA const
#define STATICNO static
#define VELICINA sizeof

#ifdef __cplusplus
	#define STALAN_IZRAZ constexpr
#endif

#ifdef USE_NON_CAPITAL
	#define tip_defenicije typedef
	#define stalna const
	#define staticno const
	#define velicina sizeof

	#ifdef __cplusplus
		#define stalan_izraz constexpr
	#endif
#endif

/* enums, structs, classes, namespaces - slogovi, klase */
#define ENUM enum
#define SLOG struct
#define UNIJA union

#ifdef __cplusplus
	#define KLASA class
	#define IMENO_PODRUCJE namespace
	#define KORISTI using

	#define JAVNO public:
	#define ZASTICENO protected:
	#define PRIVATNO private:

	#define VIRTUALNO virtual
#endif

#ifdef USE_NON_CAPITAL
	#define slog struct
	#define unija union

	#ifdef __cplusplus
		#define klasa class
		#define imeno_podrucje namespace
		#define korsiti using

		#define javno public:
		#define zasticeno protected:
		#define privatno private:

		#define virtualno virtual
	#endif
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
	#define ucini_dok do
	#define dok while
	#define za for

	#define nastavi continue
	#define prekini break
#endif

/* printing and user input function - ispis i unos podataka */
#ifdef __cplusplus
	#define CPP_ISPIS std::cout // #include <iostream>
#endif
#define C_ISPIS printf // #include <stdio.h>

#ifdef USE_NON_CAPITAL
	#ifdef __cplusplus
		#define cpp_ispis std::cout // #include <iostream>
	#endif
	#define c_ispis printf // #include <stdio.h>
#endif

#ifdef __cplusplus
	#define ZAVRSI_LINIJU std::endl; // #include <iostream>
#endif

#ifdef USE_NON_CAPITAL
	#ifdef __cplusplus
		#define zavrsi_liniju std::endl; // #include <iostream>
	#endif
#endif

#ifdef __cplusplus
	#define CPP_UNESI std::cin // #include <iostream>
#endif

#define C_UNESI scanf // #include <stdio.h>

#ifdef USE_NON_CAPITAL
	#ifdef __cplusplus
		#define cpp_unesi std::cin // #include <iostream>
	#endif

	#define c_unesi scanf // #include <stdio.h>
#endif

/* memory - memorija */
#ifdef __cplusplus
	#define NOVO new
	#define IZBRISI delete
#endif

#define ALOCIRAJ malloc
#define PONOVO_ALOCIRAJ realloc
#define OSLOBODI free

#ifdef USE_NON_CAPITAL
	#ifdef __cplusplus
		#define novo new
		#define izbrisi delete
	#endif

	#define alociraj malloc
	#define ponovo_alociraj realloc
	#define oslobodi free
#endif

/* std:: */
#ifdef __cplusplus
	#define MAPA std::map
	#define VEKTOR std::vector
	#define STD_FUNKCIJA std::function
#endif

#if defined(USE_NON_CAPITAL) && defined(__cplusplus)
	#define mapa std::map
	#define vektor std::vector
	#define std_funkcija std::function
#endif

/* other - drugo */
#ifdef __cplusplus
	#define POKUSAJ try
	#define UHVATI catch
#endif

#define AUTOMATSKI auto
#define VRATI return

#ifdef USE_NON_CAPITAL
	#ifdef __cplusplus
		#define pokusaj try
		#define uhvati catch
	#endif

	#define automatski auto
	#define vrati return
#endif

/* functions - funckcije */
#define SUSTAV system

#ifdef __cplusplus
	#define PRETVORI_U_C_STR c_str
#endif

#define STR_KOPIRAJ strcpy
#define STR_USPOREDI strcmp
#define STR_DULJINA strlen

#ifdef USE_NON_CAPITAL
	#define sustav system

	#ifdef __cplusplus
		#define pretvori_u_c_str c_str
	#endif

	#define str_kopiraj strcpy
	#define str_usporedi strcmp
	#define str_duljina strlen
#endif

/* C++ 20 */
#if __cplusplus >= 202002L
	#define UVEZI import
    #define IZVEZI export
	#define MODUL module

	#ifdef USE_NON_CAPITAL
		#define uvezi import
		#define izvezi export
		#define modul module
	#endif
#endif