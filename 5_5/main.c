#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// ZADANIE 5.5

void podaj_rozwiazania(float a, float b, float c){
    float delta, x1, x2;

    delta = pow(b,2) - 4*a*c;
    printf("Delta: %.2f\n", delta);

    if (delta < 0) {
        printf("Rownanie nie ma rozwiazan", delta);
        return;
    }

    x1 = (-b-sqrt(delta))/2*a;

    x2 = (-b+sqrt(delta))/2*a;

    if (x1==x2) {
        printf("Rownanie ma 1 rozwiazanie: %.2f", x1);
        return;
    }

    printf("Rownanie ma 2 rozwiazania: %.2f oraz %.2f", x1, x2);
}


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

    podaj_rozwiazania(a, b, c);

    return 0;
}
