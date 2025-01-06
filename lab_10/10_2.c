#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int min(int* tablica, int a){
  int min = *tablica;
  for (int i = 0; i < a; i++){
    if (*(tablica+i) < min) min = *(tablica+i);
  }
  return min;
}

float srednia(int* tablica, int a){
  int suma = 0;
  for (int i =  0; i < a; i++) suma += *(tablica+i);

  return (suma / a);
}

void losuj(int* tablica, int a){
  srand(time(NULL));
  for (int i = 0; i < a; i++){
    *(tablica+i) = rand()%10;
  }
}

int ileRazy2(int* tablica, int a, int szukana){
  int ile = 0;

  for (int i = 0; i < a; i ++){
    if ( *(tablica+i) == szukana )ile++;
  }
  return ile;
}

void wyniki(int* tablica, int a, int szukana){
  printf("\n\n");
  for(int i = 0; i < a; i++){
    printf("%d ", *(tablica+i));
  }
  printf("\nmin: %d", min(tablica, a));
  printf("\navg: %.2f", srednia(tablica, a));
  printf("\nIle razy: %d", ileRazy2(tablica, a, szukana));
}

int main(void) {
  int n = 1, szukana;
  int tab3[4] = { 8 , 4 , 5 , 3 };
  int tab4[] = { 3 , 4 , 1 , 7 };

  printf("ile elementow: ");
  scanf(" %d", &n);
  int tab5[n];

  printf("szukana: ");
  scanf(" %d", &szukana);

  losuj(tab5, n);

  wyniki(tab3, 4, szukana);
  wyniki(tab4, 4, szukana);
  wyniki(tab5, n, szukana);

  return 0;

}
