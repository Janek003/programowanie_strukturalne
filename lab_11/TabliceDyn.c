#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "TabliceDyn.h"

void make1d()
{
  int n;
  printf("n: ");
  scanf(" %d", &n);

  float *A = malloc(sizeof(float) * n);
  for (int i = 0; i < n; i++)
  {
    printf("wartosc%d: ", i);
    scanf(" %f", A + i);
  }
  show1d(A, n);
}

void show1d(float *A, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%.2f ", A[i]);
  }
}

void make2d()
{
  int n, m;
  printf("wierszy: ");
  scanf(" %d", &n);

  printf("kolumn: ");
  scanf(" %d", &m);

  float **A = malloc(n * sizeof(float *));
  for (int i = 0; i < n; i++)
  {
    A[i] = malloc(m * sizeof(float *));
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      printf("wartosc[%d][%d]: ", i, j);
      scanf(" %f", A[i] + j);
    }
  }

  show2d(A, n, m);
  
  for (int i = 0; i < n; i++)
    free(A[i]);
  free(A);
}

void show2d(float **A, int n, int m)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      printf("%.2f ", A[i][j]);
    }
    printf("\n");
  }
}
