#include <stdio.h>
int main()
{
	float num1,num2,num3,sum,prod,avg,grt,sml;
	printf("Enter Three Numbers\n");
	scanf("%f %f %f",&num1,&num2,&num3);
	sum=num1+num2+num3;
	avg=(num1+num2+num3)/3;
	prod=num1*num2*num3;
	if((num1>num2)&&(num1>num3))
	{
		grt=num1;
		if(num2<num3)
		{
			sml=num2;
		}
		else
		{
			sml=num3;
		}
	}
	else if(num2>num3)
	{
		grt=num2;
		if(num1<num3)
		{
			sml=num1;
		}
		else
		{
			sml=num3;
		}
	}
	else
	{
		grt=num3;
		if(num1<num2)
		{
			sml=num1;
		}
		else
		{
			sml=num2;
		}
	}
	printf("=================\n");
	printf("SUM = %.2f\n",sum);
	printf("AVERAGE = %.2f\n",avg);
	printf("PRODUCT = %.2f\n",prod);
	printf("GREATEST = %.2f\n",grt);
	printf("SMALLEST = %.2f\n",sml);
	return 0;
}
