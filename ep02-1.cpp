/*************************************************************************
	> File Name: ep02-1.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course:Even Fibonacci numbers 
	> Created Time: 三 11/21 21:43:41 2018
 ************************************************************************/

#include<stdio.h>
#define MAX_N 4000000
int main(){
    int fib[40]={0};
    int n = 2;
    int sum = 0;
    fib[0] = 1, fib[1] = 2;
    while(fib[n - 1] + fib[n - 2] <= MAX_N){
        fib[n] = fib[n - 1] + fib[n - 2];
        n++;
    }
    for(int i = 0; i < n; i++){
        if(fib[i] & 1) continue;
        sum += fib[i];
    }
    printf("%d\n", sum);

    return 0;
}
