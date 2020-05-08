#include <stdio.h>


int main()
{
	int i, j;
	int table[10][10];


	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			table[i][j]=(i+1)*(j+1);
		}
	}


for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d	", table[i][j]);
		}
		printf("\n");
	}


	return 0;
}
