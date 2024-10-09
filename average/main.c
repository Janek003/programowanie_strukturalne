#include <stdio.h>
#include <stdlib.h>

//Delete to start of line.	Ctrl + Shift + BackSpace
//Line cut.	Ctrl + L
//Line copy.	Ctrl + Shift + T
//Line delete.	Ctrl + Shift + L
//Line transpose with previous.	Ctrl + T
//Line duplicate.	Ctrl + D

int main() {
    int iNum_1;
    int iNum_2;
    float fAvg;

    printf("First number: ");
    scanf("%d", &iNum_1);

    printf("Second number: ");
    scanf("%d", &iNum_2);

    fAvg = (iNum_1 + iNum_2)/2.0;

    printf("the average of %d and %d is %f", iNum_1, iNum_2, fAvg);

    return 0;
}
