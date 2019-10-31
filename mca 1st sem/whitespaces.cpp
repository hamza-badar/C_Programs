#include <stdio.h>
#include <conio.h>
int main()
{
	int i=0,count=0;char str[1000];
	printf("Enter String : ");
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			count++;
		
		}
	i++;
	}
	printf("Total White Space(s) in the String are %d",count);
}
