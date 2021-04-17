#include <stdio.h>


int main(int argc, char const *argv[])
{
	int m;


	scanf("%d", &m);


	if (m % 2 == 1)
	{
		printf("%d is odd\n", m);
	}

	else 
	{
		printf("%d is even\n", m);
	}
	return 0;
}