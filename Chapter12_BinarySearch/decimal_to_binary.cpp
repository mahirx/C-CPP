#include <stdio.h>
#include <string.h>
#include <math.h>


int main(int argc, char const *argv[])
{
	int decimal, binary;
	scanf("%d", &decimal);
	//printf("%d\n", decimal);


	int range=0,i, state, temp;

	for(i=0; pow(2, i) <= decimal; i++){
		range=i;
	}
	printf("%d\n", range);

	char ara[range+1];


	for (i = range; i >= 0; i--)
	{
		temp=binary;
		binary+= pow(2, i);

		if (binary<=decimal)
		{
			
			ara[i]='1';
		}
		else{
			binary=temp;
			ara[i]='0';
		}
	}


	

	printf("%s\n", ara);
	return 0;
}