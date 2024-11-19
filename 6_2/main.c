#include <stdio.h>
#include <stdlib.h>

void collect_input(int* n){
    printf("Ile liczb: ");
    scanf(" %d", &*n);
}

float sredniaDoWhile(int n){
    float curr = 0, suma = 0;
    int i = 0;
    do{
        printf("\nLiczba %d: ", i+1);
        scanf(" %f", &curr);

        suma += curr;
        i ++;

    } while (i < n);

    return suma/n;
}

int main()
{
    int n = 0;
    collect_input(&n);

    printf("\n%f", sredniaDoWhile(n));
    return 0;
}
