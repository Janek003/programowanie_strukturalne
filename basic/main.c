#include <stdio.h>
#include <math.h>

//7_6 sigma od n=0 do k-1 danego przez uzytkownika

int silnia(int a){
    int wynik = 1;
    for (int i = 1; i <= a; i++) wynik *= i;
    return wynik;
}

int rekurencja(int a, int wynik){
    if (a == 0)return wynik;
    rekurencja(a-1, wynik*a);
}

int main(void) {
    int a;
    printf("a!, a = ");
    scanf("%d", &a);

    printf("\nforem: %d\trekurencyjnie: %d\n", silnia(a), rekurencja(a,1));
    return 0;
}
