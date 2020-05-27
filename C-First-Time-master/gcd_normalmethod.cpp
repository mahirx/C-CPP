#include <stdio.h>


int main(){
	int a,b,x,gcd;
	scanf("%d %d", &a, &b);
	
	if(a<b){
		x=a;
	}
	else{
		x=b;
	}


	for (; 1 <= x; x--)
	{
		/* code */
		if (a%x==0 && b%x==0)
		{
			/* code */
			gcd=x;
			break;
		}
	}

	printf("%d\n", gcd);



}