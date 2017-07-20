#include <stdio.h>
#include <math.h>

int main()
{
	
	float rate,s,principal,time;
	
	printf("enter principle,time,rate=");
	scanf("%f%f%f" ,&principal,&time,&rate);
	
	s=(principal*time*rate)/100;
	printf("simple intrest is=%f",s);
	
	return 0;
	}
