#include <stdio.h>


int main(){
	char country[]="Bangladesh";
	//printf("%s\n", country);


	for (int i = 0; i < 10; i++)
	{
		if (country[i]>=97 && country[i]<=122)
		{
			//country[i]=country[i]-32;
			country[i]='A'+(country[i]-'a')
		}
	}


	printf("%s\n", country);

}