#include <stdio.h>
#include <math.h>

void funkcja(float x, float y, float* odleglosc, int* cwiartka){
  *odleglosc = sqrt( (x*x)  +  (y*y) );
  if (x==0||y==0){
    printf("punkt lezy na jednej z osi wspolzednych, nie mozna wyznaczyc dla tych punktow cwiertki");
    return;
  }
  if (y>0){
    if (x>0)*cwiartka = 1;
    else *cwiartka = 2;
  }
  if (y<0){
    if (x>0) *cwiartka = 4;
    else *cwiartka = 3;
  }

}

int main(void) {
  float x, y, odleglosc;
  int cwiartka;

  printf("x: ");
  scanf(" %f", &x);

  printf("y: ");
  scanf(" %f", &y);

  funkcja(x, y, &odleglosc, &cwiartka);
  printf("\nodleglosc: %.2f", odleglosc);
  printf("\ncwiartka: %d\n", cwiartka);

}
