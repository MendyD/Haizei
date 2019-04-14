/*************************************************************************
	> File Name: ep08.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 三  1/16 16:14:11 2019
 ************************************************************************/

#include<stdio.h>
#include <inttypes.h>
#include "8.h"


int main(){
    int64_t p = 1, zero = 0, ans = 0;
    for(int i = 0; num[i]; i++){
        if(num[i] == '0'){
            zero++;
        } else {
            p *= (num[i] - '0');
        }
        if(i >= 13){
            if(num[i - 13] == '0'){
                zero--;
            } else {
                p /= (num[i - 13] - '0');
            }
        }
        if(zero == 0 && p > ans){
            ans = p;
        }
    }
    printf("%"PRId64"\n", ans);
    return 0;
}
