#!/bin/python3
#https://www.hackerrank.com/challenges/30-binary-numbers/problem
import math
import os
import random
import re
import sys

if __name__ == '__main__':
    n = int(input())
    a = []
    result = 0
    max = 0
    i=0
    while int(n) != 0:
        i += 1
        a.append(n % 2)
        n = n / 2
    temp = len(a)
    for i in range(temp):
        if int(a[i]) != 0:
            max += 1
        else:
            max = 0
        if result < max:
            result = max
        else:
            result = result
    print(result)

