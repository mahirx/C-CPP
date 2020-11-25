#include <stdio.h>


int string_length(char str[]){

	int i=0;
	//for (i = 0;  str[i] != '\0' ; i++);
  while (str[i] != '\0') {
    i++;
  }
	return i;
}


int main(){
	char country[]="bangladesh";

	int l=string_length(country);
	printf("%d\n", l);
}
