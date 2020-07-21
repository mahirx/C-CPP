#include <stdio.h>


int main(){
  int ara[5]={1,4,6,9,8};
  int i, temp = 100, j;
  int ara2[5];

  for (i  = 0; i < 5; i++) {
    printf("%d\n",ara[i] );
  }

  for (i = 0; i < 5; i++)
  {
  	for (j = i; j < 5; j++)
  	{
  		if (ara[j] < temp)
  		{
  			temp = ara[j];
  			ara2[i] = temp; 
  		}
  	}
  }

	for (i  = 0; i < 5; i++){
    	printf("%d\n",ara2[i] );
  	} 

  return 0;
}
