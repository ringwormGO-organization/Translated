/* 
	Library which translate most of C++ keywords and some functions to Croatian
*/

#pragma once

#define MAJOR 1
#define MINOR 0
#define PATCH 0
#define VERSION "v" MAJOR "." MINOR "." PATCH

/* ---------------         --------------- */

/* main function */
#define POCETAK_PROGRAMA int main() {
#define POCETAK_PROGRAMA_ARGUMENTI int main(int argc, char **argv) {
#define KRAJ_PROGRAMA return 0; }

/* void function */
#define FUNKCIJA void // function don't return any type

/* Variable integers */
#define BROJ int
#define DUPLO double
#define REALNI float
#define DUGO long
#define KRATKI short
#define ZNAK char
#define ZNAKOVNI_NIZ1 const char*
#define ZNAKOVNI_NIZ2 string /*
							if you have problem, include 
							string library or try use std::ZNAKOVNI_NIZ
							*/
#define TOCNO_NETOCNO bool

#define TIP_DEFINICIJE typedef
#define STALNA const

/* enums, structs, classes, namespaces */
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

/* if, else, switch */
#define AKO if
#define AKO2 else if
#define INACE else

#define SKLOPKA switch
#define SLUCAJ case

/* Loops */
#define UCINI_DOK do
#define DOK while
#define ZA for

#define NASTAVI continue
#define PREKINI break

/* other */
#define AUTOMATSKI auto
#define UHVATI catch

/* printing and user input function */
#define PRINTAJ1 cout // #include <iostream>
#define PRINTAJ2 printf // #include <stdio.h>

#define ZAVRSI_LINIJU endl; // #include <iostream>

#define UNESI1 cin // #include <iostream>
#define UNESI2 scanf // #include <stdio.h>

/* functions */
#define SUSTAV system

/* memory */
#define NOVO new
#define IZBRISI delete
#define ALOCIRAJ malloc
#define PONOVO_ALOCIRAJ realloc
#define OSLOBODI free