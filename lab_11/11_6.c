#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show1d(float *A, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%.2f ", A[i]);
  }
  printf("\n");
}

void show2d(int n, int m, float (*A)[m])
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      printf("%.2f\t", A[i][j]);
    }
    printf("\n");
  }
}

void losujTablice(int n, int m, float (*tab2)[m])
{
  srand(time(NULL));

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      tab2[i][j] = rand() % 200 - 100;
    }
  }
}

void f1(int n, int m, float (*tab2)[m])
{
  int length = 0;
  float *tabD = NULL;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (tab2[i][j] > 0)
      {
        length++;
        tabD = realloc(tabD, sizeof(float) * length);
        tabD[length - 1] = tab2[i][j];
      }
    }
  }
  printf("\ndodatnie:\n");
  show1d(tabD, length);
  free(tabD);
}

void f2(int n, int m, float (*tab2)[m])
{
  int length = 0;
  float *tabU = NULL;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (tab2[i][j] < 0)
      {
        length++;
        tabU = realloc(tabU, sizeof(float) * length);
        tabU[length - 1] = tab2[i][j];
      }
    }
  }
  printf("\nujemne:\n");
  show1d(tabU, length);
  free(tabU);
}

int main()
{
  int n = 3, m = 4;
  float tab2[n][m];
  losujTablice(n, m, tab2);

  show2d(n, m, tab2);

  f1(n, m, tab2);
  f2(n, m, tab2);

  return 0;
}