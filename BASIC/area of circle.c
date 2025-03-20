#include <stdio.h>
#define c1 3.14
int main()
{
    float area,r;
    printf("Enter the radius : ");
    scanf("%f",&r);
    area = c1*r*r;
    printf("The area of the circle : %f",area);
    return 0;
}