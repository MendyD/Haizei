/*************************************************************************
	> File Name: b.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 六 12/15 18:53:18 2018
 ************************************************************************/
#include<string.h>
#include<stdlib.h>
#include <stdio.h>
//定义函数判断输入的数能否被当前数整除
//思想就是上一位取余数*10加上当前位除以i，一直到所有位判断完毕；
//也就是手算除法的模拟过程
int mod(char a[], int b)
{
	int len = strlen(a);
	int ans = 0;
	for (int i = 0; i < len; i++)
		ans = (ans * 10 +( a[i])-'0') %b;
	return ans;
}
int main()
{
	char str[51];
	while (scanf("%s", str) != EOF)
	{
		int flag = 0;
		for (int i = 2; i <= 9; i++)
		{
			if (mod(str, i) == 0)
			{
				if (flag == 0)
				{
					printf("%d ", i);
					flag = 1;
				}
				else {
					printf("%d ", i);
				}
			}
		}
		if (flag == 0) {
			printf(" none\n");
		}
	}
	return 0;
 
}
 
 

