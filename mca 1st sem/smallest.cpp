#include <stdio.h>
#include <conio.h>
//Function to Find Smallest
float small(float a,float b,float c)
{
	float sml;
	if(a<b && a<c)
	{
		sml=a;
	}
	else if(b<c)
	{
		sml=b;
	}
	else
	{
		sml=c;
	}
	return sml;
}
//Main Function
int main()
{
	float num1,num2,num3,smallest;
	printf("Enter Three Numbers\n");
	scanf("%f %f %f",&num1,&num2,&num3);
	smallest=small(num1,num2,num3);
	printf("Smallest in Three Values is %f",smallest);
	return 0;
}
