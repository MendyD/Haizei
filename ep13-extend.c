/*************************************************************************
	> File Name: ep13.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course:大数的次方n的m次方 
	> Created Time: 三  1/16 20:19:52 2019
 ************************************************************************/

#include<stdio.h>
#include <string.h>
int main(){
    int n, m;
    while(scanf("%d %d", &n, &m) != EOF){
        int ans[50] = {0};
        ans[0] = ans[1] = 1;
        for(int i = 1; i <= m; i++){
            for(int i = 1; i <= ans[0]; i++){
                ans[i] *= n;
            }
            for(int j = 1; j <= ans[0]; j++){
                if(ans[j] < 10) continue;
                ans[j + 1] += ans[j] / 10;
                ans[j] %= 10;
                ans[0] += (j == ans[0]);
            }	
        }
        for(int i = ans[0]; i > 0; i--){
            printf("%d", ans[i]);
        }
        printf("\n");
    }
    return 0;
}
