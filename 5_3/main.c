#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float if_fun(int t, int a, float rad){
    if (t == 8){return 1 - sin(rad);}
    if (t >= 0 && t <= 3){return (1+cos(rad))/2;}
    if (t >= 4 && t <= 7){return sqrt((a*a)+1);}

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

