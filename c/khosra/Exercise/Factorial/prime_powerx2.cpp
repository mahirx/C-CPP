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
	int num;
	scanf("%d", &num);

	int i;
	int n, r, power;

	for (n = 2; n <= num ; n++)
	{
		power = 0;
		if (is_prime(n) == 1)
		{
			for (i = 1; pow(n, i) <=  num; i++)
			{
				power += (num/(pow(n, i)));
			}
		}

		if (is_prime(n) == 1)
		{
			printf("(%d^%d)\n", n, power);
		}
	}


	return 0;
}