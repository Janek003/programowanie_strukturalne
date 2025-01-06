#include <stdio.h>
#include <math.h>

const int N = 7;

void copy_from_to(float *tab1, float *tab2){
  printf("tablica 2: ");
  for (int i = 0; i < N; i++) {
    tab2[i] = tab1[i];
  }
}

void tab_print(float *tab){
  for (int i = 0; i < N; i++) printf("%.2f ", tab[i]);
  printf("\n\n");
}

int user_input(){
  int choice;
  printf("0\texit\n1\tzmiana_miejscami\n2\todwroc\n3\tszesciany_kwadraty\nwybor: ");
  scanf(" %d", &choice);
  return choice;

}

float f_min(float* tablica){
  float min = tablica[0];
  for (int i = 0; i < N; i++){
    if (tablica[i] < min) min = tablica[i];
  }
  return min;
}

float f_max(float* tablica){
  float max = tablica[0];
  for (int i = 0; i < N; i++){
    if (tablica[i] > max) max = tablica[i];
  }
  return max;
}


void zamiana(float *tab){
  float val_max, val_min;
  val_max = f_max(tab);
  val_min = f_min(tab);

  for (int i = 0; i < N; i++){
    if (tab[i] == val_min) {tab[i] = val_max; continue;}
    if (tab[i] == val_max) tab[i] = val_min;
  }
  tab_print(tab);
}

void odwroc(float *tab){
  float tab_copy[N];
  copy_from_to(tab, tab_copy);
  for (int i = 0; i < N; i++) tab[i] = tab_copy[N - i - 1];
  tab_print(tab);

}

void szesciany_kwadraty(float *tab){
  float squared[N], cubed[N];
  for (int i = 0; i < N; i++){
    squared[i] = tab[i] * tab[i];
    cubed[i] = squared[i] * tab[i];
  }
  tab_print(squared);
  tab_print(cubed);


}

int main(void) {
  int choice;
  float tab[7] = {3.5, 5, 6, 18, 19, -12, 12.4};

  tab_print(tab);

  while (1){
    choice = user_input();
    if (choice == 0) break;
    if (choice == 1)zamiana(tab);
    if (choice == 2)odwroc(tab);
    if (choice == 3)szesciany_kwadraty(tab);

  }


  return 0;
}
