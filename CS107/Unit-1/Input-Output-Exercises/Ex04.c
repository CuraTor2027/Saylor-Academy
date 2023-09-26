/*
    CuraTor2027
    20230925
    Ex04.c
*/
#include <stdio.h>

int main()
{
    float kilometersPerHour;
    float milesPerHour;

    printf("Input kilometers per hour: ");
    scanf("%f", &kilometersPerHour);

    milesPerHour = kilometersPerHour / 1.6;

    printf("%f miles per hour", milesPerHour);

    return 0;
}
