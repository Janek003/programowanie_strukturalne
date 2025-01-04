#include <stdio.h>
#include <math.h>

int main()
{
    char znak = 'W';
    int ascii = (int)znak;
    for (int i = 0; i < 8; i++) {
        printf("%d", ascii & 1);
        printf(" %d\n", i+6);
        ascii = ascii >> 1;
    }

    return 0;
}
