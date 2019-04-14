/*************************************************************************
	> File Name: c_arr_scanf.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 三  1/ 9 19:08:23 2019
 ************************************************************************/

#include<stdio.h>
void swap(int* a, int* b){
    int temp;
    temp = *a; 
    *a = *b;
    *b = temp;
    return ;
}

int main(){
    int n;
    int arr[100];
    /*scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        //scanf("%d", arr + i);
    }*/
    int a = 1; int b = 2;
    printf("a = %d | b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d | b = %d\n", a, b);
    return 0;
}
