#include <stdio.h>
#include <conio.h>
int main()
{
	int i=0,j=0,count=0;char str[1000];
	printf("Enter String : ");
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]!='@')
		{
			while(str[j]!='\0')
			{
				if(str[i]==str[j])
				{
					count++;
					if(i!=j)
					{
						str[j]='@';
					}
				}
				j++;
			}
		}
	j=0;
	if(str[i]!='@')
	{
		printf("Frequency of '%c' : %d\n",str[i],count);
	}
	i++;
	count=0;
	}
}
