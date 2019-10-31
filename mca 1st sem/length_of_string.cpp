#include <stdio.h>
#include <conio.h>
int main()
{
	char str[1000]; int len=0;
	printf("Enter 1st String : ");
	gets(str);
	while(str[len]!='\0')
	{
		len++;
	}
	printf("Length of the String is %d",len);
}
	
