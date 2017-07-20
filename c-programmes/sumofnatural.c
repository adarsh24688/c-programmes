#include <stdio.h>

int main()
{
	int i,n,sum=0;
	printf("enter=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum of firsy %d nat num is=%d",n,sum);
	return 0;
}
