/*************************************************************************
	> File Name: c_printf.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course:只用printf输出一串数字的长度 
	> Created Time: 二  1/ 8 20:43:23 2019
 ************************************************************************/

#include<stdio.h>
int main(){
    int a;
    char str[20];
    freopen("/dev/null", "w", stderr);
    while(scanf("%d", &a) != EOF){
        printf("%d\n", a);
        printf("%d\n", sprintf(str, "%d", a));
        printf("%d\n", fprintf(stderr, "%d", a));
    }

    return 0;
}
