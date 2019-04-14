
/*************************************************************************
	> File Name: ep03-test.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 寻找最大质因子
	> Created Time: 五  1/11 17:31:18 2019
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
int main(){
    int64_t n = 600851475143, x, i;
    for(i = 0; i < 1; i++){
        for(x = 2; x * x <= n; x++){
            if(n % x == 0){
                n /= x;
                x = 1;
            }
            continue;
        }
        printf("%"PRId64"\n", n);
    } 
    return 0;
}
