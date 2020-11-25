#include <stdio.h>


int string_length(char str[]){

	int i;
	for (i = 0;  str[i] != '\0' ; i++);
	return i;
}


int main(){
	char str1[]="mahir";
	char str2[]="labiblabib";
	char str3[100];

	int index1=string_length(str1);
	int index2=string_length(str2);
	int index3=index1+index2;

	printf("%d\n", index1);
	printf("%d\n", index2);
	printf("%d\n", index3);

	int i;

	for (i = 0; i < index3; i++)
	{
		if (i < index1)
		{
			str3[i]=str1[i];
		}

		else
		{
			str3[i]=str2[i];
		}
	}

	printf("%s\n", str3);


}
