#include <stdio.h>



int string_length(char country[]){
	int i=0, l=0;
	for (int i = 0; country[i] != '\0' ; i++)
	{
		l++;
	}

	printf("%d\n", l);
	printf("%d\n", i);
	return l;
}

int main(){
	char country[]="Bangladesh";
	//printf("%s\n", country);


	for (int i = 0; i <= string_length(country); i++)
	{
		if (country[i]>=97 && country[i]<=122)
		{
			//country[i]=country[i]-32;
			country[i]='A'+(country[i]-'a');
		}
	}


	printf("%s\n", country);

}
