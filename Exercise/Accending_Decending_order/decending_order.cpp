#include <stdio.h>


int main(){
  int ara1[5]={1,4,6,9,8};
  int ara2[5];
  int i, temp = 0, j;
 

  for (i  = 0; i < 5; i++) {
    printf("%d\n",ara1[i] );
  }

  	for (i = 0; i < 5; i++)
  	{
  		for (j = i; j < 5; j++)
  		{
  			if (temp < ara1[j])
  			{
  				temp = ara1[j];
  			}
  		}
  		ara2[i] = temp;
  		temp = 0;
  	}

	for (i  = 0; i < 5; i++) {
    	printf("%d\n",ara2[i] );
  	} 

  return 0;
}
