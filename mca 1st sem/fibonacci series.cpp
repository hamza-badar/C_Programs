#include <stdio.h>
#include <conio.h>
int main()
{
	int end,a=0,b=1,c;
	char more;
	do
	{
		printf("\n\nEnter the Number of terms you want in Fibonacci Series : ");
		scanf("%d",&end);
		printf("0, 1, ");
		for(int i=2;i<end;i++)
		{
			c=a+b;
			a=b;
			b=c;
			printf("%d, ",c);
		}
		c=a=0;b=1;
		printf("\n\nDo you want to compute Series again ? Enter 'y' else anything : ");
		more=getche();
	}while(more=='y'||more=='Y');
}
