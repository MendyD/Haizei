/*************************************************************************
	> File Name: ep02-2.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course:Multiples Fibonacci numbers 
	> Created Time: 三 11/21 23:29:46 2018
 ************************************************************************/

#include<stdio.h>
#define MAX_N 4000000
int main(){
    int a = 1, b = 2, c, sum;
    while(b <= MAX_N){
        if((b & 1) == 0) sum += b;
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d\n", sum);
    return 0;
}
