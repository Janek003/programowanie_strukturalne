#include <stdio.h>
#include <math.h>

void f(int* a, int* b){
    int c;
    c = *a;
    *a = *a + *b;
    *b = c * (*b);
}

int main(void) {
    int a, b;
    printf("a: ");
    scanf(" %d", &a);

    printf("b: ");
    scanf(" %d", &b);

    f(&a, &b);

    printf("a: %d, b: %d", a, b);

    return 0;
}
