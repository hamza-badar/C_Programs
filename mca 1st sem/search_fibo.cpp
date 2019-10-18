#include <stdio.h>
#include <conio.h>
//global variables
int a=0,c=0,b=1;
//finding the searched value
int fibo_search(int srch)
{
	if(c<srch)
	{
		a=b;
		b=c;
		c=a+b;
		fibo_search(srch);
	}
	else if(c==srch)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//main function
int main()
{
	int num;
	printf("Enter a Number Which you want to find in Fibonacci Series : ");
	scanf("%d",&num);
	if(fibo_search(num)==1)
	{
		printf("Number Exist in Fibonacci Series");
	}
	else
	{
		printf("Number doesn't Exist in Fibonacci Series");
	}
	getch();
	return 0;
}