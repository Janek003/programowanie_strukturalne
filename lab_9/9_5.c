#include <stdio.h>
#include <math.h>

int main(void) {
    float curr;
    for (int i = 0; i < 3; i ++){
        printf("Podaj liczbe rzeczywista: ");
        scanf(" %f", &curr);

        printf("czesc calkowita: %d, czesc rzeczywista: %f\n", (int)curr, curr - (int)curr );
    }
    return 0;
}
