#include<stdio.h>

int main(){
    long long int n;
    int mod;
    int i = 1;
    int ans;
    printf("Enter a Binary Number\n");
    scanf("%lld" , &n);

    while (n) {
        mod = n % 10;

        ans = ans + mod * i;

        i = i * 2;

        n = n / 10;
    }

    printf("ans = %d\n" , ans);

    return 0;
}