#include <stdio.h>


int main(){
  int ara1[5]={1,4,6,9,8};
  int ara2[5];
  int index_2, minium_index;
  int i = 0, minium;
 

  for (i  = 0; i < 5; i++) {
    printf("%d\n",ara1[i] );
  }

  	for (index_2 = 0; index_2 < 5; index_2++)
  	{
  		minium = 10000;

      for (i = 0; i < 5; i++)
      {
        if (ara1[i] < minium)
        {
          minium = ara1[i];
          minium_index = i;
        }
      }

      ara2[index_2] = minium;
      ara1[minium_index] = 1000;
  	}

	for (i  = 0; i < 5; i++) {
    	printf("%d\n",ara2[i] );
  	} 

  return 0;
}
