#include <stdio.h>
int main()
{
	int p,c,m;

    printf("Physics marks out of 100: ");
    scanf("%d",&p);

    printf("Chemistry marks  out of 100: ");
    scanf("%d",&c);

    printf("Mathematics marks out of 100: ");
    scanf("%d",&m);

    int tot=p+c+m;
    
    if (tot/300*100>=40 && p>=33 && c>=33 && m>=33)
    {
        printf("You have passed!");
    }
    else
    {
        printf("You have failed!");
    }
	return 0;
}