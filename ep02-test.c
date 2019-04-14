/*************************************************************************
	> File Name: ep02-test.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 五  1/11 16:17:03 2019
 ************************************************************************/

#include<stdio.h>
#define MAX_N 4000000


int main() {
    int fib[3];
    fib[0] = 1, fib[1] = 2;
    int sum = 2;
    for(int n = 2; fib[(n - 2) % 3] <= MAX_N; n++){
        fib[n % 3] = fib[(n - 1) % 3] + fib[(n - 2) % 3];
        printf("fib[%d] = %d\n", n % 3, fib[n % 3]);
        if((fib[n % 3] & 1) == 0) {
            sum += fib[n % 3];
        }
    }
    printf("%d\n", sum);

    return 0;
}

