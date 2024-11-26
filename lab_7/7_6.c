#include <stdio.h>
#include <math.h>

//7_6 sigma od n=0 do k-1 danego przez uzytkownika

int silnia(int a){
    int wynik = 1;
    for (int i = 1; i <= a; i++) wynik *= i;
    return wynik;
}

int main(void) {
    int k, stopnie;
    float radiany;
    double licznik, mianownik, suma = 0;

    printf("ile skladnikow sumy(k): ");
    scanf("%d", &k);

    printf("kat w stopniach: ");
    scanf("%d", &stopnie);

    radiany = stopnie * M_PI / 180;
    printf("kat w radianach: %f\n", radiany);

    for(int n = 0; n < k; n++){
        licznik = pow(-1, n) * pow(radiany, (2 * n) + 1);
        mianownik = silnia(2*n+1);

        suma += licznik / mianownik;

        printf("\nn:%d\tlicznik:%lf\tmianownik:%lf", n, licznik, mianownik);
    }

    printf("\n\nsin(%d) = %lf\tsin(%d) = %lf\n", stopnie, suma, stopnie, sin(radiany));

    return 0;
}
