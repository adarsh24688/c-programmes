#include <stdio.h>

int main()
{
	int num1,num2,num3, largest;
	printf("enter first and second vaslu=");
	scanf("%d%d%d",&num1,&num2,&num3);
// 	if(num1>num2)
// 	{
// 		if(num1>num3)
// 		{
// 		printf("Maximum is=%d",num1);
// 		}
// 		else
// 		{
// 			printf("maximus is=%d",num3);
// 		}
		
		
// 	}
// 	else
// 	{
// 		if(num2>num3)
// 		{
// 			printf("maximum is =%d",num2);
				
// 		}
// 		else
// 		{
// 			printf("Maximum is=%d",num3);
// 		}
		
	
// 	}
	
// 	Another way to do thid by one line of code
	
	largest = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
	printf("maximum is = %d", largest);
	return 0;
}
