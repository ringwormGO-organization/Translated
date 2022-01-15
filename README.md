# Translated
Simple library which translate C++ keywords to Croatian.

Jednostavna knjižnica koja prevodi ključne C++ riječi na hrvatski.

## Repo structure - Struktura repo-a
[Visual Studio 2019 example/primjer](https://github.com/ringwormGO-organization/Translated/tree/main/Translated)

[G++ Windows and Linux example | G++ Windows i Linux primjer](https://github.com/ringwormGO-organization/Translated/tree/main/Translated-Win-Linux)

[Classical C++ program | Klasični C++ program](https://github.com/ringwormGO-organization/Translated/blob/main/Translated/Translated/standard.txt)

## Use in C programming language - Korištenje u programskom jeziku C
Rename `Translated.hpp` into `Translated.h`, you may need to remove classes.

Preimenujte `Translated.hpp` u `Translated.h`, možda ćete morati ukloniti klase

## Checklist - Lista
- [ ] Translate most of keywords - Preimenovati većinu ključnih riječi
- [x] C support - Podrška za C programski jezik

**Preprocessor commands are not translated!!** | **Pretprocesorske naredbe nisu prevedene!!**

## Pull Requests and issues - Pull Requestovi i problemi
We accept Pull Request.

Prihvaćamo Pull Requestove.

__________________________________________________________________________

If you have issue about this library, create issue.

Ako imate problem s ovom knjižnicom, napravite problem, isue.

## Use of this library - Korištenje ove knjižnice

### Start of program - Početak programa
1. `POCETAK_PROGRAMA` int main() {
2. `POCETAK_PROGRAMA_ARGUMENTI` int main(int argc, char **argv) {
3. `KRAJ_PROGRAMA` return 0; }

### Variables - Varijable
1. `BROJ` integer
2. `DUPLO` double
3. `REALNI` float
4. `KRATKI` short
5. `ZNAK` char
6. `ZNAKOVNI_NIZ` string *if don't work, include string library or try `std::ZNAKOVNI_NIZ`*

### Enums, structs, classes - Enumi, struct-ovi i klase
1. `ENUM` enum
2. `SLOG` struct
3. `KLASA` class
4. 
5. `JAVNO` public
6. `ZASTICENO` protected
7. `PRIVATNO` private

### Printing and user input - Ispis teksta i korisnički unos
1. `PRINTAJ1` cout *`include <iostream>`*
2. `PRINTAJ2` printf *`include <stdio.h>`*
3. 
4. `UNESI1` cin *`include <iostream>`*
5. `UNESI2` scanf *`include <stdio.h>`*
