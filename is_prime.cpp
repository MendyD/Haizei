/*************************************************************************
	> File Name: is_prime.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 四  1/17 21:00:44 2019
 ************************************************************************/

#include<stdio.h>
#define max_n 1000
int prime[max_n + 5] = {0};
int main(){
    int n;
        for(int i = 2; i <= max_n; i++){
            if(!prime[i]) prime[++prime[0]] = i;
            for(int j = i * 2; j <= max_n; j += i){
                prime[j] = 1;
                if(prime[j] % i == 0) continue;
            }
        }
    for(int i = 2; i < 10; i++){
        printf("%d\n", prime[i]);
    }
    return 0;
    }
