#include <stdio.h>
#include <stdlib.h>

int f(int x, int *w)//funkcja zwraca przez return szescian, a przez wskaznik kwadrat
    { *w = x*x; //obliczenie kwadratu liczby
        return (*w)*x; //obliczenie szeœcianu liczby
}

int main()
{
    int a=3, b, c;
    c = f(a, &b);
    printf( "bok=%d, kwadrat=%d, szescian=%d\n", a, b, c);
 return 0;

   }
