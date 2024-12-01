#include <stdio.h>
#include <math.h>

//7_10

int main(void) {
    int n, c_int, ile_trojkatow = 0;
    float c;
    printf("n: ");
    scanf("%d", &n);

    int wyniki[n][3];

    for(int a = 1; a < n; a++){
        for(int b = 1; b < n; b++){
            c = sqrt( pow(a,2) + pow(b,2) );
            c_int = (int)c;
            if (c < n && c_int==c){
                //printf("a:%d\tb:%d\tc:%d\n", a, b, c_int);

                wyniki[ile_trojkatow][0] = a;
                wyniki[ile_trojkatow][1] = b;
                wyniki[ile_trojkatow][2] = c_int;

                ile_trojkatow++;
            }
            if (ile_trojkatow == n) return 1;
        }
    }

    printf("\nNormal direction:\n");
    for (int i = 0; i < ile_trojkatow; i++){
            printf("a:%d\tb:%d\tc:%d\n", wyniki[i][0], wyniki[i][1], wyniki[i][2]);
    }

    printf("\nReversed:\n");
    for (int i = ile_trojkatow - 1; i > -1; i--){
            printf("a:%d\tb:%d\tc:%d\n", wyniki[i][0], wyniki[i][1], wyniki[i][2]);
    }

    return 0;
}
