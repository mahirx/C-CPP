#include <stdio.h>
#include <string.h>
#include <math.h>


int main(int argc, char const *argv[])
{
	int decimal, binary;
	scanf("%d", &decimal);
	//printf("%d\n", decimal);


	int range=0,i, state;

	for(i=0; pow(2, i) <= decimal; i++){
		range=i;
	}
	//printf("%d\n", range);

	char ara[range];

	for(i=range; i >= 0; i--){
		state=binary;
		binary += pow(2, i);

		if (binary>decimal)
		{
			binary=state;
			ara[i]=='0';
		}

		else{
			ara[i]=='1';
		}
	}


	printf("%s\n", ara);
	return 0;
}