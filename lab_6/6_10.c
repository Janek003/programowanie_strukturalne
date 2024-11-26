#include <stdio.h>
#include <stdlib.h>

// 6.10

int main()
{
    int n = 0, i = 0, polowa = 0, poziom;
    printf("pokoje - n > 13: ");
    scanf("%d", &n);

    if (n < 14){
        printf("\nn ma byc > 13");
        return 0;
    }

    polowa = n/2;

    while (i++ < n){
        if (i == 13)continue;

        if (i <= polowa)poziom = 0;
        else poziom = 1;

        if (i % 2 == 0)printf("\nnr: %d\tpokoj dwuosobowy\tpoziom%d", i, poziom);
        else printf("\nnr: %d\tpokoj jednoosobowy\tpoziom%d", i, poziom);

    }



    return 0;
}
