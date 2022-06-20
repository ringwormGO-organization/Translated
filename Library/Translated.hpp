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

#undef USE_SPECIAL_CHARACTERS

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
#define MINOR 3
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

#ifdef USE_SPECIAL_CHARACTERS
	#define TOČNO_NETOČNO bool
#else
	#define TOCNO_NETOCNO bool
#endif

#ifdef USE_NON_CAPITAL
	#define cijeli int
	#define duplo double
	#define realni float
	#define dugo long
	#define kratki short
	#define znak char
	#define znakovni_niz std::string
	
	#ifdef USE_SPECIAL_CHARACTERS
		#define točno_netočno bool
	#else
		#define tocno_netocno bool
	#endif

#endif

#define TIP_DEFINICIJE typedef
#define STALNA const

#ifdef USE_SPECIAL_CHARACTERS
	#define STATIČNO static
	#define VELIČINA sizeof
#else
	#define STATICNO static
	#define VELICINA sizeof
#endif

#ifdef __cplusplus
	#define STALAN_IZRAZ constexpr
#endif

#ifdef USE_NON_CAPITAL
	#define tip_defenicije typedef
	#define stalna const

	#ifdef USE_SPECIAL_CHARACTERS
		#define statično static
		#define veličina sizeof
	#else
		#define staticno static
		#define velicina sizeof
	#endif

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

	#ifdef USE_SPECIAL_CHARACTERS
		#define IMENO_PODRUČJE namespace
	#else
		#define IMENO_PODRUCJE namespace
	#endif

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
		
		#ifdef USE_SPECIAL_CHARACTERS
			#define imeno_područje namespace
		#else
			#define imeno_podrucje namespace
		#endif

		#define korsiti using

		#define javno public:
		#define zasticeno protected:
		#define privatno private:

		#define virtualno virtual
	#endif
#endif

/* if, else, switch - uvjeti */
#define AKO if

#ifdef USE_SPECIAL_CHARACTERS
	#define INAČE else
#else
	#define INACE else
#endif

#define SKLOPKA switch

#ifdef USE_SPECIAL_CHARACTERS
	#define SLUČAJ case
#else
	#define SLUCAJ case
#endif

#ifdef USE_NON_CAPITAL
	#define ako if
	
	#ifdef USE_SPECIAL_CHARACTERS
		#define inače else
	#else
		#define inace else
	#endif

	#define sklopka switch
	
	#ifdef USE_SPECIAL_CHARACTERS
		#define slučaj else
	#else
		#define slucaj else
	#endif
#endif

/* Loops - petlje */
#ifdef USE_SPECIAL_CHARACTERS
	#define UČINI_DOK do
#else
	#define UCINI_DOK do
#endif

#define DOK while
#define ZA for

#define NASTAVI continue
#define PREKINI break

#ifdef USE_NON_CAPITAL
	#ifdef USE_SPECIAL_CHARACTERS
		#define učini_dok do
	#else
		#define ucini_dok do
	#endif

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

#if defined(__cplusplus) && defined(USE_SPECIAL_CHARACTERS) && defined(USE_NON_CAPITAL)
	#define završi_liniju std::endl; /* #include <iostream> */
#elif defined(__cplusplus) && defined(USE_NON_CAPITAL)
	#define zavrsi_liniju std::endl; /* #include <iostream> */
#elif defined(__cplusplus) && defined(USE_SPECIAL_CHARACTERS)
	#define ZAVRŠI_LINIJU std::endl; /* #include <iostream> */
#elif defined(__cplusplus)
	#define ZAVRSI_LINIJU std::endl; /* #include <iostream> */
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

	#ifdef USE_SPECIAL_CHARACTERS
		#define IZBRIŠI delete
	#else
		#define IZBRISI delete
	#endif
#endif

#define ALOCIRAJ malloc
#define PONOVO_ALOCIRAJ realloc
#define OSLOBODI free

#ifdef USE_NON_CAPITAL
	#ifdef __cplusplus
		#define novo new
		
		#ifdef USE_SPECIAL_CHARACTERS
			#define izbriši delete
		#else
			#define izbrisi delete
		#endif
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

	#define KOD at
	#define POCETAK begin
	#define C_POCETAK cbegin
	#define C_KRAJ cend
	#define OCISTI clear
	#define BROJI count
	#define CR_POCETAK crbegin
	#define CR_KRAJ crend
	#define POLOZI emplace
	#define POLOZI_SAVJET emplace_hint
	#define PRAZNO empty
	#define KRAJ end
	#define JEDNAKI_RASPON equal_range
	#define STD_VELICINA size /* it is not anymore sorted by alphabetically order because that takes time */
	#define MAX_VELICINA max_size
	#define UNESI insert

	/* C++ 17 */
	#if __cplusplus >=  201703L
		#define UNESI_DODIJELI insert_or_assign

		#ifdef USE_SPECIAL_CHARACTERS
			#define POKUŠAJ_POLOŽITI try_emplace
		#else
			#define POKUSAJ_POLOZITI try_emplace
		#endif

		#define IZVADI extract
		#define SJEDINI merge
	#endif

	/* C++ 20 */
	#if __cplusplus >= 202002L && defined(USE_SPECIAL_CHARACTERS)
		#define SADRŽI contains
	#elif __cplusplus >= 202002L
		#define SADRZI contains
	#endif

	#define STD_IZBRISI erase
	#define ZAMIJENI swap
	#define PRONADJI find
	#define DONJA_GRANICA lower_bound
	#define GORNJA_GRANICA upper_bound
	#define KLUC_COMB key_comb
	#define VRIJEDNOST_COMB value_comb

	#ifdef USE_SPECIAL_CHARACTERS
		#define POČETAK begin
		#define C_POČETAK cbegin
		#define OČISTI clear
		#define CR_POČETAK crbegin
		#define POLOŽI emplace
		#define POLOŽI_SAVJET emplace_hint
		#define STD_VELIČINA size
		#define MAX_VELIČINA max_size
		#define STD_IZBRIŠI erase
		#define PRONAĐI find
		#define KLJUČ_COMB key_comb
	#endif
#endif

#if defined(USE_NON_CAPITAL) && defined(__cplusplus)
	#define mapa std::map
	#define vektor std::vector
	#define std_funkcija std::function

	#define kod at
	#define pocetak begin
	#define c_pocetak cbegin
	#define c_kraj cend
	#define ocisti clear
	#define broji count
	#define cr_pocetak crbegin
	#define cr_kraj crend
	#define polozi emplace
	#define polozi_savjet emplace_hint
	#define prazno empty
	#define kraj end
	#define jednaki_raspon equal_range
	#define std_velicina size /* it is not anymore sorted by alphabetically order because that takes time */
	#define max_velicina max_size
	#define unesi insert

	/* C++ 17 */
	#if __cplusplus >=  201703L
		#define unesi_dodijeli insert_or_assign

		#ifdef USE_SPECIAL_CHARACTERS
			#define pokušaj_položiti try_emplace
		#else
			#define pokusaj_poloziti try_emplace
		#endif

		#define izvadi extract
		#define sjediniti merge
	#endif

	/* C++ 20 */
	#if __cplusplus >= 202002L && defined(USE_SPECIAL_CHARACTERS)
		#define sadrži contains
	#elif __cplusplus >= 202002L
		#define sadrzi contains
	#endif

	#define std_izbrisi erase
	#define zamijeni swap
	#define pronadji find
	#define donja_granica lower_bound
	#define gornja_granica upper_bound
	#define kljuc_comb key_comb
	#define vrijednost_comb value_comb

	#ifdef USE_SPECIAL_CHARACTERS
		#define početak begin
		#define c_početak cbegin
		#define očisti clear
		#define cr_početak crbegin
		#define položi emplace
		#define položi_savjet emplace_hint
		#define veličina size
		#define max_veličina max_size
		#define std_izbriši erase
		#define pronađi find
		#define ključ_comb key_comb
	#endif
#endif

/* other - drugo */
#ifdef __cplusplus
	#ifdef USE_SPECIAL_CHARACTERS
		#define POKUŠAJ try
	#else
		#define POKUSAJ try
	#endif

	#define UHVATI catch
#endif

#define AUTOMATSKI auto
#define VRATI return

#ifdef USE_NON_CAPITAL
	#ifdef __cplusplus
		#ifdef USE_SPECIAL_CHARACTERS
			#define pokušaj try
		#else
			#define pokusaj do
		#endif

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