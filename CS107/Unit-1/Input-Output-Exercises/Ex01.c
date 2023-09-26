/*
    CuraTor2027
    20230925
    Ex01.c
*/
#include <stdio.h>

int main()
{
    float tempC;
    float tempF;

    printf("Input a temperature(in Centigrate): ");
    scanf("%f", &tempC);

    tempF = (tempC * (9 / 5)) + 32;

    printf("%f degrees Fahrenheit.", tempF);

    return 0;
}
