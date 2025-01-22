#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DL 80


int main()
{
    char wpisane[DL];
    gets(wpisane);
    int len = 0;
    for (int i = 0; i < DL; i++){
        if (wpisane[i] == '\0'){
            len = i + 1;
            break;
        }
    }
    int starting_point = (DL - len) / 2;
    char new_str[DL];
    for (int i = 0; i < DL; i++)new_str[i] = ' ';
    for (int i = 0; i < len; i++){
        new_str[i + starting_point] = wpisane[i];
    }
    puts(new_str);

    return 0;
}
