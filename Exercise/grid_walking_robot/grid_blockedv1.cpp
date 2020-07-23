#include <stdio.h>


int main()
{
	int x, y;
	int i, j, n;
	char c;
	int grid[11][11];

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j <11; j++)
		{
			grid[i][j] = 1;
		}
	}

	printf("Please enter the number of blocled cells: ");
	scanf("%d", &n);


	printf("Now enter the cells: ");


	for (i = 1; i <= n; i++)
	{
		scanf("%d %d", &x, &y);
		grid[x][y] = 0;
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


	if (grid[x][y] == 1)
	{
		printf("Latest position:	");
		printf("%d, %d", x, y);
	}


	else{
		printf("%d, %d is not valid.", x, y);
	}



	return 0;
}