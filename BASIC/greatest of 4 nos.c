#include <stdio.h>
int main()
{
	int a,b,c,d;

    printf("a: ");
    scanf("%d",&a);

    printf("b: ");
    scanf("%d",&b);
    
    printf("c: ");
    scanf("%d",&c);
    
    printf("d: ");
    scanf("%d",&d);
	
    if (a>b && a>c && a>d)
    {
        printf("%d is the largest",a);
    }
    else if (b>a && b>c && b>d)
    {
        printf("%d is the largest",b);
    }
    else if (c>a && c>b && c>d)
    {
        printf("%d is the largest",c);
    }
    else
    {
        printf("%d is the largest",d);
    }
    return 0;
}