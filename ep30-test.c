/*************************************************************************
	> File Name: ep30-test.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 二  1/15 18:06:10 2019
 ************************************************************************/

#include<stdio.h>
#include <math.h>
int main(){
    int a, b, c, d, e, f;
    int sum = 0;
    for(int i = 2; i <= 354294; i++){
        a = i % 10;
        b = i / 10 % 10;
        c = i / 100 % 10;
        d = i / 1000 % 10;
        e = i / 10000 % 10;
        f = i / 100000 % 10;
        if(pow(a, 5) + pow(b, 5) + pow(c, 5) + pow(d, 5) + pow(e, 5) + pow(f, 5) == i){
            printf("%d %d %d %d %d %d\n", f, e, d, c, b, a);
            sum += i;
            printf("%d\n", i);
        }
    }
    printf("%d\n", sum);
    
    return 0;
}
