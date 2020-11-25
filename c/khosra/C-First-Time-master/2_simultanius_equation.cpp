#include <stdio.h>


int main(){
	
	printf("a1x + b1y = c1\na2x + b2y = c2\n");
	
	double a1,b1,c1,a2,b2,c2,x,y,d;
	
	printf("a1\n");
	scanf("%lf",&a1);
	
	printf("a2\n");
	scanf("%lf",&a2);
	
	printf("b1\n");
	scanf("%lf",&b1);
	
	printf("b2\n");
	scanf("%lf",&b2);

	printf("c1\n");
	scanf("%lf",&c1);

	printf("c2\n");
	scanf("%lf",&c2);

	d=(a1*b2-a2*b1);

	//printf("%lf \n", d);

	if((int)d==0){
		printf("x and y can't be determined\n");
	}
	else{
		x=(c1*b2 - c2*b1)/d;
		y=(c2*a1- c1*a2)/d;

		printf("%lf %lf %lf %lf %lf %lf\n", a1,b1,c1,a2,b2,c2);
		printf("%lf %lf\n", x,y);
	}

	x=(c1*b2 - c2*b1)/d;
	y=(c2*a1- c1*a2)/d;


	//printf("%lf %lf %lf %lf %lf %lf\n", a1,b1,c1,a2,b2,c2);
	//printf("%lf %lf\n", x,y);



	//printf("%lf %lf %lf %lf %lf %lf\n", a1,b1,c1,a2,b2,c2);
	//printf("%lf %lf\n", x,y);

}