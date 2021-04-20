#include <stdio.h>


int GCD(int a, int b)
{
	if (a == 0)
	{
		return b;
	}

	else{
		return GCD(b%a, a);
	}
}


int main(int argc, char const *argv[])
{
	int n,m;
	scanf("%d %d", &m, &n);
	printf("%d\n", GCD(m,n));

	return 0;
}