#include <stdio.h>



int main(){
	int total_line, line, highest_star, space, star;
	scanf("%d", &highest_star);


	for (line = highest_star ; line >= 2; line--)
	{
		for (star = 1; star <= line ; star++)
		{
			
			printf("+");
		}
		printf("\n");
	}


	for (line = 1; line <= highest_star; line++)
	{
		for (star = 1; star <= line ; star++)
		{
			printf("+");
		}
		printf("\n");
	}


	return 0;
}