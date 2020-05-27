#include <stdio.h>
#include <string.h>
#include <math.h>


int main(int argc, char const *argv[])
{
	int decimal, range, i, number=0, temp;
	scanf("%d", &decimal);


	for(i=0; pow(2, i) <= decimal; i++){
		range=i;
	}
	printf("%d\n", range);


	char binary[range+1];

	


	printf("%s\n", binary);

	return 0;
}