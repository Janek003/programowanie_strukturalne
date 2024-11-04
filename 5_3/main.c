#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float if_fun(int t, int a, float rad){
    return 1 - sin(rad);
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

    printf("%f", if_fun(t, a, rad));


    return 0;
}

