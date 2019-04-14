/*************************************************************************
	> File Name: ep45.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 六 12/22 11:07:56 2018
 ************************************************************************/

#include<stdio.h>
#define TRAIL 1000000000
int triangle(int n){
    return n * (n + 1) / 2;
}
int pentagonal(int n){
    return n * (3 * n - 1) / 2;
}
int hexagonal(int n){
    return n * (2 * n - 1);
}

int is_triangle(int x){
    int head = 1; 
    int tail = TRAIL;
    int mid;
    while(head <= tail){
        mid = (head + tail) >> 1;
        if(triangle(mid) == x) return 1;
        if(triangle(mid) < x) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}

int is_pentagonal(int x){
    int head = 1;
    int tail = TRAIL;
    int mid;
    while(head <= tail){
        mid = (head + tail) >> 1;
        if(pentagonal(mid) == x) return 1;
        if(pentagonal(mid) < x) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}

int is_hexagonal(int x){
    int head = 1; 
    int tail = TRAIL;
    int mid;
    while(head <= tail){
        mid = (head + tail) >> 1;
        if(hexagonal(mid) == x) return 1;
        if(hexagonal(mid) < x) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}


int main(){
    int i = 1;
    int j = 1;
    do{
        
    }while();
    return 0;
}
