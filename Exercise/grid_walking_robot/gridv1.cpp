#include <stdio.h>


int main()
{
	int x, y;
	char c;


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
	printf("%d %d", x, y);



	return 0;
}