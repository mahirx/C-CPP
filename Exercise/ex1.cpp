#include <stdio.h>



int main(){
	int q,i, j;
	scanf("%d", &q);


	for (i = q; i >= 2; i--)
	{
		for ( j = 1; j <=i ; j++)
		{
			printf("c");
		}
		printf("\n");
	}


	for (i = 1; i <= q; i++)
	{
		for ( j = 1; j <=i ; j++)
		{
			printf("c");
		}
		printf("\n");
	}


	return 0;
}