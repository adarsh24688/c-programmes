#include <stdio.h>

int main()
{

	int year=0,week=0,days;
	printf("enter days");
	scanf("%d",&days);
	

	year=(days/365);
		week=(days % 365)/7;
	days=days - ((year*365)+ (week*7));
	
	
	
	printf("year is :%d",year);
	printf("days is:%d",days);
	printf("weeks is:%d",week);
	
	return 0;
}
