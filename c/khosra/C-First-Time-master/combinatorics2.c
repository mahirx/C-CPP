#include <stdio.h>


int main(){
	for (int a = 1; a <= 10; a++)
	{
		for(int b=1; b<=10; b++){
			for (int c = 1; c<=10 ; c++)
				{
						if (b!=a && c!=a && c!=b )
						{
							/* code */
							printf("%d %d %d\n", a, b, c);
						}
				}
		
		}
	}
}

