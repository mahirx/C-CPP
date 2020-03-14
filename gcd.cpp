#include <stdio.h>


int main(){
	int a,b,gcd;
	scanf("%d %d", &a, &b);
	

	if(a>b){
		int l=b;
		b=a;
		a=l;
	}


	while(a!=0){
		gcd=a;
		a=b%a;
		b=gcd;
	}


	printf("%d\n", gcd);

}