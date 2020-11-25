#include <stdio.h>


int main(int argc, char const *argv[])
{
	int ara[5]={1,4,6,9,8};
	int i, temp = 1000, j;
	int index;


	for (i = 0; i < 5; i++)
	{
		printf("%d\n",ara[i] );
	}


	for (i = 0; i < 5; i++)
	{
		temp = 10000;
		for (j = i; j < 5; j++)
		{
			if (temp > ara[j])
			{
				temp = ara[j];
				index = j;
			}

			ara[index] = ara[i];
			ara[i] = temp;

		}
	}


	for (i = 0; i < 5; i++)
	{
		printf("%d\n",ara[i] );
	}

	return 0;
}