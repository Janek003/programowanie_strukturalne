#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void wczytaj(float *tab, int n, int k){
  for (int row = 0; row < n; row++){
    for(int col = 0; col < k; col++){
      printf("podaj ocene studenta nr.%d z grupy nr.%d: ", col, row);
      scanf(" %f", &tab[row * k + col]);
    }
    printf("\n");
  }
}

void wypisz(float *tab, int n, int k){
  for (int row = 0; row < n; row++){
    for(int col = 0; col < k; col++){
      printf("%.2f\t", tab[row * k + col]);
    }
    printf("\n");
  }
}

void srednia(float* tab, int n, int k){
  float suma = 0;
  for (int nr_grupy = 0; nr_grupy < n; nr_grupy++){
    suma = 0;
    for (int kol = 0; kol < k; kol++){
      suma += tab[nr_grupy * k + kol];
    }
    printf("srednia grupy %d: %.2f\n", nr_grupy, suma / k);
  }
  printf("\n");

}

void srednia_wszystkich(float* tab, int n, int k){
  float suma = 0;
  for (int row = 0; row < n; row++){
    for (int kol = 0; kol < k; kol++){
      suma += tab[row * k + kol];
    }
  }
  printf("srednia wszystkich: %.2f\n\n", suma / (n * k) );

}

void najwieksza(float* tab, int n, int k){
  float max = tab[0];
  for (int row = 0; row < n; row++){
    for (int col = 0; col < k; col++){
      if (tab[row * k + col] > max) max = tab[row * k + col];
    }
  }
  printf("max: %.2f\n", max);
}

int main(void) {
  int n, k;
  printf("ile zespolow: ");
  scanf(" %d", &n);

  printf("ile studentow na zespol:  ");
  scanf(" %d", &k);

  float tab[n*k];
  wczytaj(tab, n, k);
  wypisz(tab, n, k);
  printf("\n");

  srednia(tab, n, k);
  srednia_wszystkich(tab, n, k);
  najwieksza(tab, n, k);

  return 0;
}
