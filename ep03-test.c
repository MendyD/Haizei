/*************************************************************************
	> File Name: ep03-test.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 五  1/11 17:31:18 2019
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
int prime(){
    return 0;
} 
int main(){
    int64_t n = 600851475143, ans, x, vect = 0;
    for(x = 2; x * x < n; x++){
        if(n % x == 0){
            ans = x;
            vect++;
        }
        continue;
    }
    printf("%"PRId64"\n", ans);
    return 0;
}
