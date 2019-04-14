/*************************************************************************
	> File Name: c_function.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 四  1/10 20:58:38 2019
 ************************************************************************/

#include<stdio.h>
int func(int k, int b, int x){
    return  k * x + b;
}

int main(){
    int k, b;
    scanf("%d %d", &k, &b);
    printf("y = %d * x + %d\n", k, b);
    for (int i = 1; i <= 100; i++) {
        printf("x = %d, %d * %d + %d = %d\n", i, k, i, b, func(k, b, i));
    }
    return 0;
}
