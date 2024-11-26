#include <stdio.h>

//7.5

int main(void) {
    int n = 0;
    float a, b, r;

    printf("ile liczb: ");
    scanf("%d", &n);

    printf("\na1: ");
    scanf("%f", &a);

    printf("\na2: ");
    scanf("%f", &b);

    r = b - a;

    for(int i = 0; i < n-2; i++) {
        a = b;

        printf("\na%d: ", i+3);
        scanf("%f", &b);

        if (b-a != r) {
            printf("Nie jest to ciag arytemtyczny.");
            return 0;
        }

    }

    {printf("Ciag arytmetyczny.");}

    return 0;
}
