#include <stdio.h>
#include <math.h>

int f(float* ilo){
    int n, counter = 0;
    float curr;
    printf("n: ");
    scanf(" %d", &n);
    for(int i=0; i < n; i++){
        printf("liczba %d: ", i);
        scanf(" %f", &curr);
        if(1 <= curr && curr <= 100){
            *ilo *= curr;
            counter += 1;
        }
    }
    return counter;
}

int main(void) {
    float ilo=1;
    int val;
    val = f(&ilo);
    if (val == 0)printf("Nie bylo liczb miedzy 1 a 100");
    else printf("iloczyn: %f", ilo);
    return 0;
}
