/*************************************************************************
	> File Name: ep07-test-xx.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 线性筛
	> Created Time: 三  1/16 10:57:40 2019
 ************************************************************************/

#include<stdio.h>
#define max_n 1000000

int prime[max_n + 5] = {0};
void init(){
    for(int i = 2; i <= max_n; i++){
        if(!prime[i]) prime[++prime[0]] = i;
        for(int j = 1; j <= prime[0]; j++){
            if(prime[j] * i > max_n) break;
            prime[prime[j] * i] = 1;
            if(i % prime[j] == 0) break;
        }
    }
    return ;
}
int main(){
    init();
    for(int i = 0; i < 100; i++){
        printf("%d\n", prime[i]);
    }

    printf("%d\n", prime[10003]);
    printf("%d\n", prime[10001]);
    return 0;
}
