#include <stdio.h>
int main()
{
	int sale,max=0,number,max_num;
	for(int i=1;i<=10;i++)
	{
		printf("Enter the total sale(s) for the employee %d and its number : ",i);
		scanf("%d %d",&sale,&number);
		if(sale>max)
		{
			max=sale;
			max_num=number;
		}
	}
	printf("***Maximum sale is of Employee whose number is %d and Max sale is %d",max_num,max);
}
