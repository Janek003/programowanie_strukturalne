#include <stdlib.h>
#include <stdio.h>

float *sumaW(int n, int m, float (*tab)[m], float *sumaK)
{
  float *curr_sumaW = malloc(sizeof(float) * n);
  for (int i = 0; i < n; i++)
  {
    curr_sumaW[i] = 0;
    for (int j = 0; j < m; j++)
    {
      curr_sumaW[i] += tab[i][j];
    }
  }

  for (int i = 0; i < m; i++)
  {
    sumaK[i] = 0;
    for (int j = 0; j < n; j++)
    {
      sumaK[i] += tab[j][i];
    }
  }
  return curr_sumaW;
}

int main()
{
  int n, m;
  printf("n = ");
  scanf(" %d", &n);

  printf("m = ");
  scanf(" %d", &m);

  float tab[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      tab[i][j] = j + i;
      printf("%.2f ", tab[i][j]);
    }
    printf("\n");
  }

  float sumaK[m];
  float *tab_sumaW = sumaW(n, m, tab, sumaK);

  printf("suma wierszy: ");
  for (int i = 0; i < n; i++)
    printf("%.2f ", tab_sumaW[i]);

  printf("\nsuma kolumn: ");
  for (int i = 0; i < m; i++)
    printf("%.2f ", sumaK[i]);

  free(tab_sumaW);

  return 0;
}