/*
    CuraTor2027
    20230925
    Ex03.c
*/
#include <stdio.h>

int main()
{
    float height;
    float width;
    float perimeter;

    printf("Input the height of the Rectangle: ");
    scanf("%f", &height);
    printf("Input the width of the Rectangle: ");
    scanf("%f", &width);

    perimeter = (height * 2) + (width * 2);

    printf("Perimeter of the Rectangle: %f", perimeter);

    return 0;
}
