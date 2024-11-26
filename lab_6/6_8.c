#include <stdio.h>
#include <stdlib.h>

// 6.8 oprocentowanie co roku

int main()
{
    float wplata = 0, oproc = 0, curr = 0;
    int lata;
    printf("wplata: ");
    scanf("%f", &wplata);

    printf("\noprocentowanie[w proc]: ");
    scanf("%f", &oproc);

    curr = wplata;

    while (curr < 2 * wplata){
        curr *= 1 + (oproc / 100);
        lata ++;
    }

    printf("lata: %d, kwota: %f", lata, curr);



    return 0;
}
