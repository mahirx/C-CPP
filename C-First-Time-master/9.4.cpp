#include <stdio.h>



int string_length(char country[]){
	int i=0, length=0;
	for (int i = 0; country[i] != '\0' ; i++)
	{
		length++;
	}
	return length;
}

int main(){
	char country[100];
	int length;

	while(1==scanf("%s", country)){
		length=string_length(country);
		printf("length: %d\n", length);
		printf("%s\n", country);
	}

	return 0;
}
