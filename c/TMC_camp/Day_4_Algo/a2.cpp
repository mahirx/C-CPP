#include <stdio.h>


int main(int argc, char const *argv[])
{
	int a[10][10];

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			scanf("%d", &a[i]);
		}
	}


	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d\t", a[i]);
		}
		printf("\n");
	}




	return 0;
}