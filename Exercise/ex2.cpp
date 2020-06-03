#include <stdio.h>



int main(){
	int q,i, j, t;
	scanf("%d", &q);


	for (i = q, t = q; i >= 2; i--, t=t-2)
	{
		for ( j = 1; j <=(q-t)/2 ; j++)
		{
			printf(" ");
		}
		for ( j = 1; j <= t ; j++)
		{
			printf("c");
		}
		printf("\n");
	}


	for (t = 1 ; i <= q; i++, t=t+2)
	{
		for ( j = 1; j <=(q-t)/2 ; j++)
		{
			printf(" ");
		}
		for ( j = 1; j <= t ; j++)
		{
			printf("c");
		}
		printf("\n");
	}


	return 0;
}