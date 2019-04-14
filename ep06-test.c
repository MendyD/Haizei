/*************************************************************************
	> File Name: ep06-test.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 日  1/13 22:19:32 2019
 ************************************************************************/

#include<stdio.h>
int main(){
    int sum1 = 0;
    int sum2 = 0;

    for(int i = 1; i <= 100; i++){
        sum1 += i * i;
        sum2 += i;
    }
    printf("%d\n", sum2 * sum2 - sum1);
    return 0;
}
