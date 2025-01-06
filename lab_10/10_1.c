#include <stdio.h>
#include <math.h>

void wczytaj(int* tab1, int* tab2, int n, int ktory){
  if(ktory == 1){
    for(int i = 0; i < 5; i++){
      printf("wartosc_%d: ", i);
      scanf(" %d", tab1+i);
    }
  }

  if(ktory == 2){
    for (int i = 0; i < n; i++){
      printf("wartosc_%d: ", i);
      scanf(" %d", tab2+i);
    }
  }
}

void wyswietl(int* tab1, int* tab2, int n, int ktory){
  if(ktory == 1){
    for(int i = 0; i < 5; i++){
      printf("%d ", tab1[i]);
    }
  }

  if(ktory == 2){
    for (int i = 0; i < n; i++){
      printf("%d ", tab2[i]);
    }
  }
  printf("\n");
}


void max(){
}

void ileRazy(){
}

int main(void) {
  int const N = 5;
  int n = 1, choice, ktory;

  printf(" ilo elementowa tab2: "); // jesli nie robimy dynamicznej alokacji to
                                    // zmiana n, powoduje zjadanie nastepnego elementu w pamieci,
                                    // moze ujsc na sucho moze nie wiec nie zmieniamy n, i ustalamy go przed deklaracja
  scanf(" %d", &n);

  int tab1[N], tab2[n];

  while (1){
    printf("0\texit\n1\twczytaj\n2\twyswietl\n3\tmax\n4\tileRazy\nwybor: ");
    scanf(" %d", &choice);
    if (choice == 0)break;


    printf("dzialamy na zbiorze 1 czy 2: ");
    scanf(" %d", &ktory);

    if (choice == 1)wczytaj(tab1, tab2, n, ktory);
    if (choice == 2)wyswietl(tab1, tab2, n, ktory);
    if (choice == 3)max(tab1, tab2, n, ktory);
    if (choice == 4)ileRazy(tab1, tab2, n, ktory);
  }

  return 0;

}
