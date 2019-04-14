/*************************************************************************
	> File Name: c_arr_binary_search.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 三  1/ 9 18:36:39 2019
 ************************************************************************/

#include<stdio.h>
int binary_search(int arr[], int x, int n){
    int head = 0;
    while(n){
        if(arr[(n - 1 + head) / 2] == x){
            return (n + head) / 2;
        } else if(arr[(n - 1 + head) / 2] > x){
            n = (n + head) / 2;
        } else if(arr[(n - 1 + head) / 2] < x){
            head = (n + head) / 2;
        }
    }
    return 0;
}
int main(){
    int arr[10];
    int a;
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    while(~scanf("%d", &a)){
        printf("%d\n", binary_search(arr, a, 10));
    }
    return 0;
}
