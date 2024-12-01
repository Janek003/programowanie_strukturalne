#include <stdio.h>
#include <math.h>

//7_9

int main(void) {
    int n, ile_pierwszych = 0, l_analizowana = 2, ilosc_dzielnikow;

    printf("n: ");
    scanf(" %d", &n);

    while (ile_pierwszych < n){
        ilosc_dzielnikow = 0;

        for(int j = 1; j < l_analizowana; j++){
            if (l_analizowana%j == 0) ilosc_dzielnikow++;
        }

        if (ilosc_dzielnikow == 1) {
            printf("%d\n", l_analizowana);
            ile_pierwszych++;
        }

        l_analizowana++;
    }


    return 0;
}
