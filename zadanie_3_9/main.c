#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int lukowa = 0;
    float x = 0; //in radians

    printf("input angle in degrees (lukowych): ");
    scanf("%i", &lukowa);

    x = (lukowa * M_PI) / 180;

    printf("sin = %f, cos = %f, tg = %f", sin(x), cos(x), tan(x));

    return 0;
}
