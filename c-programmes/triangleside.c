#include <stdio.h>
#include <math.h>

int main()
{
	int x,y,z,a=180,b;
	printf("enter one side of triangle");
	scanf("%d",&x);
	printf("enter second side of triangle");
	scanf("%d",&y);
	
	z=x+y;
	b=a-z;
	printf("the thir angle is:%d",b);
	return 0;
	
}
