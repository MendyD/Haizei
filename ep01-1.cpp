/*************************************************************************
	> File Name: ep01-1.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course:Multiples of 3 to 5 
	> Created Time: 日 11/18 00:10:40 2018
 ************************************************************************/

#include<iostream>
#define MAX_N 1000
using namespace std;
int main(){
    int sum = 0;
    for(int i = 1; i < MAX_N; i++){
        if(i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    printf("%d\n", sum);

    return 0;
}
