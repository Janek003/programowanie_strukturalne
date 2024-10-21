#include <stdio.h>
#include <stdlib.h>

//Napisz program, ktory na podstawie twojego obecnego wieku (w latach i miesiacach) i podanego okresu czasu (w miesiacach), obliczy twoj wiek w przyszlosci (w latach i miesiacach).
int main()
{
    int years = 0, months = 0, additional_months = 0;

    printf("input your age in years and months as (int int): ");
    scanf("%i %i", &years, &months);

    printf("how many months into the future: ");
    scanf("%i", &additional_months);

    months += 12*years + additional_months;

    printf("in %i months you will be %i years %i months", additional_months, months/12, months%12);

    return 0;
}
