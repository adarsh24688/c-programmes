#include <stdio.h>
#include <math.h>

int main()
{
	int area,height,base;
	
	printf("enter height and base");
	scanf("%d%d",&height,&base);
	
	area=height*base/2;
	printf("area of triangle is = %d sq. units",area);
	return 0;
}
