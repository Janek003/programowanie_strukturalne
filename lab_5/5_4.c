#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// ZADANIE 5.4

bool czy_nalezy(float x, float y){
    if (x <= 1 && x >= -1 && y <= 1 && y >= -1){return true;}
    return false;
}

int main()
{
    float x, y;
    bool fun_val;

    printf("input x: ");
    scanf(" %f", &x);

    printf("input y: ");
    scanf(" %f", &y);

    if (czy_nalezy(x, y)){printf("\nPoint belongs to the given field.");}
    else {printf("\nPoint doesnt belongs to the given field.");}

    return 0;
}
