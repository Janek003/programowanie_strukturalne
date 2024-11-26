#include <stdio.h>
#include <stdlib.h>

// 6.7

int main()
{
    int n = 0, i = 0;
    float a = 0, b = 0;

    printf("n: ");
    scanf(" %d", &n);

    while (i < n){
        a = b;
        printf("\na%d: ", i);
        scanf("%f", &b);
        if (b <= a){
            printf("nie jest to ciag rosnacy");
            return 0;
        }
        i++;
    }

    printf("ciag rosnacy");
    return 1;
}
