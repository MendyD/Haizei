/*************************************************************************
	> File Name: ep04-palindrome_product.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course:Largest Palindrome product 
	> Created Time: 五 11/23 19:37:29 2018
 ************************************************************************/

#include<stdio.h>
bool check(int a){
    int b = a, x = 0;
    while(a){
        x = x * 10 + a % 10;
        a /= 10;
    }
    return b == x;
}

int main(){
    int32_t palindrome_product = 0;
    for(int i = 1; i < 1000; i++){
        for(int j = i; j < 1000; j++){
            if(check(i * j)){
                printf("%d * %d = %d\n", i, j, i * j);
            }
        }
    }
    return 0;
}
