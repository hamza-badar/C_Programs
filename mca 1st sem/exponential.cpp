#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
	int power,end,fact=1; float sum;
	char more;
	do
	{
		printf("\n\nEnter the power of Exponent which you want to find : ");
		scanf("%d",&power);
		printf("\nEnter a natural number for accuracy (Note:greator the number more will be the accuracy) : ");
		scanf("%d",&end);
		for(int i=1;i<=end;i++)
		{
			for(int j=1;j<=i;j++)
			{
				fact=fact*j;
			}
			sum=sum+(pow(power,i))/fact;
			fact=1;
		}
		sum=sum+1;
		printf("result = %f",sum);
		printf("\n\nDo you want to find for more ? Enter 'y' else anything : ");
		more=getche();
	}while(more=='y'||more=='Y');
}

