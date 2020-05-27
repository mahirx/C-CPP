#include <stdio.h>

int main()
{
	double loan, rate, years, totalamount,montlyamount;
	
	printf("Enter the amount of loan\n");
	scanf("%lf", &loan);

	printf("Enter the amount of rate\n");
	scanf("%lf", &rate);

	printf("Enter the amount of years\n");
	scanf("%lf", &years);

	totalamount=loan+loan*rate*years/100;

	montlyamount=totalamount/(years*12);

	printf("Totalamount = %lf\n", totalamount);
	printf("Montlyamount = %lf\n", montlyamount);


	return 0;
}