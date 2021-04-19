#include <stdio.h>
#include <math.h>
#include <conio.h>



int checkPrimeNumber(int n) {
    int j, flag = 1;
    for (j = 2; j <= n / 2; ++j) {
        if (n % j == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}


int perfectCube(int N)
{
    for (int i = 1; i < N; i++) {
  
        // If cube of i is equals to N
        // then print Yes and return
        if (i * i * i == N) {
            // printf("Yes");
            return 1;
        }
    }
  
    // No number was found whose cube
    // is equal to N
    // printf("No");
    return 0;
}


int main(int argc, char const *argv[])
{
	int l;

	for (int i = 2; i <= 10000; i++)
	{
		if (checkPrimeNumber(i) == 1)
		{
			l=16*i+1;
			// printf("%d\n", l);

			if (perfectCube(l) == 1)
			{
				printf("%d	>> %d\n", l, i);
			}
		}
	}
	return 0;
}