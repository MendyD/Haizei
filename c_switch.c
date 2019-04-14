/*************************************************************************
	> File Name: c_switch.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 三  1/ 9 17:26:41 2019
 ************************************************************************/

#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    switch(x){
        case 1: printf("one\n"); break;
        case 2: printf("two\n"); break;
        case 3: printf("three\n"); break;
        default: printf("error\n"); break;
    }
    return 0;
}
