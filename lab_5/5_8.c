#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void take_user_input(int* bilet){
    printf("Numer biletu: ");
    scanf(" %d", &*bilet); // jezeli nie bylo by gwiazdki
    return;                 // to nie zmienia sie w adresie
}

void is_lucky(int bilet){
    int curr_digit, sum_first = 0, sum_last = 0;

    for (int i = 0; i < 6; i++){
        curr_digit = (bilet % (int)pow(10, i+1)) / (int)pow(10, i);//matematyczne wyznaczenie cyfr

        if (i>=0 && i <=2){sum_first += curr_digit;}
        else{sum_last += curr_digit;}

        printf("\ni: %d digit: %d suma pierwszych: %d suma drugich: %d", i, curr_digit, sum_first, sum_last);
        }

    if (sum_first == sum_last){printf("\nSzczesliwy bilet");}
    else {printf("\nNormalny bilet");}

    return;
    }

int main()
{
    int bilet;

    take_user_input(&bilet);

    is_lucky(bilet);

    return 0;
}
