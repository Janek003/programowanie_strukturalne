#include <stdio.h>

//7.3

int main(void) {
    int n = 0, curr_liczba = 0, suma = 0, ile_parz = 0;
    float srednia = 0;

    printf("n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("liczba: ");
        scanf("%d", &curr_liczba);
        if (curr_liczba % 2 == 0) {
            ile_parz++;
            suma += curr_liczba;
        }
    }

    srednia = suma/ile_parz;
    printf("Srednia: %f", srednia);

    return 0;
}
