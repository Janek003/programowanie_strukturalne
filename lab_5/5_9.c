#include <stdio.h>
#include <stdlib.h>

void get_input(float* pensja, int* staz){
    printf("Pensja: ");
    scanf(" %f", &*pensja);

    printf("\nStaz: ");
    scanf(" %d", &*staz);

    return;
}

float wyplata(float pensja, int staz){
    if (staz >= 5 & staz <= 10){return pensja + (pensja*staz)/100;}
    if (staz > 10){return pensja * 1.15;}
    return pensja;
}

int main()
{
    float pensja = 0;
    int staz = 0;

    get_input(&pensja, &staz);

    printf("\nwyplata: %.2f", wyplata(pensja, staz));

    return 0;
}


