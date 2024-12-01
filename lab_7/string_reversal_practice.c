#include <stdio.h>
#include <math.h>

int main(void) {

    char zdanie[100] = {0};
    printf("string to reverse(max 99 znaki): ");
    scanf("%s", zdanie);

    for (int i=98; i >= 0; i--){
        if (zdanie[i] != 0) printf("%c", zdanie[i]);
    }

    return 0;
}
