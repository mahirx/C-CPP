#include <stdio.h>


int main(int argc, char const *argv[])
{
	int ara[2][2]={{5,4},{2,1}};


	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d\n", ara[i][j]);
		}
	}
	return 0;
}