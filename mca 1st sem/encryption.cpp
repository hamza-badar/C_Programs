#include <stdio.h>
#include <conio.h>
int main()
{
	int num,code,half1,half2,rem,cop;
	char more;
	do
	{
		code=0;
		printf("\nEnter a Number : ");
		scanf("%d",&num);
		cop=num;
		while(cop!=0)
		{
			rem=cop%10;
			code=code*10+((rem+7)%10);
			cop=cop/10;
		}
		if(num<10)
		{
			code=code*1000+777;
		}
		else if(num<100)
		{
			code=code*100+77;
		}
		else if(num<1000)
		{
			code=code*10+7;
		}
		else if(num<1)
		{
			code=7777;
		}
		printf("Encrypted Code is : ");
		{
			half1=code%100;
			half2=code/100;
			printf("r%d m%d",half1,half2);
			printf("%d",(half1/10));
			printf("%d",(half1%10));
			printf("%d",(half2/10));
			printf("%d",(half2%10));
		}
		printf("\nDo you want to do more ? Enter 'Y' else anything : ");
		more=getche();
	}while(more=='Y'||more=='y');
}
