#include <stdio.h>

//7.2

int main(void) {
    int a = 0;
    printf("a: ");
    scanf("%d", &a);

    for(int i = 0; i < a; i++) {
        printf("*");
    }
    return 0;
}
