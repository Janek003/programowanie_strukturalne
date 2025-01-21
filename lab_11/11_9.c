#include <stdlib.h>
#include <stdio.h>
#define COLS 2

void show2d(float **A, int n, int m)
{
  printf("\ncena\tilosc\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      printf("%.2f\t", A[i][j]);
    }
    printf("\n");
  }
}

float **makeTab(int *rows)
{
  *rows = 0;

  float **towary = NULL;

  while (1)
  {
    float *curr_towary = calloc(COLS, sizeof(float));
    printf("produkt nr.%d, wprowadz -1 aby zakonczyc wprowadzanie\n", *rows);

    printf("cena: ");
    scanf(" %f", &curr_towary[0]);
    if (curr_towary[0] == -1)
      break;

    printf("ilosc: ");
    scanf(" %f", &curr_towary[1]);

    *rows += 1;
    towary = realloc(towary, *rows * sizeof(float *));
    towary[*rows - 1] = curr_towary;
  }
  return towary;
}

float **makeNewTab(float podana, float **tab, int *new_rows, int rows)
{
  float **new_tab = NULL;
  for (int i = 0; i < rows; i++)
  {
    if (tab[i][0] > podana)
    {
      *new_rows += 1;
      new_tab = realloc(new_tab, *new_rows * sizeof(float *));//wpisanie zamiast new_tab NULL kosztowalo mnie 10 miesiecy zycia
      new_tab[*new_rows - 1] = tab[i];
    }
  }
  return new_tab;
}

int main()
{
  int rows = 0;
  float **tab = makeTab(&rows);

  show2d(tab, rows, COLS);
  float podana;

  printf("podaj cyfre powyzej ktorych zwroci: ");
  scanf(" %f", &podana);

  int new_rows = 0;
  float **new_tab = makeNewTab(podana, tab, &new_rows, rows);
  show2d(new_tab, new_rows, COLS);

  free(new_tab);

  for (int i = 0; i < rows; i++)
    free(tab[i]);
  free(tab);

  return 0;
}