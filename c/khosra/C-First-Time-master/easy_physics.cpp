#include <stdio.h>

int main(){
	double u,a,t,v,s;
	

	printf("initial velocity (u) = ");
	scanf("%lf", &u);


	printf("acceleration (a) = ");
	scanf("%lf", &a);


	printf("time (t) = ");
	scanf("%lf", &t);

	v=u+a*t;

	s=2*t*v;

	printf("soron in 2t (s) = %lf m\n", s );
	
}