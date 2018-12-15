/*************************************************************************
	> File Name: ep02-4.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course:Multiples Fibonacci numbers 
	> Created Time: 五 11/23 17:13:47 2018
 ************************************************************************/

#include<stdio.h>
#define MAX_N 4000000
int main(){
    int fib[2] = {1, 1}, n = 2, sum = 0;
    while(fib[(n - 1) % 2] <= MAX_N){
        if((fib[(n - 1) % 2] & 1) == 0) sum += fib[(n - 1) % 2];
        fib[n % 2] = fib [(n - 1) % 2] + fib [n % 2];
        n++;
    }
    printf("%d\n", sum);
    return 0;
}
