#include <stdio.h>
#include <conio.h>
//Function to reverse the digit
int reverse()
{
	int num,rev,rem;
		printf("\nEnter a Number : ");
		scanf("%d",&num);
		while(num!=0)
		{
			rem=num%10;
			rev=rev*10+rem;
			num=num/10;
		}
		return rev;
}
//main function
int main()
{
	printf("Reversed Value is %d",reverse());
}
