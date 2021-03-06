/*************************************************************************
	> File Name: ep07-test-max.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 二  1/15 22:37:48 2019
 ************************************************************************/

#include<stdio.h>

#define max_n 10000

int prime[max_n] = {0};

int main(){
    for(int i = 2; i * i < max_n; i++){
        if(prime[i]) continue;
        for(int j = i; j <= max_n; j += i){
            prime[j] = i;
        }
    }
    int n;
    while(scanf("%d", &n) != EOF){
        printf("%d\n", prime[n]);
    }
    return 0;
}
