#include <stdio.h>
#include <math.h>

//7_8

int main(void) {
    int szescian_cyfr, number;

    for (int i = 100; i < 1000; i++){
        number = i;
        szescian_cyfr = 0;

        while (number > 0){
            szescian_cyfr += pow(number % 10, 3);
            number /= 10;
        }

        if (szescian_cyfr == i) printf("cyfra spelnia: %d\n", i);
    }

    return 0;
}
