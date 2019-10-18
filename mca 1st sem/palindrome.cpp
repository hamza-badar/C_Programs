#include <stdio.h>
int main()
{
	int num,cop,palin=0,rem;
	printf("Enter a Number : ");
	scanf("%d",&num);
	cop=num;
	while(num!=0)
	{
		rem=num%10;
		palin=palin*10+rem;
		num=num/10;
	}
	if(palin==cop)
	{
		printf("Number is Palindrome");
	}
	else
	{
		printf("Number is not Palindrome");
	}
}
