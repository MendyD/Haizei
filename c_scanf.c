/*************************************************************************
	> File Name: c_scanf.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 二  1/ 8 21:33:36 2019
 ************************************************************************/

#include<stdio.h>
int main(){
    char str[20] = {0};
    char err[20] = {0};
    while(scanf("%[^\n]s", str) != EOF){
        getchar();
        printf("%d\n", sprintf(err, "%s", str));
    }
    return 0;
}
