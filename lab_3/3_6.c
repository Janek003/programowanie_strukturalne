#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mile=0, km=0, kmech=0, km_h=0, fahr=0;

    //inputing all info here
    printf("Mile: ");
    scanf("%f", &mile);

    printf("Kilometry: ");
    scanf("%f", &km);

    printf("Konie mechaniczne: ");
    scanf("%f", &kmech);

    printf("Kilometry na godzine: ");
    scanf("%f", &km_h);

    printf("Stopnie Fahrenheita: ");
    scanf("%f", &fahr);

    //printing out converted values
    printf("%.2f miles = %.2f kilometers\n", mile, 0.625*mile);
    printf("%.2f kilometers = %.2f miles\n", km, 1.6*km);
    printf("%.2f koni mechanicznych = %.2f watow\n", kmech, kmech*735);
    printf("%.2f km/h = %.2f m/s\n", km_h, km_h/3.6);
    printf("%.2f F = %.2f C", fahr, (fahr-32.0)/1.8);


    return 0;
}
