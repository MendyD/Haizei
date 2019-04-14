/*************************************************************************
	> File Name: c_define.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 三  1/ 9 19:40:53 2019
 ************************************************************************/

#include<stdio.h>
#define S(a, b) (a) * (b)
#define A(a, b) ((a) + (b))
#define P(a, b) a + b
int main(){
    printf("%d\n", S(3, 4));
    printf("%d\n", S(2 + 1 + 2, 3));
    printf("%d\n", 2 * A(4, 5));
    printf("%d\n", A(4, 5) * 2);
    return 0;
}
