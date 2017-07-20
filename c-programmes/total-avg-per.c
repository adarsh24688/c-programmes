#include <stdio.h>
#include <math.h>

int main()
{
	int n1,n2,n3,n4,n5,total;
	float avg,per;
	printf("enter five sub numbers=");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	total=n1+n2+n3+n4+n5;
	
	avg=total/5.0;
	per=(total/500.0)*100;
	
	printf("Total=%d",total);
	printf("avg=%f",avg);
	printf("percentage is=%f",per);
	
	return 0;
	
}
