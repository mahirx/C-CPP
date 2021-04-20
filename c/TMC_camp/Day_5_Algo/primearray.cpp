#include <stdio.h>
#include <math.h>
 
int chkprime(int n) {
    int chk = 1, i;
    if (n % 2 == 0 && n != 2) {
        chk = 0;
        return chk;
    }
    for (i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            chk = 0;
            break;
        }
    }
 
    return chk;
}
 
int main() {
    int t;
    scanf("%d", &t);
 
    int prime[1005] = {0};
    prime[0] = 2;
    int num, j;
    for (num = 3, j = 1; ; num += 2) {
        if (chkprime(num)) {
            prime[j++] = num;
            if (j == 1000) {
                break;
            }
        }
    }
 
    while (t--) {
        int n;
        scanf("%d", &n);
 
        printf(">>%d\n", prime[n-1]);
    }
 
 
    return 0;
}
 