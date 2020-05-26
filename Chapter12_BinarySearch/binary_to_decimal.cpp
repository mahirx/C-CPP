#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
	char n[1000];
	gets(n);
	int len=strlen(n);
	int i, position=len-1, decimal=0;
	//printf("%d\n", len);



	for (i = 0; i < len; i++)
	{
		decimal=decimal+pow(2,position);
		position--;
	}

	printf("Decimal value is %d\n", decimal);
}