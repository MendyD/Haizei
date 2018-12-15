/*************************************************************************
	> File Name: ep02-3.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course:Multiples Fibonacci numbers 
	> Created Time: 四 11/22 21:05:37 2018
 ************************************************************************/

#include<stdio.h>
#define MAX_N 4000000
int main(){
    int fib[3];
    int n = 2;
    fib[0] = fib[1] = 1;
    fib[2] = 2;
    int sum = 0;
    while(fib[(n - 1) % 3] <= MAX_N){
        //n - 2?
        if((fib[(n - 1) % 3] & 1) == 0){
            sum += fib[(n - 1) % 3];
        }
        fib[n % 3] = fib[(n - 2) % 3] + fib[(n - 1) % 3];
        printf("fib[%d] = %d\n",n % 3, fib[n % 3]);
        n++;
    }
    printf("%d\n", sum);
    return 0;
}
