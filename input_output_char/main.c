#include <stdio.h>
#include <stdlib.h>

int print_name_with_just_scanf()
{
    printf("Wpisz imie i nazwisko odzielone spacja (Imie Nazwisko)\n");
    char input, name[20], surname[20];
    scanf("%19s %19s", name, surname);
    printf("imie: %s\nnazwisko: %s\n", name, surname);
}

int print_name_with_fgets_and_sscanf()//bad, explained below
{
    printf("Wpisz imie i nazwisko odzielone spacja (Imie Nazwisko)\n");
    char input[41], name[20], surname[20];
    fgets(input, sizeof(input), stdin);// issue: example: length of name is 10, name of surname is 25
    //it will be accepted by fgets as together with 1 whitespace it hase 36 char < 41, but it will overflow surname char 25>19
    //so in this case it is much better to use scanf (or perhaps fgets with 2 values in 1 but i dont think it makes sense or is possible)

    sscanf(input, "%s %s", name, surname);

    printf("imie: %s, nazwisko: %s\n", name, surname);
}

int main()
{
    //print_name_with_fgets_and_sscanf();
    print_name_with_just_scanf();

    return 0;
}
