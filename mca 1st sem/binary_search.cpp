#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int *arr,srch,stat=0,size,start=0,mid=0,end;
	printf("Enter the Total Number of Element(s) : ");
	scanf("%d",&size);
	printf("Enter %d sorted Elements :-\n",size);
	arr=(int*)malloc(size*sizeof(int));
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the Element which you want to search : ");
	scanf("%d",&srch);
	end=size;
	mid=(start+end)/2;
	while(start<end)
	{
		if(arr[mid]>srch)
		{
			end=mid-1;
			mid=(start+end)/2;
		}
		else if(arr[mid]<srch)
		{
			start=mid+1;
			mid=(start+end)/2;
		}
		else
		{
			stat=1;
			break;
		}
	}
	if(stat==1)
	{
		printf("Element found at Index '%d'",mid);
	}
	else
	{
		printf("Element doesn't exist in the array");
	}
}
