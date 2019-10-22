#include <stdio.h>
#include <conio.h>
//global variables
char str[45]; int i=0,j=0,rslt=1;
//function for Palindrome
int palindrome()
{
	if(j<=i)
	{
		if(str[i]!=str[j])
		{
			rslt=0;
		}
		i--;
		j++;
		palindrome();
	}
	else
	{
		return rslt;
	}
}
//main function
int main()
{
	char ch='A'; 
	printf("Enter a Word :-\n");
	printf("Note : Keep Entering Alphabets and when you get done Enter '@'\n");
	while(ch!='@')
	{
		ch=getche();
		str[i]=ch;
		i++;
	}
	i=i-2;
	if(palindrome()==1)
	{
		printf(" :-\nWord is Palindrome");
	}
	else
	{
		printf(" :-\nWord is not Palindrome");
	}
	getch();
}