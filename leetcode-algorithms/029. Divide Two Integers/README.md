# Divide Two Integers

这道题目是非常有意思的，目的是实现除法操作，但是不能够使用乘、除以及取模操作，那么用什么呢？使用位运算。

* 计算整除数

以15除以3为例,multiple = 1

1. 15-3=12 > 0 
2. 15-6=9 > 0 multiple << 1 = 2
3. 15-12=3 > 0 multiple << 1 = 4
4. 15-24=-9 < 0 终止
5. 15 - 12 = 3
6. 3>=3 ---> 3-3=0 终止

这里需要注意的是，溢出问题

32位机器上最大为 2<<30-1, 最小为 -(2<<30)



