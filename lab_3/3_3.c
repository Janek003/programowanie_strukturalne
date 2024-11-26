#include <stdio.h>
#include <stdlib.h>
#define STATUS "student"
int main()
{
    const float SREDNIA = 4.01;
    char imie[20], nazwisko[20], plec[15];
    int wiek;

    printf("wprowadz imie nazwisko wiek plec, podzielone spacja:\n");
    scanf("%19s %19s %i %14s", imie, nazwisko, &wiek, plec);

    printf("imie: %s, nazwisko: %s, wiek: %i, plec: %s\n", imie, nazwisko, wiek, plec);
    printf("%s %.2f", STATUS, SREDNIA);

    return 0;
}
