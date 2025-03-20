#include <stdio.h>
#define c1 3.14
int main()
{
    float volume,r,h;

    //radius user input
    printf("Enter the radius : ");
    scanf("%f",&r);

    //height user input
    printf("Enter the height : ");
    scanf("%f",&h);

    volume = c1*r*r*h;
    
    //displaying the volume
    printf("The volume of the cylinder : %f",volume);
    return 0;
}