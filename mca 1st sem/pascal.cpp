#include <stdio.h>
#include <conio.h>
int main()
{
	int pasc=0,len=0,cop;
	printf("Enter the Number of rows you want : ");
	scanf("%d",&len);
	cop=len;
	for(int i=0;i<len;i++)
	{
		for(int k=0;k<cop;k++)
		{
			printf("  ");
		}
		cop--;
		for(int j=0;j<=i;j++)
		{
			if(i==0||j==0)
			{
				pasc=1;
			}
			else
			{
				pasc=pasc*(i-j+1)/j;
			}
			printf("%5d ",pasc);
		}
		printf("\n");
	}
	getch();
}
