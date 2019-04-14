/*************************************************************************
	> File Name: ep05-test.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 二  1/15 19:45:17 2019
 ************************************************************************/

#include<stdio.h>
int gcd(int x, int y){
    if(x % y == 0) return y;
    return gcd(y, x % y);
}
int lcm(int x, int y){
    return  x / gcd(x, y) * y;//此处先除后乘避免乘数过大
}
int main(){
    int ans = 1;
    for(int i = 1; i <= 20; i++){
        if(ans % i == 0) continue;
        ans = lcm(ans, i);
    }
    printf("%d\n", ans);
    return 0;
}
