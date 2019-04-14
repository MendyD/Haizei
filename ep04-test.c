/*************************************************************************
	> File Name: ep04-test.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course:回文数 
	> Created Time: 日  1/13 21:57:37 2019
 ************************************************************************/

#include<stdio.h>
int is_palindrom(int n){
    int a = n, b = 0;
    while(a){
        b = b * 10 + (a % 10);
        a /= 10;
    }
    return n == b;


}
int main(){
    int ans = 0;
    for(int i = 100; i <= 999; i++){
        for(int j = 100; j <= 999; j++){
            if(!is_palindrom(i * j)) continue;
            if(ans < i * j) ans = j * i;
        }
    }
    printf("%d\n", ans);
    
    return 0;
}
