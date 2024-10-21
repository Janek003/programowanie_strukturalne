#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // promien to odleglosc punktow podanych w zadaniu, obwod z tego
    float r, x_1, y_1, x_2, y_2;

    printf("input as [x1 y1]: ");
    scanf("%f %f", &x_1, &y_1);

    printf("input as [x2 y2]: ");
    scanf("%f %f", &x_1, &y_1);

    r = sqrt( pow((x_2-x_1), 2) + pow((y_2-y_1),2) );

    printf("promien: %.3f\n", r);

    printf("obwod: %.3f\n", 2*M_PI*r);

    return 0;
}
