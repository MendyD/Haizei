/*************************************************************************
	> File Name: ep34.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 二  1/15 19:30:09 2019
 ************************************************************************/

#include<stdio.h>
#define max_n 2540160
int main(){
    int x;
    int y;
    int sum = 0;
    int ans = 0;
    for(x = 3; x <= max_n; x++){
        int temp = x;
        while(x){
            printf("%d\n", x);
            y = x % 10;
            x /= 10;
            int b = 1;
            for(int j = 1; j <= y; j++){
                b *= j;
            }
            sum += b;
            if(!(sum == temp)) continue;
            printf("%d\n", sum);
        }
        ans += sum;
    }
    printf("%d\n", ans);
    return 0;
}
