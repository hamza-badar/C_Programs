#include <stdio.h>
#include <conio.h>
int main()
{
	double gs_pay; int count,time,num_emp,rate,hour; char more;
	do
	{
		printf("\n*\nEnter the Total Number of Employees : ");
		scanf("%d",&num_emp);
		count=1;
		while(count<=num_emp)
		{
			printf("*\n*Enter the number of hour(s) and rate of pay for employee %d\n",count);
			scanf("%d %d",&hour,&rate);
			if(hour<=40)
			{
				gs_pay=rate*hour;
			}
			else
			{
				gs_pay=rate*40+rate*((hour-40)/2);
			}
			printf("\nGross pay for %d employee is %f\n",count,gs_pay);
			count++;
		}
	printf("\n=================================================");	
	printf("\nDo you want to do more ? Enter y else anything : ");
	more=getche();
	}while(more=='Y' || more=='y');
}
