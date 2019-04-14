/*************************************************************************
	> File Name: ep10.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 三  1/16 16:25:56 2019
 ************************************************************************/

#include<stdio.h>
#include <inttypes.h>
#define max_n 2000000
int prime[max_n + 5] = {0};

int main(){
    int64_t ans = 0;
    for(int i = 2; i <= max_n; i++){
        if(!prime[i]) prime[++prime[0]] = i;
        for(int j = 1; j <= prime[0]; j++){
            if(prime[j] * i > max_n) break;
            prime[prime[j] * i] = 1;
            if(i % prime[j] == 0) break;
        }
    }
    
    for(int i = 1; i <= prime[0]; i++){
        ans += prime[i];
    }
    printf("%"PRId64"\n", ans);
    return 0;
}
