/*************************************************************************
	> File Name: ep14-test.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course:枚举 
	> Created Time: 三  1/16 17:11:14 2019
 ************************************************************************/

#include<stdio.h>
#include <inttypes.h>
#define max_n 1000000
int get_length(int64_t x){
    int n = 1;
    if(x == 1) return 1;
    while(x != 1){
        if(x & 1) x = x * 3 + 1;
        else  x >>= 1;
        n++;
    }
    return n;
}

int main(){
    int ans, ans_len = 1;
    for(int i = 1; i <= max_n; i++){
        int temp_len = get_length(i);
        if(temp_len > ans_len){
            ans = i;
            ans_len = temp_len;
        }
    }
    printf("%d(%d)\n", ans, ans_len);
    return 0;
}
