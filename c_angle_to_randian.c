/*************************************************************************
	> File Name: c_angle_to_randian.c
	> Author: Mendy
	> Mail: dolai_c@163.com
    > Course:角度转化为弧度 
	> Created Time: 三  1/ 9 15:29:38 2019
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main(){
    double a;
    while(scanf("%lf", &a) != EOF){
        printf("%lf\n", a / 180 *PI);
    }
    return 0;
}
