#include <stdio.h>
#include <conio.h>
int main()
{
	int num,sum;
	char more;
	do
	{
		printf("\n\nEnter a Number whose Prime Factors you want to Find : ");
		scanf("%d",&num);
		printf("\nPrime Factors are : ");
		for(int i=2;i<=num;i++)
		{
			if(num%i==0)
			{
				for(int j=1;j<=i;j++)
				{
					if(i%j==0)
					{
						sum++;
					}
				}
				if(sum==2)
				{
					printf("%d, ",i);
				}
				sum=0;
			}
		}
		printf("\n\nDo you want to find factor for another number ? Enter 'y' else anything : ");
		more=getche();
		}while(more=='y'||more=='Y');
}
