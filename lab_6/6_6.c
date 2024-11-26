#include <stdio.h>
#include <stdlib.h>

// 6.6

int user_input(){
    int choice = 0;
    printf("\n1 - opcja 1\n2 - opcja 2\n3 - opcja 3\n4 - wyjscie\nwybor: ");
    scanf(" %d", &choice);
    return choice;
}

int main()
{
    int choice = 0;
    do {
        choice = user_input();
        printf("\npicked option %d", choice);

    } while(choice != 4);

    return 0;
}
