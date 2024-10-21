#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x=0, a = 0, b = 0, c = 0, d = 0;
    printf("(if counted for trygonometry function it will be used in radians)input x: ");
    scanf("%f", &x);

    a = 10 * cos(x) - 0.1 * x * x + sin(x) + sqrt(4 * x * x + 7);
    b = log(x + 5) + exp(x+1) - abs(tan(x)+1);
    c = ( pow( sin(x), 2 ) + 0.5 )/(cos(pow(x,4)) + pow(tan(x*x), 4) );
    d = sqrt( abs( 5 * sin( pow( x, 5 ) + 1 ) )/( 3.5 * pow( sin(x) + cos(x), 2 ) ) );

    printf("(a): %f\n(b): %f\n(c): %f\n(d): %f", a, b, c, d);

    return 0;
}
