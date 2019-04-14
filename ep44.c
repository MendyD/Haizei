/*************************************************************************
	> File Name: ep44.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 六 12/22 09:59:28 2018
 ************************************************************************/

#include<stdio.h>
int pentagonal(int n){
    return n * (3 * n - 1) / 2;
}

int is_pentagonal(int x){
    int head = 0;
    int tail = 10000;
    int mid;
    while(tail > head){
        mid = (head + tail) >> 1;
        if(pentagonal(mid) == x) return 1;
        if(pentagonal(mid) > x) {
            tail = mid - 1;
        } else {
            head = mid + 1;
        }
    }
    return 0;
}
int main(){

    return 0;
}
