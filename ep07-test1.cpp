/*************************************************************************
	> File Name: ep07-test1.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 二  1/15 21:41:19 2019
 ************************************************************************/

#include<stdio.h>
#define max_n 200000
int prime[max_n]= {0};

void init(){
    for(int i = 2; i * i <= max_n; i++){
        if(prime[i]) continue;
        for(int j = i + i; j <= max_n; j += i){
            prime[j] = 1;
        }
    }
    int j = 2;
    for(int i = 2; i <= max_n; i++){
        if(prime[i] == 0){
            prime[j] = i;
            j++;
            /*
             * 此处可以选择空余的prime[0]来作为素数个数的标记,
             * 无需再次重新声明一个j
             * prime[++prime[0]] = i;
             */
        }
    }
    return ;
}

int main(){
    init();
    for(int i = 2; i <= 10002; i++){
        printf("prime[%d] = %d\n", i, prime[i]);
    }
    return 0;
}
