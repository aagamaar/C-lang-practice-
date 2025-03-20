#include <stdio.h>
#define c1 3.14
int main()
{
    float area,r,h;
    printf("Enter the radius : ");
    scanf("%f",&r);
    printf("Enter the height : ");
    scanf("%f",&h);
    area = c1*r*r*h;
    printf("The volume of the cylinder : %f",area);
    return 0;
}