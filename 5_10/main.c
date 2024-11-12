#include <stdio.h>
#include <stdlib.h>

float get_avg(int n){

    float sum = 0, element = 0;

    for(int i = 0; i < n; i++){
        printf("\nocena %d: ", i+1);
        scanf(" %f", &element);
        sum += element;
    }
    return sum/n;
}

int get_stypendium(float avg){
    if (avg > 4){return 500;}
    if (avg <= 3){return 0;}
    return 300;
}

int main()
{
    int n = 0;

    printf("\nIle ocen: ");
    scanf(" %d", &n);

    printf("\nStypendium: %d", get_stypendium(get_avg(n)));


    return 0;
}
