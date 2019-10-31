#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int size,*arr,srch,stat=0,ind;
	printf("Enter the size of your array : ");
	scanf("%d",&size);
	arr=(int*)malloc(size*(sizeof(int)));
	printf("Enter %d elements\n",size);
	for(int i=0;i<size;i++)
	{
		scanf("%d",arr+i);
	}
	printf("Enter the Element you want to search : ");
	scanf("%d",&srch);
	for(int j=0;j<size;j++)
	{
		if(arr[j]==srch)
		{
			ind=j;
			stat=1;
			break;
		}
	}
	if(stat==1)
	{
		printf("Elemet found at index %d",ind);
	}
	else
	{
		printf("Entered Element doesn't exist");
	}
}
