#include <stdio.h>

int main()
{
	float length,width,perimeter;
	printf("enter first number:");
	scanf("%d",&length);
	printf("enter second number:");
	scanf("%d",&width);
	
	perimeter=2*(length+width);
	
	printf("perimeter is:%d",&perimeter);
	return 0;
}
