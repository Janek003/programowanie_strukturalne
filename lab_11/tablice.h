#ifndef TABLICE_H
#define TABLICE_H

#include <stdio.h>
#include <stdlib.h>

void wczytaj_tablice1D(int* tab, int rozmiar);
void wyswietl_tablice1D(const int* tab, int rozmiar);
int suma1D(const int* tab, int rozmiar);
double srednia1D(const int* tab, int rozmiar);
int znajdz_min1D(const int* tab, int rozmiar);
int znajdz_max1D(const int* tab, int rozmiar);
int zlicz_wartosci1D(const int* tab, int rozmiar, int wartosc);
void operacja_na_elementach1D(int* tab, int rozmiar, int (*operacja)(int));

void wczytaj_tablice2D(int** tab, int wiersze, int kolumny);
void wyswietl_tablice2D(int** tab, int wiersze, int kolumny);
int suma2D(int** tab, int wiersze, int kolumny);
double srednia2D(int** tab, int wiersze, int kolumny);
int znajdz_min2D(int** tab, int wiersze, int kolumny);
int znajdz_max2D(int** tab, int wiersze, int kolumny);
int zlicz_wartosci2D(int** tab, int wiersze, int kolumny, int wartosc);
void operacja_na_elementach2D(int** tab, int wiersze, int kolumny, int (*operacja)(int));

#endif
