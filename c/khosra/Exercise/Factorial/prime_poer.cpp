#include <stdio.h>
#include <math.h>


int is_prime(int n){


	if(n == 2){
		return 1;
	}

	else
	{
		for (int i = 2; i <= (sqrt(n)); i++)
		{
		if ((n%i) == 0)
			{
				return 0;
				break;
			}
		}
	}


	return 1;
}



int main(int argc, char const *argv[])
{
	int n, r = 0, d, state=1, j, k, i;
	// int test;
	// scanf("%d", &test);
	// if (1 == is_prime(test))
	// {
	// 	printf("%d\n", test);
	// }

	scanf("%d", &n);


	for (i = 2; i <= n; i++)
	{
		if (1 == is_prime(i))
			{
				for (j = 2, d=j; j <= n; j++)
				{
					while(r==0){
						r=d%i;
						d=d/i;
						state = state + 1;

					}
				}

				printf("(%d, %d)\t", i, state);
				state = 1;
			}



		// printf("(%d, %d)\t", i, state);
		// state = 0;
	}
	return 0;
}
