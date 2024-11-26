#include <stdio.h>
#include <stdlib.h>

void fun(){
    int curr = 0, suma_par = 0, i_par = 0, i_npar = 0, suma_npar = 0;
    float sr_par = 0, sr_npar = 0;
    do{
        printf("\ninput: ");
        scanf(" %d", &curr);
        if (curr == 0);
        else if (curr % 2){
            suma_par += curr;
            i_par ++;
        }
        else {
            suma_npar += curr;
            i_npar ++;
        }
    } while (curr != 0);

    sr_par = (float)suma_par/i_par;
    sr_npar = (float)suma_par/i_par;

    printf("sr_par: %f", (float)suma_par/i_par);
    printf("sr_npar: %f", (float)suma_npar/i_npar);
}

int main()
{
    fun();
    return 0;
}
