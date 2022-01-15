/* 
	Library which translate C++ keywords to Croatian
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

/* Variable integers */
#define BROJ int
#define DUPLO double
#define REALNI float
#define DUGO long
#define KRATKI short
#define ZNAK char
#define ZNAKOVNI_NIZ string /*
							if you have problem, include 
							string library or try use std::ZNAKOVNI_NIZ
							*/

/* enums, structs, classes */
#define ENUM enum
#define SLOG struct
#define KLASA class

#define JAVNO public
#define ZASTICENO protected
#define PRIVATNO private

/* printing and user input function */

#define PRINTAJ1 cout // #include <iostream>
#define PRINTAJ2 printf // #include <stdio.h>

#define UNESI1 cin // #include <iostream>
#define UNESI2 scanf // #include <stdio.h>