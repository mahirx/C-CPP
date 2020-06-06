#include <stdio.h>



int main(){
	int total_line, line, highest_star, space, star;
	scanf("%d", &highest_star);


	for (line = 1; line <= highest_star; line = line + 1)
	{
		for (star = 1; star <= line ; star++)
		{
			printf("+");
		}


		for (space = 1; space <= ((2*highest_star)-(line*2)); space++)
			{
				printf(" ");
			}
            

		for (star = 1; star <= line ; star++)
		{
			printf("+");
		}
		printf("\n");
	}


	return 0;
}
