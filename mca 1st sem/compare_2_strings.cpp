#include <stdio.h>
#include <conio.h>
int main()
{
	char str1[1000],str2[1000]; int sz1=0,sz2=0,i=0,cas=1,stat=1;
	printf("Enter 1st String : ");
	gets(str1);
	printf("Enter 2nd String : ");
	gets(str2);
	while(str1[sz1]!='\0')
	{
		sz1++;
	}
	while(str2[sz2]!='\0')
	{
		sz2++;
	}
	if(sz1!=sz2)
	{
		printf("Both String are Unequal");
	}
	else
	{
		while(i<sz1)
		{
			if(str1[i]!=str2[i] && (32+(int)str1[i])!=(int)str2[i] && (int)str1[i]!=(32+(int)str2[i]))
			{
				cas=0;
				break;
			}
			
			i++;
		}
		if(cas==1)
		{
			printf("Both Strings are Equal");
		}
		else
		{
			printf("Strings are equal");
		}
	}
}
