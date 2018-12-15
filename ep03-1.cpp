/*************************************************************************
	> File Name: ep03-1.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course:Largest Prime Factors 
	> Created Time: 五 11/23 18:13:09 2018
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
int main(){
    int64_t num = 600851475143, x = 2, prime_factors;
    while(x * x <= num){
        if(num % x){
            x++;
            continue;
        }//如果除尽则向下，若未除尽则x++向下
        prime_factors = x;
        while(!(num % x)){
            num /= x;//反复连除
        }
        x++;
    }
    if (num - 1) prime_factors = num;
    printf("%" PRId64 "\n", prime_factors);
    return 0;
}
