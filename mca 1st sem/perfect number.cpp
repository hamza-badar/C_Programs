#include <stdio.h>
#include <conio.h>
//Function to check Perfect Number
void perfect()
{
	int num,sum;
	char more;
	do
	{
		sum=0;
		printf("\nEnter a Number : ");
		scanf("%d",&num);
		for(int i=1;i<num;i++)
		{
			if(num%i==0)
			{
				sum=sum+i;
			}
		}
		if(sum==num)
		{
			printf("Number is Perfect");
		}
		else
		{
			printf("Number is not Perfect");
		}
		printf("\n\nDo you want to do more ? If yes Enter 'Y' else anything : ");
		more=getche();
	}while(more=='y'||more=='Y');
}
//Main Function
int main()
{
	perfect();
}
