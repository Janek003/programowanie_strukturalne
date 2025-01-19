#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int n = 0;
  float input = -1;
  float *times = NULL;
  while (n < 300)
  {
    printf("wpisz 0, zeby zakonczyc wprowadzanie\nczas zawodnika %d: ", n);
    scanf(" %f", &input);
    if (input == 0)
      break;
    n++;
    times = realloc(times, n * sizeof(float));
    times[n - 1] = input;
  }

  if (n == 0)
  {
    printf("nie wprowadzono zadnego czasu");
    return -1;
  }

  float min = times[0];
  int indeks_min = 0;

  for (int i = 0; i < n; i++)
  {
    if (times[i] < min)
    {
      min = times[i];
      indeks_min = i;
    }
  }

  printf("\nnajszybszy czas:\nzawodnik | #%d\tczas | %fs", indeks_min, min);

  return 0;
}