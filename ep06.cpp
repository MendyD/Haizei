/*************************************************************************
	> File Name: ep06.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course:Sum Square different 
	> Created Time: 五 11/23 20:35:44 2018
 ************************************************************************/

#include<stdio.h>
int main(){
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 1; i <= 100; i++){
        sum1 += i * i;
        sum2 += i;
    }
    //或者sum2看成等差数列求和放到循环外面
    //sum2 = (1 + 100) * 100 / 2;
    //sum2 = 5050;
    printf("%d\n", sum2 * sum2 - sum1);
    return 0;
}
