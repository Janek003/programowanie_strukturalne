
#include <stdio.h>
#include <stdlib.h>

float prostopadloscian(float a, float b, float c,float *V)
{
   if(a<=0||b<=0||c<=0) return 0;

    *V=a*b*c;

    return 2*(a*b+a*c+b*c);


}

int main()
{
    float a=2,b=3,c=4;
    float obj;
    float pole;
    pole = prostopadloscian(a,b,c,&obj);

    printf("pole %f",pole);
    printf("objestosc %f",obj);


    printf("Hello world!\n");
    return 0;
}
