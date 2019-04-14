#!/usr/bin/env python
# coding=utf-8

import numpy as np
import matplotlib.pyplot as plt

plt.figure(1) # 创建图表1
x = np.linspace(0, 7, 600) # 在0--6范围之间，生成300个点
y1 = [10**z for z in x]    # 得到 f(n) 函数的 y 值数组
nineM = reduce(lambda a, b : a * b, xrange(1, 10))
y2 = [nineM*z for z in x] # 得到 g(n) 函数的 y 值数组

plt.figure(1)
plt.title('f(n) vs g(n)')
p1 = plt.plot(x, y1, label="$f(n)=10^n$");
p2 = plt.plot(x, y2, label="$g(n)=9! * n$");
plt.xlabel('n digits')
plt.ylabel('num value')

plt.legend() # 显示图例
plt.show() # 显示图表
