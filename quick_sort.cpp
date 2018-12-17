/*************************************************************************
	> File Name: quick_sort.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 六 12/15 20:19:18 2018
 ************************************************************************/

#include <stdio.h>
#define MAX 100000
#define swap(a, b) {\
    __typeof(a) __temp = a;\
    a = b;\
    b = __temp;\
}
void quick_sort(int *num, int l, int r){
    while(l < r){
        int x = l, y = r, z = num[(l + r) >> 1];
        do{
          while(x <= y && num[x] < z) x++;
          while(x <= y && num[y] > z) y--;
          if(x <= y){
              swap(num[x], num[y]);
              ++x, --y;
          }
        } while(x <= y);
        quick_sort(num, x, r);
        r = y;
    }
    return ;
}

void output(int *num, int n){
    int i;
    for(i = 0; i < n - 1; i++){
        printf("%d ", num[i]);
    }
    printf("%d\n", num[i]);
    return ;
}


int main() {
    int n;
    int num[MAX + 5] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    quick_sort(num, 0, n - 1);
    output(num, n);
    return 0;
}
