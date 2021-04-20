#include <stdio.h>


int main(int argc, char const *argv[])
{
	int x, y;
	scanf("%d %d", &x, &y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("%d %d\n", x, y);
	return 0;
}