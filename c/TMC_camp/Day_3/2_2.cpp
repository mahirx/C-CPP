#include <stdio.h>


int main(int argc, char const *argv[])
{
	long long int sum=0;


	for (long long int i = 2; i <= 38; i=i+2)
	{
		sum = sum + (i*(i+1));
	}

	printf("%lld\n", sum);
	return 0;
}