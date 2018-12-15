/*************************************************************************
	> File Name: ep04-1.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
    > Course:Largest Palindrome product
	> Created Time: 五 11/23 19:29:22 2018
 ************************************************************************/

#include<stdio.h>
int is_palindrome(int a){
    int b = a, x = 0;
    while(a){
        x = x * 10 + a % 10;
        a /= 10;
    }
    return b == x;
}
int main(){
    int ans = 0;
    for(int i = 100; i < 1000; i++){
        for(int j = i; j < 1000; j++){
            if(!is_palindrome(i * j)) continue;
            if(ans < i * j) ans = i * j;
        }
    }
    printf("%d\n", ans);
    return 0;
}
