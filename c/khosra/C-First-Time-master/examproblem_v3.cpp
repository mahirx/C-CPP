#include <stdio.h>


int main(){
	int i;
	int total_marks[]={67,78,67,56,78,89,78,78,89,89,89,78,67,67,68,87,88,99,78,78,89,90,67,78,89,67,78,89,67,78,89,67,89,78,79,79,79,78,100,67};
	int marks_count[101];

	for (int i = 0; i < 101; i++)
	{
		marks_count[i]=0;
	}

	for (int i = 0; i < 40; i++)
	{
		marks_count[total_marks[i]]++;
    for(int j=0; j<=40;j++){
      printf("%d", marks_count[j]);
    }
    printf("\n");
	}

	for (int i = 50; i <= 100; i++)
	{
		printf("Marks: %d Count: %d\n", i, marks_count[i]);
	}


	return 0;




}
