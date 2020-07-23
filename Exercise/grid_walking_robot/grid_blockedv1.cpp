#include <stdio.h>


int main()
{
	int x, y;
	int i, j;
	char c;
	int grid[11][11]

	for (i = 0; i < 11; i++)
	{
		for (j = 0; i <11; j++)
		{
			grid[i][j] = 1;
		}
	}


	printf("Initial position:	");
	scanf("%d %d", &x, &y);

	while(1)
	{
		scanf("%c", &c);

		if (c == 'S')
		{
			break;
		}

		else if (c == 'U')
		{
			x--;
		}

		else if (c == 'D')
		{
			x++;
		}

		else if (c == 'R')
		{
			y++;
		}

		else if (c == 'L')
		{
			y--;
		}

	}


	printf("Latest position:	");
	printf("%d, %d", x, y);



	return 0;
}