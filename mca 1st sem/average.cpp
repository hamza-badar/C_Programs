#include <stdio.h>
#include <conio.h>
//function for average
int len,i=0; float arr[1],avg=0,sum=0.0;
float average()
{
	if(i<len)
	{
		sum=sum+arr[i];
		i++;
		average();
	}
	else
	{
		avg=sum/len;
		return avg;
	}
}
//main function
int main()
{
	printf("Enter the Size of your array : ");
	scanf("%d",&len);
	arr[len];
	printf("Enter %d Elements :-\n",len);
	for(int j=0;j<len;j++)
	{
		scanf("%f",&arr[j]);
	}
	printf("\nAverage of these Elements is : %f",average());
}
