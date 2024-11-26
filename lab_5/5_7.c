#include <stdio.h>
#include <stdlib.h>

int wyznacz_kwartal(int nr_miesiaca){
    return (nr_miesiaca / 4) + 1;
}

int main()
{
    int nr_miesiaca;

    printf("Nr. miesiaca: ");
    scanf(" %d", &nr_miesiaca);

    printf("kwartal: %d", wyznacz_kwartal(nr_miesiaca));

    return 0;
}
