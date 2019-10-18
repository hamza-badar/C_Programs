#include <stdio.h>
int main()
{
	float rad,crm,ar,dia; 
	const float pi=3.141592653589;
	printf("Enter Radius of Circle : ");
	scanf("%f",&rad);
	dia=2*rad;
	crm=2*pi*rad;
	ar=pi*rad*rad;
	printf("\nDiameter = %.2f\n",dia);
	printf("Circumference = %.2f\n",crm);
	printf("Area = %.2f\n",ar);
	return 0;
}
