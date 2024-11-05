#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool czy_trojkat(float a, float b, float c){
    if(a + b > c && a + c > b &&b + c > a){return true;}
    return false;
}

float pole(float a, float b, float c){
    float p, pole_tr;
    p = (a + b + c)/2;
    pole_tr = sqrt( p * (p - a) * (p - b) * (p - c) );
    return pole_tr;
}

int main()
{
    float a, b, c;

    printf("input a b c: ");
    scanf(" %f %f %f", &a, &b, &c);

    if(czy_trojkat(a,b,c)){printf("Pole trojkata: %f", pole(a,b,c));}
    else{printf("\nNie mozna utworzyc trojkata o podanych bokach...");}

    return 0;
}
