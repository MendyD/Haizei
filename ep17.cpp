/*************************************************************************
	> File Name: ep17.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 三  1/16 18:46:59 2019
 ************************************************************************/

#include<stdio.h>
int get_letter_length(int x){
    static int arr1[20] = {0, 3, 3, 5, 4, 4, 3 ,5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8};//20以内
    static int arr2[10] = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6};//十进制20，30...
    if(x < 20) {
        return arr1[x];
    } else if(x < 100) {
        return arr2[x / 10] + arr1[x % 10];
    } else if(x < 1000) {
        if(x % 100 == 0){
            return arr1[x / 100] + 7;
        }
        return arr1[x / 100] + 10 + get_letter_length(x % 100);
    } else {
        return 11;
    }
}

int main(){
    
    int ans = 0;
    for(int i = 0; i <= 1000; i++){
        ans += get_letter_length(i);
    }
    printf("%d\n", ans);
    return 0;
}
