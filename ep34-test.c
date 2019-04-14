
/*************************************************************************
	> File Name: ep34-test.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 二  1/15 18:46:13 2019
 ************************************************************************/

#include<stdio.h>
#define max_n 2540160
int is_curious (int x) {
    int ans = 0;
    int y;
    int a = x;
    while(x){
        int sum = 1;
        y = a % 10;
        a /= 10;
        for(int i = 1; i <= y; ++i){
            sum *= i;
        }
        ans += sum;
    }
    return ans == x;
}
int main(){
    int sum = 0;
    for(int i = 3; i <= max_n; i++){
        if(!is_curious(i)) continue;
        sum += i;
    }
    printf("%d\n", sum);

}
