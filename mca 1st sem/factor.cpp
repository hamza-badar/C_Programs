#include <stdio.h>
int main()
{
	int num1,num2;
	printf("Enter Two Numbers\n");
	scanf("%d %d",&num1,&num2);
	if(num2%num1==0)
	{
		printf("%d is a factor of %d",num1,num2);
	}
	else
	{
		printf("%d is not a factor of %d",num1,num2);
	}
	return 0;
}
