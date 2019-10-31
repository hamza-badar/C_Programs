#include <stdio.h>
#include <conio.h>
int main()
{
	int i=0,count=0;char mnth;;char str[1000];
	printf("Enter date : ");
	gets(str);
	printf("*\nNew Format is : %c%c",str[0],str[1]);
	if(str[3]!='0')
	mnth=(int)str[4]+10;
	else
	mnth=str[4];
	switch(mnth)
	{
		
		case '1':
			printf(" January");
			break;
		case '2':
			printf(" Februry");
			break;
		case '3':
			printf(" March");
			break;
		case '4':
			printf(" April");
			break;
		case '5':
			printf(" May");
			break;
		case '6':
			printf(" june");
			break;
		case '7':
			printf(" July");
			break;
		case '8':
			printf(" August");
			break;
		case '9':
			printf(" September");
			break;
		case 58:
			printf(" Octuber");
			break;
		case 59:
			printf(" November");
			break;
		case 60:
			printf(" December");
			break;		
	}
	printf(" %c%c%c%c",str[6],str[7],str[8],str[9]);
}
