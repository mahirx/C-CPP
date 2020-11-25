#include <stdio.h>


int main(){
	//int ft_marks[40], st_marks[40], final_marks[40];
	double total_marks[40];
	double large=0, low;
	int n=0;

	int ft_marks[]={86, 45, 73, 48, 5, 21, 20, 51, 8, 97, 41, 18, 24, 31, 62,
	 22, 30, 88, 87, 33, 80, 11, 25, 72, 56, 39, 89, 26, 13, 52, 46, 2, 38, 67, 43, 99, 49, 34, 79, 65};
	

	int st_marks[]={5, 29, 84, 47, 71, 35, 69, 49, 3, 63, 32, 74, 58, 61, 10,
	 53, 26, 23, 20, 98, 48, 18, 28, 43, 90, 15, 55, 81, 95, 37, 78, 17, 24, 99, 77, 67, 75, 51, 31, 50};
	

	int final_marks[]={69, 50, 53, 62, 7, 61, 74, 83, 98, 10, 51, 63, 19, 58, 73, 4,
	  54, 17, 52, 41, 45, 21, 87, 78, 35, 95, 81, 76, 49, 82, 22, 24, 2, 32, 70, 84, 42, 18, 43, 33};


	for (int i = 0; i < 40; i++)
	{
		/* code */
		total_marks[i]=ft_marks[i]/4.0+st_marks[i]/4.0+final_marks[i]/2.0;

	}

	for (int i = 0; i < 40; i++)
	{
		/* code */
		printf("Roll No %d\ttotal_marks %lf\n", i+1,total_marks[i]);

	}

	for (int i = 0; i < 40; i++)
	{
		/* code */
		if (large<=total_marks[i])
		{
			/* code */
			large=total_marks[i];
		}
	}
	low=large;
	for (int i = 0; i < 40; i++)
	{
		if (low>=total_marks[i])
		{
			/* code */
			low=total_marks[i];
		}
	}

	printf("%lf %lf\n", large, low);

	for (int count = low; count <= large; count++)
	{
		/* code */
		for (int i = 0; i < 40; i++)
		{
			
			if (total_marks[i]==count)
			{
				
				n++;

			}
		}
		printf("%lf\t%d\n", count, n);
		n=0;
		printf("%lf\n", count);
	}

	
}
