/*************************************************************************
	> File Name: a.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 六  1/26 14:36:48 2019
 ************************************************************************/

 #include <stdio.h>

#include <stdlib.h>
int n = 0;
void swap(int *a, int *b){
    int m;
    m = *a;
    *a = *b;
    *b = m;
}
void perm(int list[], int k, int m){
    int i;
    if(k > m) {
        for(i = 0; i <= m; i++)
        printf("%d ", list[i]);
        printf("\n");
        n++;
    } else {
        for(i = k; i <= m; i++){
            swap(&list[k], &list[i]);
            perm(list, k + 1, m);
            swap(&list[k], &list[i]);
        }
    }
}
int main(){
    int k;//输入自然数的个数
    printf("请输入连续自然数的个数：");
    scanf("%d",&k);
    int *list = (int *)malloc(k);
    for (int i = 0; i < k; i ++){
        list[i] = i + 1;
    }
    // int list[] = {1, 2, 3, 4, 5};
    perm(list, 0, k-1);
    printf("total:%d\n", n);
    return 0;
}
