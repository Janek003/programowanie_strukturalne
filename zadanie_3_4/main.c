#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, h, r;
    printf("wprowadz: a, b, h, r; odzielone spacjami\n");
    scanf("%f %f %f %f", &a, &b, &h, &r);

    float p_szescian, v_szescian, p_prostop, v_prostop, p_walec, v_walec;

    p_szescian = (a*a)*6;
    printf("%.2f\n", p_szescian);

    v_szescian = a*a*a;
    printf("%.2f\n", v_szescian);

    p_prostop = 2*(a*a)+ 4*(a*b);
    printf("%.2f\n", p_prostop);

    v_prostop = a*a*b;
    printf("%.2f\n", v_prostop);

    p_walec = 2*M_PI*r*h;
    printf("%.2f\n", p_walec);

    v_walec = M_PI*r*r*h);
    printf("%.2f\n", v_walec);


    return 0;
}
