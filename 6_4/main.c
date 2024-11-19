#include <stdio.h>
#include <stdlib.h>

void fun(){
    char user_input[50];
    int curr_ascii = 0;
    char n = 0;
    int i = 0, ile_n = 0, ile_cyfr = 0;

    printf("Zdanie zakonczone kropka: ");
    //scanf("%49s", user_input); this does not work, reads up to first whitespace.
    //scanf("%49s[^\n]", user_input); this works - reads up to new line.
    fgets(user_input, sizeof(user_input), stdin); // this works

    printf("What character to look for: ");
    scanf(" %c", &n);

    //printf("%s", user_input);


    do{
        //if (i < 49){printf("\ni:%d, %c", i, user_input[i]);}

        curr_ascii = (int)user_input[i];
        if (user_input[i] == n){ile_n ++;}
        if (user_input[i] >= 48 && user_input[i] <= 57){ile_cyfr++;}
        i ++;

    } while(user_input[i] != '.'); //kosztownym bledem bylo szukanie "." zamist '.'

    printf("\nznak: %c, wystapil: %d razy.", n, ile_n);
    printf("\nCyfry wystapily: %d razy.\n", ile_cyfr);
}



int main()
{
    fun();
    return 0;
}
