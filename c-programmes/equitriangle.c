#include<stdio.h>
#include<math.h>

int main()
{
	int side ,area;
	printf("enter one side=");
	scanf("%d",&side);
	
	area=(sqrt(3)/4)*(side*side);
	printf("%d",area);
	
	return 0;
}
