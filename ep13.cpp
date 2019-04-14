/*************************************************************************
	> File Name: ep13.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 三  1/16 20:19:52 2019
 ************************************************************************/

#include<stdio.h>
#include <string.h>
int main(){
    char read_num[55];
    int ans[55] = {0};
    while(scanf("%s", read_num) != EOF){
        int len = strlen(read_num);
        if(len > ans[0]) ans[0] = len;
        for(int i = 0; read_num[i]; i++){
            ans[len - i] += read_num[i] - '0';
        }
        for(int j = 1; j <= ans[0]; j++){
            if(ans[j] >= 10){
                ans[j + 1] += ans[j] / 10;
                ans[j] %= 10;
                if(j == ans[0]) ans[0]++;//ans[0] += (j == ans[0]);
            }
        }
    }
    for(int i = ans[0]; i > ans[0] - 10; i--){
        printf("%d", ans[i]);
    }
    printf("\n");
    return 0;
}
