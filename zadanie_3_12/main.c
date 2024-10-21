#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ascii_a, ascii_b;
    char char_a, char_b;

    printf("character: ");
    scanf("%c", &char_a);

    ascii_a = (int)char_a;
    ascii_b = ascii_a + 1;

    printf("ascii: %i\n", ascii_a);

    char_b = (char)(ascii_b);

    printf("next ascii charter: %c", char_b);

    return 0;
}
