#include <stdio.h>
#include <math.h>

#define FALSE 0
#define TRUE !(FALSE)

int wszyscy_zdali(float *tab, int size){
  for (int i = 0; i < size; i++){
    if (tab[i] < 3) return FALSE;
  }
  return TRUE;
}

int main(void) {
  int n = 5;
  float oceny1[] = {3, 4, 5, 3, 4};
  float oceny2[] = {3, 2, 5, 4, 3};

  if (wszyscy_zdali(oceny1, n)) printf("wszyscy zdali");
  else printf("ktos nie zdal");

  if (wszyscy_zdali(oceny2, n)) printf("\nwszyscy zdali");
  else printf("\nktos nie zdal");

  return 0;
}
