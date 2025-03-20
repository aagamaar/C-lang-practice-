#include <stdio.h>
int main()
{
	int length,breadth,area;
	printf("Enter the length : ");
	scanf("%d",&length);
	printf("Enter the breadth : ");
	scanf("%d",&breadth);	
	area = length * breadth;
	printf("area of the rectangle : %d ",area);
	return 0;
}