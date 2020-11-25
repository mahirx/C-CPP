#include <stdio.h>


int main(){
	int a=42,b=12,t,gcd;
	while(b!=0){
		t=b;
		b=a%b;
		a=t;
	}
	printf("%d\n", a);
}