#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// ZADANIE 5.3

float if_fun(int t, int a, float rad){
    if (t == 8){return 1 - sin(rad);}
    if (t >= 0 && t <= 3){return (1+cos(rad))/2;}
    if (t >= 4 && t <= 7 && t != 5){return sqrt((a*a)+1);}
    printf("\nunrecognized t value, returning 0...");
    return 0;
}

float switch_fun(int t, int a, float rad){
    switch(t){
    case 0:
    case 1:
    case 2:
    case 3:
        return (1+cos(rad))/2;
        break;
    case 4:
    case 6:
    case 7:
        return sqrt((a*a)+1);
        break;
    case 8:
        return 1 - sin(rad);
    default:
        printf("\nunrecognized t value, returning 0...");
    }
}

int main()
{
    int a, t;
    float rad;

    printf("t: ");
    scanf("%d", &t);

    printf("a: ");
    scanf("%d", &a);

    rad = (float)((a*M_PI)/180);

    printf("\n%f", if_fun(t, a, rad));
    printf("\n%f", switch_fun(t, a, rad));


    return 0;
}

