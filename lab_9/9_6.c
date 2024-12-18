#include <stdio.h>
#include <math.h>

void f(int* dodatnie, int* zero){
    int n;
    float curr;
    printf("n: ");
    scanf(" %d", &n);

    for(int i = 0; i < n; i++){
        printf("liczba %d: ", i+1);
        scanf(" %f", &curr);

        if (curr == 0) *zero += 1;
        if (curr >= 0) *dodatnie += 1;
    }
}

int main(void) {
    int dodatnie, zero;
    f(&dodatnie, &zero);
    printf("dodatnie: %d, zero: %d", dodatnie, zero);
    return 0;
}
