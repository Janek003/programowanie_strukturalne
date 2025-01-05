#include <stdio.h>
#include <math.h>

int rozwiaz(float a1, float b1, float c1, float a2, float b2, float c2, float* x, float* y) {
  float w, wx, wy;
  w = (a1 * b2) - (a2 * b1);
  wx = (c1 * b2) - (c2 * b1);
  wy = (a1 * c2) - (a2 * c1);
  if (w == 0 && wx == 0 && wy == 0) return 0;
  if (w == 0 && (wx != 0 || wy != 0)) return -1;
  *x = wx / w;
  *y = wy / w;
  return 1;
}

int main(void) {
  int wynik;
  float x, y;
  float a1, b1, a2, b2, c1, c2;
  printf("a1 = ");
  scanf(" %f", &a1);

  printf("b1 = ");
  scanf(" %f", &b1);

  printf("c1 = ");
  scanf(" %f", &c1);

  printf("\na2 = ");
  scanf(" %f", &a2);

  printf("b2 = ");
  scanf(" %f", &b2);

  printf("c2 = ");
  scanf(" %f", &c2);

  wynik = rozwiaz(a1, b1, c1, a2, b2, c2, &x, &y);
  printf("zwrocona = %d", wynik);
  if (wynik != 1) return 0;

  printf("\nx = %f\ty = %f", x, y);



  return 0;
}
