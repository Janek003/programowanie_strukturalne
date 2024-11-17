#include <stdio.h>
#include <stdlib.h>

int get_ascii(){
    int asc = 0;
    printf("\n\nZnak['!' = exit]: ");
    scanf(" %1c", &asc);
    return asc;
}

int analyse_ascii(int asc){
    if (asc == 36){printf("znak dolara");}
    if (asc >= 97 & asc <= 122){printf("wpisales mala litere");}
    if (asc >= 65 & asc <= 90){printf("wpisales duza litere");}
    if (asc >= 48 & asc <= 57){printf("wpisales cyfre");}
    if (asc == 42 || asc == 43 || asc == 45 || asc == 47){printf("znak dzialania operacji arytmetycznych");}
    if (asc == 33){return 0;}

    return 1;
}

int main()
{
    int i = 1;
    while (i == 1){
        i = analyse_ascii( get_ascii() );
    }

    return 0;
}
