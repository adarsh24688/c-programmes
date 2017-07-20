#include <stdio.h>
#include <math.h>

int  main()
{
	double x,y,power;
	
	printf("enter x:");
	scanf("%lf",&x);
	
	printf("enter y:");
	scanf("%lf",&y);
	
	power= pow(x,y);
	printf("x^y =%.2lf",power);
	
	return 0;
}
