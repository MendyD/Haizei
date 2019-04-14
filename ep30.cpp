/*************************************************************************
	> File Name: ep30.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 二  1/ 8 16:31:17 2019
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define max_n 354294
int main(){
    int ans = 0;
    for(int i = 2; i <= max_n; i++){
        int a = i;
        int sum = 0;
        while(a){
            sum += pow(a % 10, 5);
            a /= 10;
        }
        if (sum == i){
           ans += sum; 
        } 
    }
    printf("%d\n", ans);
    return 0;
}
