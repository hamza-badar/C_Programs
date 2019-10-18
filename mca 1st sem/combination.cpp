#include <stdio.h>
#include <conio.h>
//global variables
int fac=1;
//function for factorial
int fact(int num)
{
	if(num>0)
	{
		fac=fac*num;
		num--;
		return fact(num);
	}
	else
	{
		return fac;
	}
}
//main function
int main()
{
	int n,r,a,b,c;
	printf("Enter value of 'n' and 'r' for 'nCr' :-\n");
	scanf("%d %d",&n,&r);
	a=fact(n);
	fac=1;
	b=fact(r);
	fac=1;
	c=fact(n-r);
	printf("%dC%d = %d!/%d!*(%d-%d)! = %d/%d*%d = %d",n,r,n,r,n,r,a,b,c,(a/(b*c)));
	getch();
	return 0;
}