/*************************************************************************
	> File Name: ep01-2.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 日 11/18 00:17:21 2018
 ************************************************************************/
#include<stdio.h>
int main(){
    int sum3 = (3 + 999) * 333 / 2;
    int sum5 = (5 + 995) * 199 / 2;
    int sum15 = (15 + 990) * 66 / 2;
    printf("%d\n", sum3 + sum5 - sum15);
    return 0;
}
