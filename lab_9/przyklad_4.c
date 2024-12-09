#include <stdio.h>
#include <stdlib.h>


void zamiana(int a, int b)
{
    int c=a;
    a=b;
    b=c;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}

void zamiana_wsk(int *a, int *b)
{
    int c=*a; //do zmiennej c wartosc z komorki na ktora wskazuje wskaznik a
    printf("zwc=%d\n",c);
    *a=*b; //do komorki na ktora wskazuje wskaznik a laduje wartosc z komorki na ktora wskazuje wskaznik b
    printf("zwb=%d\n",*b);
    *b=c; //do komorki na ktora wskazuje wskaznik b laduje wartosc ze zmiennej c
    printf("zwa=%d\n",*a);
    printf("zwb=%d\n",*b);
}


int main()
{
    int x=5;
    int y=7;

    printf("x=%d\n",x);
    printf("y=%d\n",y);

    printf("Wartosci w funkcji:\n");

    zamiana(x,y);

     printf("Wartosci poza funkcja:\n");


    printf("x=%d\n",x);
    printf("y=%d\n",y);

      printf("------------------------------\n");

    zamiana_wsk(&x, &y);

    printf("px=%d\n",x);
    printf("py=%d\n",y);


    return 0;
}
