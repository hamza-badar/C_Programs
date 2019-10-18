#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int size;
	int dec,cop,power;
	int cop1,rem;
	int cop2,dig,i;
	char more,bin[1000];
	do
	{
		size=0;
		printf("\n****************************************************\nEnter a Binary Number : ");
		gets(bin);
		while(bin[size]!='\0')
		{
			size++;
		}
		//converting Binary to Decimal
		cop=size-1; dec=0; power=0;
		while(cop>=0)
		{
			if(bin[cop]=='1')
			{
				dec=dec+pow(2,power);
			}
			power++;
			cop--;
		}
		printf("Decimal Equivalent : %d",dec);
		cop1=cop2=dec;
		//Finding the Total Digit in Decimal Equivalent
		dig=0;
		while(cop2!=0)
   		{
        	dig++;
        	cop2=cop2/10;
    	}
		//Converting Decimal to Octal
		int oct[dig+3]; oct[0]=9; i=1;
		while(cop1!=0)
		{
			rem=cop1%8;
			oct[i]=rem;
			i++;
			cop1=cop1/8;
		}
		printf("\nOctal Equivalent : ");
		i--;
		while(oct[i]!=9)
		{
			printf("%d",oct[i]);
			i--;
		}
		//Converting Decimal to Hexa-Decimal
		i=0;
    	int bin[dig];
    	char bchr[dig];
    	while(dec!=0)
    	{
        	rem=dec%16;
        	if(rem<10)
        	{
            	bin[i]=rem;
           		bchr[i]='G';
        	}
   			else
			{
        		if(rem==10)
        		bchr[i]='A';
        		if(rem==11)
        		bchr[i]='B';
        		if(rem==12)
        		bchr[i]='C';
        		if(rem==13)
        		bchr[i]='D';
        		if(rem==14)
        		bchr[i]='E';
        		if(rem==15)
        		bchr[i]='F';
        		bin[i]=10;
    		}
    		i++;
        	dec=dec/16;
    	}
    	printf("\nHexa-Decimal Equivalent : ");
   		for(int j=i-1;j>=0;j--)
   		{
    		if(bchr[j]!='G')
        	printf("%c",bchr[j]);
        	if(bin[j]!=10)
        	printf("%d",bin[j]);
    	}
		printf("\n\nDo you want to do more ? Enter 'Y' else anything : ");
		more=getche();
	}while(more=='Y'||more=='y');
}
