#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void wczytaj(float *tab, int n, int k){
  for (int row = 0; row < n; row++){
    for(int col = 0; col < k; col++){
      printf("podaj wartosc tab[%d][%d]: ", row, col);
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

int czy_symetryczna(float *tab, int n, int k) //dla nieparzystych ilosci kolumn
{
  int kol_srodkowa = k / 2;
  for (int row = 0; row < n; row++){
    for (int i = 1; i <= k / 2; i++){
      if ( tab[row * k + kol_srodkowa + i] != tab[row * k + kol_srodkowa - i] ) return 0;
    }
  }
  return 1;

}

int czy_brzegowe(float *tab, int n, int k){
  for (int row = 0; row < n; row++){
    if ( tab[row * k] != tab[row * k + k - 1] ) return 0;
  }
  return 1;
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

  if (k % 2 == 1) printf("czy sym?: %d", czy_symetryczna(tab, n, k));
  else printf("czy brzegowe rowne?: %d", czy_brzegowe(tab, n, k));

  return 0;
}
