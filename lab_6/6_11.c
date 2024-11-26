#include <stdio.h>
#include <stdlib.h>

// 6.11 65-90 i 97-122, 32 roznicy

int main()
{
    int i, ascii_maly, ascii_duzy;
    char znak_maly, znak_duzy;

    while (i <= (90-65) ){
        ascii_duzy = i + 65;
        ascii_maly = ascii_duzy + 32;

        znak_duzy = (char)ascii_duzy;
        znak_maly = (char)ascii_maly;

        printf("\n%c -> %d",znak_duzy, ascii_duzy);
        printf("\t%c -> %d",znak_maly, ascii_maly);

        i++;
    }

    return 0;
}
