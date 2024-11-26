#include <stdio.h>
#include <stdlib.h>

// 6.5

int main()
{
    int curr = 0, najw = -1;
    do {
        printf("liczba: ");
        scanf("%d", &curr);
        if (curr > najw){najw = curr;}

    } while(curr != -1);

    printf("\nNajwieksza: %d", najw);

    return 0;
}
