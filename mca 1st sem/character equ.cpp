#include <stdio.h>
#include <conio.h>
int main()
{
	char ch;
	printf("Enter a Character : ");
	ch=getche();
	printf("\nDecimal Equivalent = %d\n",ch);
	printf("Octal Equivalent = %o\n",ch);
	printf("Hexa-Decimal Equivalent = %X\n",ch);
	return 0;
}
