#include <stdio.h>
#include <math.h>

int main()
{
	double num,root;
	printf("enter any number to fine square root");
	scanf("%lf",&num);
	root=sqrt(num);
	
	printf("square root if %.2lf=%.2lf",num,root);
	
	return 0;

}
