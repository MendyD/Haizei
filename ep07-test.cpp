/*************************************************************************
	> File Name: ep07-test.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 二  1/15 20:31:30 2019
 ************************************************************************/

#include<stdio.h>
#define max_n  200000
int prime[max_n + 5] = {0};
int main(){
    for(int i = 2; i * i < max_n; i++){
        if(!prime[i]){
            for(int j = 2 * i; j <= max_n; j += i){
                if(!prime[i]) prime[j] = 1;
            }
        }
    }
    int count = 0;
    int i = 1;
    while(count != 10001){
        ++i;
        if(prime[i] == 0){
            count++;
        }
    }
    printf("%d\n", i);
    return 0;
}
