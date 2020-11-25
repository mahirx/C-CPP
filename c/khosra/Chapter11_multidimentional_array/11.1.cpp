	#include <stdio.h>


int main(int argc, char const *argv[])
{
	double ara[4][10]={{23,34,45,56,53,56,23,45,56,67},{99,34,45,56,53,56,23,45,57,67},{23,34,45,56,53,56,23,45,56,67},{0,0,0,0,0,0,0,0,0,0}};


	for (int i = 0; i < 10; i++)
	{
		ara[3][i]=(ara[0][i]/4)+(ara[1][i]/4)+(ara[2][i]/2);
		printf("Roll no - %d hs got %lf\n", i+1, ara[3][i]);
	}
	return 0;
}