#include <stdio.h>
#include <conio.h>
#include <math.h>
//function to find distance
double distance()
{
	double x1,x2,y1,y2,dis;
	printf("Enter the Co-ordinates of first point :-\n");
	scanf("%lf %lf",&x1,&y1);
	printf("Enter the Co-ordinates of second point :-\n");
	scanf("%lf %lf",&x2,&y2);
	dis=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	return dis;
}
//main function
int main()
{
	printf("Distance between two Point is equals to %lf",distance());
	getch();
}