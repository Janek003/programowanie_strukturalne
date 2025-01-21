#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define N 2
#define WSPOLZEDNE 2

void show2d(int A[][WSPOLZEDNE])
{
  for (int i = 0; i < N; i++)
  {
    printf("punkt%d\t", i);
    for (int j = 0; j < WSPOLZEDNE; j++)
    {
      printf("%d\t", A[i][j]);
    }
    printf("\n");
  }
}

float odleglosc(int wspolzedne[WSPOLZEDNE])
{
  int suma = 0;
  for (int i = 0; i < WSPOLZEDNE; i++)suma += pow(wspolzedne[i], 2);
  float potega = 1.0 / WSPOLZEDNE;
  return pow(suma, potega);
}

float *listaOdleglosci(int punkty[][WSPOLZEDNE]){
  float *odleglosci = malloc(N * sizeof(float));
  for (int i = 0; i < N; i++){
    odleglosci[i] = odleglosc(punkty[i]);
  }
  return odleglosci;
}

int main()
{
  int punkty[N][WSPOLZEDNE];
  for (int i = 0; i < N; i++)
  {
    printf("---punkt %d---\n", i);
    for (int j = 0; j < WSPOLZEDNE; j++)
    {
      printf("wsp. %d: ", j);
      scanf(" %d", &punkty[i][j]);
    }
    printf("\n");
  }

  show2d(punkty);

  float *ar_odleglosci = listaOdleglosci(punkty);
  printf("odlegosci: ");
  for (int i = 0; i < N; i++){
    printf("%.2f ", ar_odleglosci[i]);
  } 

  return 0;
}