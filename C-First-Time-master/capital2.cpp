#include <stdio.h>


int main(){
	char country[]="Bangladesh";
	//printf("%s\n", country);


	for (int i = 0; i < 10; i++)
	{
		if (country[i]>='A' && country[i]<='Z')
		{
			//country[i]=country[i]-32;
			country[i]='a'+(country[i]-'A');
		}
	}


	printf("%s\n", country);

}