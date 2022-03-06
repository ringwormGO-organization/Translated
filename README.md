# Translated
Simple library which translate most of C++ keywords and function  to Croatian.

Jednostavna knjižnica koja prevodi većinu ključnih riječi i funkcija C++ riječi na hrvatski.

## Repo structure - Struktura repo-a
[Visual Studio 2019 example/primjer](https://github.com/ringwormGO-organization/Translated/tree/main/Translated-VS)

[G++ Windows and Linux example | G++ Windows i Linux primjer](https://github.com/ringwormGO-organization/Translated/tree/main/Translated-Win-Linux)

## Use in C programming language - Korištenje u programskom jeziku C
Rename `Translated.hpp` into `Translated.h`, you may need to remove classes.

Preimenujte `Translated.hpp` u `Translated.h`, možda ćete morati ukloniti klase

## Checklist - Lista
- [x] Translate most of keywords - Preimenovati većinu ključnih riječi
- [x] C support - Podrška za C programski jezik

**Preprocessor commands are not translated!!** | **Pretprocesorske naredbe nisu prevedene!!**

## Pull Requests and issues - Pull Requestovi i problemi
We accept Pull Request.

Prihvaćamo Pull Requestove.

__________________________________________________________________________

If you have issue about this library, create issue.

Ako imate problem s ovom knjižnicom, napravite problem, isue.

## Use of this library - Korištenje ove knjižnice

[Download](https://github.com/ringwormGO-organization/Translated/releases/tag/v2.0.0) `Translate.hpp`, unzip it, copy inside your work directory and include it by `#include "Translated.hpp"`

[Skinite](https://github.com/ringwormGO-organization/Translated/releases/tag/v2.0.0) `Translate.hpp`, raspakirajte, kopirajte unutar radne mape i unesite je u projekt pomoću `#include "Translate.hpp`

-------------------------------------

For now here is only capital letters. You can change it by yourself.

Za sada su ovdje samo velika slova. Možete to promijeniti sami.

## Translated stuff - Prevođene stvari
If you want include header files in Translated.hpp or use non-capital translation, enable or disable settings. | Ako želite unijeti header datoteke ili koristi prijevod koji ne koristi velika slova za prijevod, provjerite postavke.

### Settings
1. `INCLUDE_HEADER_FILES` unesi header datoteke
2. `USE_NON_CAPITAL` koristi prijevod koji ne koristi velika slova
### Start of program - Početak programa
1. `POCETAK_PROGRAMA` int main() {
2. `POCETAK_PROGRAMA_ARGUMENTI` int main(int argc, char **argv) {
3. `KRAJ_PROGRAMA` return 0; }

### void function - void funcija
1. `FUNKCIJA` void *```//function don't return any type```*

### Variables - Varijable
1. `BROJ` integer
2. `DUPLO` double
3. `REALNI` float
4. `KRATKI` short
5. `ZNAK` char
6. `ZNAKOVNI_NIZ1` const char*
7. `ZNAKOVNI_NIZ2` string *if don't work, include string library or try `std::ZNAKOVNI_NIZ`*
8. 
9. `TOCNO_NETOCNO` bool
10. 
11. `TIP_DEFINICIJE` typedef
12. `STALNA` const

### Enums, structs, classes, namespaces - Enumi, struct-ovi, klase, imena područja
1. `ENUM` enum
2. `SLOG` struct
3. `union` unija
4. `KLASA` class
5. 
6. `IMENO_PODRUCJE` namespace
7. `KORISTI` using
8. 
9. `JAVNO` public
10. `ZASTICENO` protected
11. `PRIVATNO` private
12. 
13. `VIRTUALNO` virtual

### std::map
1. `MAPA` std::map

### if, else, switch - ako, inače, switch
1. `AKO` if
2. `AKO2` else if
3. `INACE` else
4. 
5. `SKLOPKA` switch
6. `SLUCAJ` case

### Loops - Petlje
1. `UCINI_DOK` do
2. `DOK` while
3. `ZA` for
4. 
5. `NASTAVI` continue
6. `PREKINI` break

### Other - Ostalo
1. `AUTOMATSKI` auto
2. `UHVATI` catch
3. `VRATI` return

### Printing and user input - Ispis teksta i korisnički unos
1. `PRINTAJ1` cout *`include <iostream>`*
2. `PRINTAJ2` printf *`include <stdio.h>`*
3. 
4. `UNESI1` cin *`include <iostream>`*
5. `UNESI2` scanf *`include <stdio.h>`*

### Functions - Funkcije
1. `SUSTAV` system
2. `C_ZNAKOVNI_NIZ` c_str

### Memory - Memorija
1. `NOVO` new
2. `IZBRISI` delete
3. `ALOCIRAJ` malloc
4. `PONOVO_ALOCIRAJ` realloc
5. `OSLOBODI` free
