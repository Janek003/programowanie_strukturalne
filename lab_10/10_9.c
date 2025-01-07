#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void wczytaj(float *tab, int n, int k){
  for (int row = 0; row < n; row++){
    for(int col = 0; col < k; col++){
      printf("podaj wartosc tab[%d][%d]: ", row, col);
      scanf(" %f", &tab[row * k + col]);
    }
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

void f1(float *tab, int n, int k){
  float D[n*k];
  int licznik = 0;
  for (int row = 0; row < n; row++){
    for (int col = 0; col < k; col++){
      if (tab[row * k + col] > 0){
        D[licznik] = tab[row * k + col];
        licznik++;
      }
    }
  }
  printf("\n");
  wypisz(D, 1, licznik);

}

void f2(float *tab, int n, int k){
  float U[n*k];
  int licznik = 0;
  for (int row = 0; row < n; row++){
    for (int col = 0; col < k; col++){
      if (tab[row * k + col] < 0){
        U[licznik] = tab[row * k + col];
        licznik++;
      }
    }
  }
  printf("\n");
  wypisz(U, 1, licznik);
}

int f3(float *tab, int n, int k, int sprawdzana){
  int licznik = 0;
  for (int row = 0; row < n; row++){
      if (tab[row * k + sprawdzana] == 0) licznik++;
    }
  //printf("\n%d",licznik);
  return licznik;
}

void f5(float* tab, int n, int k, int zmieniana){
  for (int row = 0; row < n; row++){
    tab[row * k + zmieniana] = 0;
  }
}

void f4(float* tab, int n, int k){
  int B[k], zmienione = 0;
  for (int kol = 0; kol < k; kol++){
    if (f3(tab, n, k, kol) > (int)(n / 2)){
      f5(tab, n, k, kol);
      B[zmienione] = kol;
      zmienione++;
    }
  }
  wypisz(tab, n, k);
  printf("\nzmienione kolumny: ");
  for (int i = 0; i < zmienione; i++) printf("%d ", B[i]);
}

int main(void) {
  int n, k;
  printf("ile wierszy: ");
  scanf(" %d", &n);

  printf("ile kolumn:  ");
  scanf(" %d", &k);

  float tab[n*k];
  wczytaj(tab, n, k);
  wypisz(tab, n, k);
  printf("\n");

  f4(tab, n, k);

  return 0;
}
