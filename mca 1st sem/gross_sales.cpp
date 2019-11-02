#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *arr,size,tot_sale; float sale=0.0;
	printf("Enter the Total Number of Salesperson(s) : ");
	scanf("%d",&size);
	printf("Enter %d gross sales of last week :-\n",size);
	arr=(int*)malloc(size*sizeof(int));
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<size;j++)
	{
		sale=(arr[j]*9/100);
		tot_sale=((arr[j]*9/100)+1000);
		printf("DATA for Salesperson %d \n*\n9 percent of gross sales for last week is %.2f \n\t\t&\nTotal sales for the last week is %d\n*********************\n",(j+1),sale,tot_sale);
	}
}
