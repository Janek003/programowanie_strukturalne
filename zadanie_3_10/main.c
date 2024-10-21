#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0, temp = 0, n = 0;

    printf("ilo cyfrowe n: ");
    scanf("%i", &n);

    printf("input a and b as [a b]: ");
    scanf("%i %i", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("a: %i\nb: %i\n", a, b);

    char str_a[n+1], str_b[n+1];

    sprintf(str_a, "%d", a);
    sprintf(str_b, "%d", b);

    int i;

    printf("\na reversed: ");
    for (i = n-1; i >= 0; i--) {
        printf("%c", str_a[i]);
    }

    printf("\nb reversed: ");

    for (i = n-1; i >= 0; i--) {
        printf("%c", str_b[i]);
    }

    return 0;
}
