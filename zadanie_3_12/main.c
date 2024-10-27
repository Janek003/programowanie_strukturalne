#include <stdio.h>
#include <stdlib.h>

int next_ascii()
{
    int ascii_a, ascii_b;
    char char_a, char_b;

    printf("character: ");
    scanf(" %c", &char_a); // THIS IS IMPORTANT, ADDING SPACE BEFORE %c ignores all previous whitespace
                           // in this instance it ignores ENTER from confirming 'choice' in main()

    ascii_a = (int)char_a;
    ascii_b = ascii_a + 1;

    printf("ascii: %i\n", ascii_a);

    char_b = (char)(ascii_b);

    printf("next ascii charter: %c", char_b);

    return 0;
}

int small_to_capital()
{
    char small, capital;
    int ascii_small, ascii_capital;

    printf("enter a letter to capitalize it: ");
    scanf(" %c", &small);

    ascii_small = (int)(small);
    ascii_capital = ascii_small - 32;

    capital = (char)(ascii_capital);
    printf("capital: %c", capital);

    return 0;
}


int main()
{
    int choice = 0;
    printf("What would you like to do:\n1. show ASCII code for a given character and show next charater in ASCII\n2. capitalize a given letter\nenter 1 or 2: ");
    scanf("%i", &choice);

    switch (choice) {
        case 1:
            next_ascii();
            break;
        case 2:
            small_to_capital();
            break;
        default:
            printf("wrong input");
    }


    return 0;
}
