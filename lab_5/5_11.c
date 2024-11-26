#include <stdio.h>
#include <stdlib.h>

void get_input(int* n){
    printf("\nInput [curr value: %d]: ", *n); // this shows how to adress the value of pointer
    scanf(" %d", &*n);
}

int show_result(int a, int b, int c){
    if (a%2==0 && b%2==0 && c%2==0){return a + b + c;}
    if (a==1 || b==1 || c==1){return a * b * c;}
    return -1;
}

int main()
{
    int a=0, b=0, c=0;
    get_input(&a);
    get_input(&b);
    get_input(&c);

    printf("\nresult: %d", show_result(a, b, c));

    return 0;
}
