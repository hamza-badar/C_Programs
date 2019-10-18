#include <stdio.h>
int main()
{
	int grs_perc; float grs_sal=1000;
	printf("Enter the percentage of gross sales for this week : ");
	scanf("%d",&grs_perc);
	if(grs_perc>0)
	{
		grs_sal=1000+((grs_sal*grs_perc)/100);
	}
	printf("\nGross Salary for this Week is %.3f",grs_sal);
	return 0;
}
