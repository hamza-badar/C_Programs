#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int *arr,size,temp;
	printf("Enter the Total Number of Element(s) : ");
	scanf("%d",&size);
	printf("Enter %d Elements :-\n",size);
	arr=(int*)malloc(size*sizeof(int));
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<size;j++)
	{
		for(int k=0;k<size-1;k++)
		{
			if(arr[k]<arr[k+1])
			{
				temp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
			}
		}
	}
	printf("Sorted array : ");
	for(int l=0;l<size;l++)
	{
		printf("%d ",arr[l]);
	}
}
