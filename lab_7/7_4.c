#include <stdio.h>

//7.4

float print_line(int i, float curr_zarobek, float future) {
    if (curr_zarobek >= 5000){future = 1.05 * curr_zarobek;}
    if (curr_zarobek < 5000){future = 1.1 * curr_zarobek;}

    printf("pracownik %d: %f -> %f", i, curr_zarobek, future);

    return future;

}

int main(void) {
    int n = 0;
    float curr_zarobek, suma = 0;

    printf("ile pracownikow: ");
    scanf("%d", &n);


    for(int i = 0; i < n; i++) {
        printf("\nzarobek: ");
        scanf("%f", &curr_zarobek);
        suma += print_line(i, curr_zarobek, curr_zarobek);

    }

    printf("\n\nsuma plac: %f", suma);

    return 0;
}
