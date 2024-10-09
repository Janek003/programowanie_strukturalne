#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Zadanie 2.2: Rozwiazywanie rownania kwadratowego (algorytm z rozgalezieniami)\n");

    // wczytac wspolczynniki a b c
    float a;
    printf("Wspolczynnik a: ");
    scanf("%f", &a);

    float b;
    printf("Wspolczynnik b: ");
    scanf("%f", &b);

    float c;
    printf("Wspolczynnik c: ");
    scanf("%f", &c);

    // policzyc delte
    float delta;
    delta = pow(b,2) - 4*a*c;
    printf("Delta: %f\n", delta);

    // jesli delta mniejsza od zera to nie ma rozwiazan
    if (delta < 0) {
        printf("Delta %f is lesser then 0 therefore there are no solutions to this equasion, beepbop", delta);
        return 0;

    // jesli delta >= 0 to 2 rozwiazania wyznaczamy
    float x1;
    x1 = (-b-sqrt(delta))/2*a;

    float x2;
    x2 = (-b+sqrt(delta))/2*a;


    // jesli jedno jest inne od drugiego to wyswietlamy 2, jesli sa te same to mowimy ze jest tylko 1

    return 0;
}
