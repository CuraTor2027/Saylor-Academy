/*
    CuraTor2027
    20230925
    Ex02.c
*/
#include <stdio.h>

float volume(const float PI, float radius)
{
    float volume = (4.0/3.0) * PI * radius * radius * radius;
    return volume;
}

int main()
{
    float r;
    float v;
    const float PI = 3.1415926535;

    printf("Input the radius of the sphere: ");
    scanf("%f", &r);

    v = volume(PI, r);

    printf("The volume of sphere is %f.", v);

    return 0;
}
