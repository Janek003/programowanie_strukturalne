#include <stdio.h>
#include <math.h>

int f(float* p_najw, float* d_najw){
    int n, is_set = 0;
    float curr;
    printf("n >= 2, n: ");
    scanf(" %d", &n);

    printf("liczba 1: ");
    scanf(" %f", p_najw );//scanf: p_najw jest juz pointerem wiec nie
                          //wskazujemy pointera do niego tylko do wartosci bo to wartosc zmieniamy

    for(int i = 0; i < n-1; i++){
        printf("liczba %d: ", i+2);
        scanf(" %f", &curr);

        if (is_set == 0 && curr < *p_najw){
            *d_najw = curr;
            is_set = 1;
        }

        if (curr >= *p_najw){
            *d_najw = *p_najw;
            *p_najw = curr;
            is_set = 1;
            continue;
        }

        if (curr > *d_najw){
            *d_najw = curr;
        }
    }
    return is_set;
}

int main(void) {
    float p_najw, d_najw;
    int is_set;
    is_set = f(&p_najw, &d_najw);
    if (is_set == 0)printf("najwieksza: %f", p_najw);
    else printf("najwieksza: %f, druga najwieksza: %f", p_najw, d_najw);
    return 0;
}
