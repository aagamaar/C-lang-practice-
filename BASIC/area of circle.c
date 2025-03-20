#include <stdio.h>

//defined a constant pi
#define pi 3.14

int main()
{
    float area,r;
    
    //radius user input
    printf("Enter the radius : ");
    scanf("%f",&r);

    area = pi*r*r;

    //displaying the area
    printf("The area of the circle : %f",area);
    
    return 0;
}