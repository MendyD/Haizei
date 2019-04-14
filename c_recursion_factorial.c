/*************************************************************************
	> File Name: c_recursion_factorial.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 用递归实现阶乘
	> Created Time: 四  1/10 21:16:36 2019
 ************************************************************************/

#include<stdio.h>
int factorial(int n) {
    //if(n == 1) return n;
    //return factorial(n - 1) * n;
    while(n != 1){
        return factorial(n - 1) * n;
    }
    return n;
}
int main() {
    int n;
    while (~scanf("%d", &n)){
        printf("%d\n", factorial(n));
    }
    return 0;
}
