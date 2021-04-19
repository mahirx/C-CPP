#include <stdio.h>
#include <math.h>


int fact(int n)
{
	if (n == 0)
	{
		return 1;
	}

	else
	{
		return (fact(n-1)*n);
	}
}



int main(int argc, char const *argv[])
{
	int i;
	scanf("%d", &i);
	printf("%d\n", fact(i));
	return 0;
}