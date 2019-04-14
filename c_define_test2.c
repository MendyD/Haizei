/*************************************************************************
	> File Name: c_define_test2.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 三  1/ 9 20:47:48 2019
 ************************************************************************/

#include<stdio.h>
#define DEBUG
#ifdef DEBUG
#define P(a) ({\
    printf("%s : %d\n", #a, a);\
})
#else 
#define P(a) ()
#endif

#define MAX(a, b) ({\
    __typeof(a) __a = a;\
    (__a) > (b) ? (__a) : (b);\
})


int main(){
    int a = 7;
    P(MAX(2, 3));
    P(5 + MAX(2, 3));
    P(MAX(2, MAX(3, 4)));
    P(MAX(2, 3 > 4 ? 3 : 4));
    P(MAX(a++, 6));
    P(a);
    return 0;
}
