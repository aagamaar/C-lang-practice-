#include <stdio.h>
int main()
{
	int length,breadth,area;

	// length user input
	printf("Enter the length : ");
	scanf("%d",&length);

	//breadth user input
	printf("Enter the breadth : ");
	scanf("%d",&breadth);	

	area = length * breadth;

	//displaying the area
	printf("area of the rectangle : %d ",area);
	
	return 0;
}