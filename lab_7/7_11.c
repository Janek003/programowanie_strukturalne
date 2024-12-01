#include <stdio.h>
#include <math.h>

//7_11

void automorf(int m, int n){
    int kwadrat_i, number_1, number_2, is_automorphic = 0;
    for (int i = m; i < n+1; i++){
        is_automorphic = 1;

        kwadrat_i = pow(i, 2);

        number_1 = kwadrat_i;
        number_2 = i;

        while (number_2 > 0){
            if (number_1%10 != number_2%10){is_automorphic = 0; break;}
            number_1 /= 10;
            number_2 /= 10;
        }

        if (is_automorphic == 1)printf("automorphic: %d\n", i);
    }
}

void pierwsze(int m, int n) {
    int ilosc_dzielnikow;

    for(int l_analizowana = m; l_analizowana < n+1; l_analizowana++){
        ilosc_dzielnikow = 0;

        for(int j = 1; j < l_analizowana; j++){
            if (l_analizowana%j == 0) ilosc_dzielnikow++;
        }

        if (ilosc_dzielnikow == 1) {
            printf("%d\n", l_analizowana);
        }
    }
    return;
}

void pitagorejskie(int m, int n) {
    int c_int;
    float c;

    for(int a = m; a < n+1; a++){
        for(int b = 1; b < n+1; b++){
            c = sqrt( pow(a,2) + pow(b,2) );
            c_int = (int)c;
            if (c < n && c_int==c) printf("a:%d\tb:%d\tc:%d\n", a, b, c_int);
        }
    }
    return;
}

int main(void) {
    int choice=1, m, n;

    while(1){
        printf("\n\nwypisz:\n0\twyjdz\n1\tautomorficzne\n2\tpierwsze\n3\tpitagorejskie\n\nwybor: ");
        scanf(" %d", &choice);

        if (choice == 0)break;

        printf("wyznacz dla przedzialu <m,n>\nm: ");
        scanf(" %d", &m);

        printf("n: ");
        scanf(" %d", &n);

        switch(choice){
        case 1:
            automorf(m,n);
            break;
        case 2:
            pierwsze(m, n);
            break;
        case 3:
            pitagorejskie(m, n);
            break;
        default:
            printf("\ninput must be 0,1,2,3, try again\n");
        }
    }
    return 0;
}
