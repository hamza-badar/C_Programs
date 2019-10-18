#include <stdio.h>
int main()
{
	int num,tot_dig;
	printf("Enter a Number : ");
	scanf("%d",&num);
	while(num!=0)
	{
		num=num/10;
		tot_dig++;
	}
	printf("Total Digit in the Given Number is :- %d",tot_dig);
}
