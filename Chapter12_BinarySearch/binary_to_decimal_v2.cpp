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

	// binary[0]='1';
	// binary[1]='1';
	// binary[2]='1';
	// binary[3]='0';
	// binary[4]='1';
	// binary[5]='0';
	// binary[6]='1';


	for(i=range; i >= 0; i--){
		// printf("%d\n", i);
		temp=number;
		number=number+pow(2, i);
		if (number <= decimal)
		{
			binary[range-i]='1';
		}
		else{
			binary[range-i]='0';
			number=temp;
		}

	}


	printf("%s\n", binary);

	return 0;
}