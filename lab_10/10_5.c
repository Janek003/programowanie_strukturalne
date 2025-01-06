#include <stdio.h>
#include <math.h>

void copy_1_2(int *tab1, int *tab2, int n){
  printf("tablica 2: ");
  for (int i = 0; i < n; i++) {
    tab2[i] = tab1[i];
    printf("%d ", tab2[i]);
  }
}
void copy_1_3(int *tab1, int *tab3, int n){
  printf("\ntablica 3: ");
  for (int i = 0; i < n; i++) {
    *(tab3+i) = *(tab1+i);
    printf("%d ", *(tab3+i));
  }
}

int main(void) {
  int tab1[3] = { 5 , 6 , 7 };
  int tab2[3], tab3[3];

  copy_1_2(tab1, tab2, 3);
  copy_1_3(tab1, tab3, 3);

  return 0;
}
