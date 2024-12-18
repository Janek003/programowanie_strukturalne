#include <stdio.h>
#include <math.h>


void f(float p1, float p2, float x, float *wynik1, float* wynik2){
    *wynik1 = (x * (1+(p1/100)) * (1+(p1/100)));
    *wynik2 = x * (1+(p2/100));
}

int main(void) {
    float p1, p2, x, wynik1, wynik2;
    printf("p1: ");
    scanf(" %f", &p1);

    printf("p2 > p1, p2: ");
    scanf(" %f", &p2);

    if (p1 >= p2){
        printf("zle dane");
        return 1;
    }

    printf("x: ");
    scanf(" %f", &x);

    f(p1, p2, x, &wynik1, &wynik2);
    printf("wynik dla p1 po roku: %f, wynik dla p2 po roku: %f", wynik1, wynik2);

    return 0;
}
