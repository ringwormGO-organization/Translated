# Translated
Simple library which translate most of C++ keywords and function  to Croatian.

Jednostavna knjižnica koja prevodi većinu ključnih riječi i funkcija C++ riječi na hrvatski.

## Repo structure - Struktura repo-a
[Example/Primjer](https://github.com/ringwormGO-organization/Translated/tree/main/Example)

[Library/Knjižnica](https://github.com/ringwormGO-organization/Translated/tree/main/Library)

If you want Visual Studio example, see previous releases.

Ako želite primjer za Visual Studio, pogledajte prethodne izlaske.

## Use in C programming language - Korištenje u programskom jeziku C
Rename `Translated.hpp` into `Translated.h`.

Preimenujte `Translated.hpp` u `Translated.h`.

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

For now here is only capital letters. You can change it by yourself. Also you need support UTF-8 encoding.

Za sada su ovdje samo velika slova. Možete to promijeniti sami. Također trebate podržavati UTF-8 "encoding".

## Translated stuff - Prevođene stvari
If you want include header files in Translated.hpp or use non-capital translation, enable or disable settings.

Ako želite unijeti header datoteke ili koristi prijevod koji ne koristi velika slova za prijevod, provjerite postavke.

### Settings
1. `INCLUDE_HEADER_FILES` unesi header datoteke
2. `USE_NON_CAPITAL` koristi prijevod koji ne koristi velika slova
3. `USE_SPECIAL_CHARACTERS` upotrebljava specijalna hrvatska slova: š, đ, č, ć i ž
### Start of program - Početak programa
1. `POCETAK_PROGRAMA` int main() {
2. `POCETAK_PROGRAMA_ARGUMENTI` int main(int argc, char **argv) {
3. `KRAJ_PROGRAMA` return 0; }

### void function - void funcija
1. `FUNKCIJA` void *```//function don't return any type```*

### Variables - Varijable
1. `CIJELI` integer
2. `DUPLO` double
3. `REALNI` float
4. `KRATKI` short
5. `ZNAK` char
6. `ZNAKOVNI_NIZ` string *if don't work, include string library or try `std::ZNAKOVNI_NIZ`*
7. 
8. `TOCNO_NETOCNO` bool
9. 
10. `TIP_DEFINICIJE` typedef
11. `STALNA` const
12. `STATICNO` static
13. `VELICINA` sizeof
14. `STALAN_IZRAZ` constexpr

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

### if, else, switch - ako, inače, switch
1. `AKO` if
2. `INACE` else
3. 
4. `SKLOPKA` switch
5. `SLUCAJ` case

### Loops - Petlje
1. `UCINI_DOK` do
2. `DOK` while
3. `ZA` for
4. 
5. `NASTAVI` continue
6. `PREKINI` break

### Printing and user input - Ispis teksta i korisnički unos
1. `CPP_PRINTAJ` cout *`include <iostream>`*
2. `C_PRINTAJ` printf *`include <stdio.h>`*
3. 
4. `CPP_UNESI` cin *`include <iostream>`*
5. `C_UNESI` scanf *`include <stdio.h>`*

### Memory - Memorija
1. `NOVO` new
2. `IZBRISI` delete
3. `ALOCIRAJ` malloc
4. `PONOVO_ALOCIRAJ` realloc
5. `OSLOBODI` free

### std::
1. `MAPA` std::map
2. `VEKTOR` std::vector
3. `STD_FUNKCIJA` std::function
4. 
5. `KOD` at
6. `POCETAK` begin
7. `C_POCETAK` cbegin
8. `C_KRAJ` cend
9. `OCISTI` clear
10. `BROJI` count
11. `CR_POCETAK` crbegin
12. `CR_KRAJ` crend
13. `POLOZI` emplace
14. `POLOZI_SAVJET` emplace_hint
15. `PRAZNO` empty
16. `KRAJ` end
17. `JEDNAKI_RASPON` equal_range
18. `STD_VELICINA` size
19. `MAX_VELICINA` max_size
20. `UNESI` insert
21. `UNESI_DODIJELI` insert_or_assign
22. `POKUSAJ_POLOZITI` try_emplace
23. `IZVADI` extract
24. `SJEDINI` merge
25. `SADRZI` contains
26. `STD_IZBRISI` erase
27. `ZAMIJENI` swap
28. `PRONADJI` find
29. `DONJA_GRANICA` lower_bound
30. `GORNJA_GRANICA` upper_bound
31. `KLJUC_COMB` key_comb
32. `VRIJEDNOST_COMB` value_comb

### Other - Ostalo
1. `POKUSAJ` try
2. `UHVATI` catch
3. `AUTOMATSKI` auto
4. `VRATI` return

### Functions - Funkcije
1. `SUSTAV` system
2. `C_ZNAKOVNI_NIZ` c_str
3. `STR_KOPIRAJ` strcpy
4. `STR_USPOREDI` strcmp
5. `STR_DULJINA` strlen

### C++ 20
1. `UVEZI` import
2. `IZVEZI` export
3. `MODUL` module
