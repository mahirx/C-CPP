#include <stdio.h>


int main(){
	for (int a = 1; a <= 3; a++)
	{
		/* code */
		for(int b=1; b<=3; b++){
			if (b!=a)
			{
				/* code */
				for (int c = 1; c<=3 ; c++)
				{
				/* code */
					if (c!=a&&c!=b)
					{
						/* code */
						printf("%d %d %d\n", a, b, c);
					}
				}
			}
		}
	}
}