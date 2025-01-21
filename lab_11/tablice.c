#include <stdlib.h>
#include <stdio.h>
#include "tablice.h"

void wczytaj_tablice1D(int* tab, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        printf("Podaj element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }
}

void wyswietl_tablice1D(const int* tab, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int suma1D(const int* tab, int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += tab[i];
    }
    return suma;
}

double srednia1D(const int* tab, int rozmiar) {
    return (double)suma1D(tab, rozmiar) / rozmiar;
}

int znajdz_min1D(const int* tab, int rozmiar) {
    int min = tab[0];
    for (int i = 1; i < rozmiar; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }
    return min;
}

int znajdz_max1D(const int* tab, int rozmiar) {
    int max = tab[0];
    for (int i = 1; i < rozmiar; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    return max;
}

int zlicz_wartosci1D(const int* tab, int rozmiar, int wartosc) {
    int licznik = 0;
    for (int i = 0; i < rozmiar; i++) {
        if (tab[i] == wartosc) {
            licznik++;
        }
    }
    return licznik;
}

void operacja_na_elementach1D(int* tab, int rozmiar, int (*operacja)(int)) {
    for (int i = 0; i < rozmiar; i++) {
        tab[i] = operacja(tab[i]);
    }
}

void wczytaj_tablice2D(int** tab, int wiersze, int kolumny) {
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            printf("Podaj element [%d][%d]: ", i, j);
            scanf("%d", &tab[i][j]);
        }
    }
}

void wyswietl_tablice2D(int** tab, int wiersze, int kolumny) {
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
}

int suma2D(int** tab, int wiersze, int kolumny) {
    int suma = 0;
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            suma += tab[i][j];
        }
    }
    return suma;
}

double srednia2D(int** tab, int wiersze, int kolumny) {
    return (double)suma2D(tab, wiersze, kolumny) / (wiersze * kolumny);
}

int znajdz_min2D(int** tab, int wiersze, int kolumny) {
    int min = tab[0][0];
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            if (tab[i][j] < min) {
                min = tab[i][j];
            }
        }
    }
    return min;
}

int znajdz_max2D(int** tab, int wiersze, int kolumny) {
    int max = tab[0][0];
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            if (tab[i][j] > max) {
                max = tab[i][j];
            }
        }
    }
    return max;
}

int zlicz_wartosci2D(int** tab, int wiersze, int kolumny, int wartosc) {
    int licznik = 0;
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            if (tab[i][j] == wartosc) {
                licznik++;
            }
        }
    }
    return licznik;
}

void operacja_na_elementach2D(int** tab, int wiersze, int kolumny, int (*operacja)(int)) {
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            tab[i][j] = operacja(tab[i][j]);
        }
    }
}