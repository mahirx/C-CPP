#include <stdio.h>
#include <string.h>
#include <math.h>


int main(int argc, char const *argv[])
{
	int decimal, r, d, i, range;

	scanf("%d", &decimal);

	d=decimal;

	for(i=0; pow(2, i) <= decimal; i++){
		range=i;
	}
	// printf("%d\n", range);


	char binary[range+1], temp[range+1];


	for (i = 0; i <= range; i++)
	{
		r=d%2;
		if (r==0)
		{
			binary[i]='0';
		}
		else{
			binary[i]='1';
		}

		d=d/2;
	}

	for (i = 0; i <= range ; i++)
	{
		temp[i]=binary[i];
	}

	for (i = 0; i <= range ; i++)
	{
		binary[(range-i)]=temp[i];
	}


	printf("%s\n", binary);
	return 0;
}