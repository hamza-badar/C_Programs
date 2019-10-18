#include <stdio.h>
#include <conio.h>
//global variable(s)
int gcd=1,i=1;
//function for gcd
int GCD(int num1,int num2)
{
	if(num1%i==0 && num2%i==0)
	{
		gcd=i;
	}
	if(i<num1)
	{
		i++;
		GCD(num1,num2);
	}
	else
	{
		return gcd;
	}
}
//main function
int main()
{
	int a,b;
	printf("Enter two Numbers :-\n");
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		printf("GCD of given two number is %d",GCD(a,b));
	}
	else
	{
		printf("GCD of given two number is %d",GCD(b,a));
	}
	getch();
}