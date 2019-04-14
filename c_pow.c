/*************************************************************************
	> File Name: c_pow.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 三  1/ 9 15:01:50 2019
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
    float a;
    while(scanf("%f", &a) != EOF){
        printf("%.3f\n", pow(a, 1.0 / 3.0));
    }
    return 0;
}
