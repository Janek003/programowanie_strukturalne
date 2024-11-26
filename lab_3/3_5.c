#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Napisz program obliczajacy srednia arytmetyczna i srednia geometryczna dwoch liczb calkowitych.

int main()
{
    int a = 0, b = 0;
    printf("input integers a b seperated by space\n");
    scanf("%i %i", &a, &b);

    float s_arytmetyczna = (a + b)/2.0;
    float s_geometryczna = sqrt(a*b);

    printf("srednia arytmetyczna: %f\nsrednia geometryczna: %f", s_arytmetyczna, s_geometryczna);

    return 0;
}
