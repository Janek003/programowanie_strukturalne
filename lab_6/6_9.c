#include <stdio.h>
#include <stdlib.h>

// 6.9

int main()
{
    int n = 0, i = 0, ocena = 0;
    printf("ile studentow: ");
    scanf("%d", &n);


    while (i < n){
        printf("ocena z egzaminu studenta %d: ", i+1);
        scanf("%d", &ocena);
        if (ocena > 5 || ocena < 3){
            printf("\nnie wszyscy zdali, badz wpisales ocene z poza zakresu 2-5");
            return 0;
        }
        i++;
    }

    printf("\nwszyscy zdali");

    return 0;
}
