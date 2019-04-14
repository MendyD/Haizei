/*************************************************************************
	> File Name: c_if.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: if判断分数等级 
	> Created Time: 三  1/ 9 16:22:21 2019
 ************************************************************************/

#include<stdio.h>
int main(){
    int x;
    while(scanf("%d", &x) != EOF){
        if(0 == x) {
            printf("FOOLISH\n");
        } else if(x > 0 && x < 60) {
            printf("FAIL\n");
        } else if(x >= 60 && x < 80) {
            printf("MEDIUM\n");
        } else if(x >= 80 && x <= 100){
            printf("GOOD\n");
        } else{
            printf("Wrong Answer\n");
        }    
    }

    return 0;
}
