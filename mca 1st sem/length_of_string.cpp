#include <stdio.h>
#include <conio.h>
//function to find length of a string
int i=0;
int length(char str[])
{
	if(str[i]!='\0')
	{
		i++;
		length(str);
	}
	else
	{
		return i;
	}
}
//main function
int main()
{
	char sen[1000];
	printf("Enter a String : ");
	gets(sen);
	printf("Length of the string is : %d",length(sen));
	getch();
}