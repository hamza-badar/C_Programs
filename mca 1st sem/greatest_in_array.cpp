#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//global variables
int *arr,n,i=0;
//function to find maximum value
int max(int grt)
{
	if(i<n)
	{
		if(arr[i]>grt)
		grt=arr[i];
		i++;
		max(grt);
	}
	else
	{
		return grt;
	}
	
}
//main function
int main()
{
	printf("Enter the Total Number of Element(s) : ");
	scanf("%d",&n);
	printf("Enter %d sorted Elements :-\n",n);
	arr=(int*)malloc(n*sizeof(int));
	for(int j=0;j<n;j++)
	{
		scanf("%d",&arr[j]);
	}
	printf("Greatest Value : %d",max(arr[i]));
}
