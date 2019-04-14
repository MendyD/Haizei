/*************************************************************************
	> File Name: ep28-test.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 二  1/15 17:20:31 2019
 ************************************************************************/

#include<stdio.h>
int main(){
    int val1, val2, val3, val4;
    int sum = 0;
    for(int i = 1; i <= 1001; i += 2){
        val1 = i * i;
        val2 = val1 - i + 1;
        val3 = val2 - i + 1;
        val4 = val3 - i + 1;
        sum += val1 + val2 + val3 + val4;
    }
    printf("%d\n", sum - 3);
    return 0;
}
