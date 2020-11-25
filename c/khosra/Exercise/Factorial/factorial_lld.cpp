#include <stdio.h>


int main(int argc, char const *argv[])
{
	long long int f = 1, i, j;
	// int j;
	scanf("%lld", &j);


	if (j == 0)
	{
		f=1;
	}


	else{
		for (i = 1; i <= j; i++)
		{
			f = f * i;
		}
	}


	printf("%lld\n", f);


	return 0;
}