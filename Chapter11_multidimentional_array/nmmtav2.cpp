#include <stdio.h>


int main()
{
	int i, j, sum=0;
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
			sum = sum + table[i][j];
		}
	}

	printf("%d\n", sum);


	return 0;
}
