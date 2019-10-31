#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int *arr,size,count=0;
	printf("Enter the Total Number of Element(s) : ");
	scanf("%d",&size);
	printf("Enter %d Elements :-\n",size);
	arr=(int*)malloc(size*sizeof(int));
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++)
	{
		if(arr[i]!=-1)
		{
			for(int j=0;j<size;j++)
			{
				if(arr[i]==arr[j])
				{
					count++;
					if(i!=j)
					{
						arr[j]=-1;
					}
				}
			}
		}
	if(arr[i]!=-1)
	{
		printf("Frequency of %d : %d\n",arr[i],count);
	}
	count=0;
	}
}
