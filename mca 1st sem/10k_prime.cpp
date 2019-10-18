#include <stdio.h>
#include <conio.h>
//Function for Prime Number
void prime()
{
	int sum;
	for(int i=1;i<=10000;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum++;
			}
		}
		if(sum==1)
		{
			printf("%d, ",i);
		}
		sum=0;
	}
}
int main()
{
	prime();
}
