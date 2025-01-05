#include <stdio.h>
#include <math.h>

void oblicz(float cena, int ilosc_sztuk, float* k_zamowienia){
  *k_zamowienia = ilosc_sztuk * cena;
  return;
}

int main(void) {
  int ilosc_sztuk;
  float c_hurtowa, c_faktyczna, k_zamowienia;

  printf("cena hurtowa: ");
  scanf(" %f", &c_hurtowa);

  printf("ilosc sztuk: ");
  scanf(" %d", &ilosc_sztuk);

  if (ilosc_sztuk < 10) c_faktyczna = c_hurtowa * 1.2;
  else c_faktyczna = c_hurtowa;

  oblicz(c_faktyczna, ilosc_sztuk, &k_zamowienia);

  printf("koszt calkowity: %.2f\tcena za 1 szt: %.2f", k_zamowienia, c_faktyczna);


}
