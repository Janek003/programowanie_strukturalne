#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show1d(int *A, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", A[i]);
  }
}

void nowaTabDyn(int *tabS, int n, int low, int high)
{
  int *tab_dyn = NULL;
  int length = 0;
  for (int i = 0; i < n; i++)
  {
    if (tabS[i] < high && tabS[i] > low)
    {
      length++;
      tab_dyn = realloc(tab_dyn, length * sizeof(int));
      tab_dyn[length - 1] = tabS[i];
    }
  }
  show1d(tab_dyn, length);

  free(tab_dyn); // zwalniamy przestrzen w scope of responsibility

}

void losuj(int n)
{
  srand(time(NULL));

  int tabS[n];
  for (int i = 0; i < n; i++)
  {
    tabS[i] = (rand() % 100) + 1;
  }


  int low, high;
  printf("\nzakres dolny: ");
  scanf(" %d", &low);

  printf("zakres gorny: ");
  scanf(" %d", &high);

  nowaTabDyn(tabS, n, low, high);
}

int main()
{
  losuj(100);
  return 0;
}