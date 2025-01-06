#include <stdio.h>
#include <math.h>

void wczytaj(float *tab, int n){
  for (int row = 0; row < n; row++){
    for(int col = 0; col < n; col++){
      printf("podaj wartosc tab[%d][%d]: ", row, col);
      scanf(" %f", &tab[row * n + col]);
    }
  }
}

void wypisz(float *tab, int n){
  for (int row = 0; row < n; row++){
    for(int col = 0; col < n; col++){
      printf("%.2f\t", tab[row * n + col]);
    }
    printf("\n");
  }
}

void iloczyn(float *tab, int n){
  float iloczyn = 1;
  for (int row = 0; row < n; row++){
    for (int col = 0; col < n; col++){
      if (col == row) iloczyn *= tab[row * n + col];
      // tutaj n jest jednoczesnie dlugoscia kazdego wiersza (iloscia kolumn)
    }
  }
  printf("iloczyn na glownej przekatnej: %.2f\n", iloczyn);
}

void suma(float *tab, int n){
  float suma = 0;
  for (int row = 0; row < n; row++){
    for (int col = 0; col < n; col++){
      if (col > row) suma += tab[row * n + col];
    }
  }
  printf("suma nad glowna przekatna: %.2f\n", suma);
}

int main(void) {
  int n;
  printf("n: ");
  scanf(" %d", &n);
  float tab[n*n];

  wczytaj(tab, n);
  wypisz(tab, n);
  iloczyn(tab, n);
  suma(tab, n);

  return 0;
}
