#include <stdio.h>
#include <math.h>

//uzywamy splaszczonej 2-wymiarowej tablicy do 1-wymiaru, notacja tablicowa

void wczytaj(float *tab, int n, int m){
  for (int row = 0; row < n; row++){
    for(int col = 0; col < m; col++){
      printf("podaj wartosc tab[%d][%d]: ", row, col);
      scanf(" %f", &tab[row * m + col]);
    }
  }
}

void wypisz(float *tab, int n, int m){
  for (int row = 0; row < n; row++){
    for(int col = 0; col < m; col++){
      printf("%.2f\t", tab[row * m + col]);
    }
    printf("\n");
  }
}

void suma_srednia(float *tab, int n, int m){
  float suma=0;
  for (int i = 0; i < n*m; i++){
    suma+= tab[i];
  }
  printf("suma: %.2f\t srednia: %.2f\n", suma, suma / (n * m) );
}

int main(void) {
  int n, m;

  printf("ile wierszy: ");
  scanf(" %d", &n);

  printf("ile kolumn: ");
  scanf(" %d", &m);
  float tablica[n*m];
  int choice;
  while (1){
    printf("0\texit\n1\twczytaj\n2\twyswietl\n3\tsuma i srednia\nwybor: ");
    scanf(" %d", &choice);
    if (choice == 0)break;
    if (choice == 1)wczytaj(tablica, n, m);
    if (choice == 2)wypisz(tablica, n, m);
    if (choice == 3)suma_srednia(tablica, n, m);

  }


  return 0;

}
