#include <stdio.h>
int main()
{
	float s1,s2,s3;
	printf("Enter the Thre sides of Triangle :-\n");
	scanf("%d %d %d",&s1,&s2,&s3);
	if((s1+s2>s3)&&(s1+s3>s2)&&(s2+s3>s1))
	{
		printf("Triangle is Possible");
	}
	else
	{
		printf("Triangle is not Possible");
	}
}
