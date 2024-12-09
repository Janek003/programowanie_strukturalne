#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 42;
    int a = 55;
   // int *ptr = &x;

   int *ptr;

   ptr=&x;


    printf("Adres zmiennej x: %p\n", &x);
    printf("Adres w systemie szestnastkowym zmiennej x na ktora wskazuje wskaznik: %p\n", ptr);
    printf("Adres wskaznika: %p\n", &ptr);

    printf("Wartosc zmiennej x: %d\n",x);
    printf("Wartosc zmiennej x: %d\n", *ptr);


    *ptr=10;
    printf("Wartosc zmiennej x: %d\n",x);
    printf("Wartosc zmiennej x: %d\n",*ptr);

    ptr=&a;

    printf("Wartosc zmiennej a: %d\n",*ptr);

    return 0;
}
