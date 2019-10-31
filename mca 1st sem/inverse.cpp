#include <stdio.h>
#include <conio.h>
int main()
{
	int mat[10][10],m,n,temp,l=0;
	printf("Enter the Number of Rows and Column :-\n");
	scanf("%d %d",&m,&n);
	printf("Enter Elements Now\n*****\n");
	for(int i=0;i<m;i++)
	{
		printf("Enter %d Elemet(s) for Row %d:-\n",n,(i+1));
		for(int j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
		printf("*****\n");
	}
	if(m>n)
	{
		for(int k=0;k<n;k++)
		{
			for(l=k;l<m;l++)
			{
				if(k!=l)
				{
					temp=mat[k][l];
					mat[k][l]=mat[l][k];
					mat[l][k]=temp;
				}
			}
		}
	}
	else
	{
		for(int k=0;k<m;k++)
		{
			for(l=k;l<n;l++)
			{
				if(k!=l)
				{
					temp=mat[k][l];
					mat[k][l]=mat[l][k];
					mat[l][k]=temp;
				}
			}
		}	
	}
	printf("Inverted Matrix :-\n");
	for(int o=0;o<n;o++)
	{
		printf("\t|");
		for(int p=0;p<m;p++)
		{
			printf(" %d ",mat[o][p]);
		}
		printf("|\n");
	}
	
}
