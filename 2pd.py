#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Jan 23 22:22:24 2022

@author: bhaveshjain
"""

import time
n=512
m1=[[2.1 for i in range(n)]for j in range(n)]
m2=[[2.1 for i in range(n)]for j in range(n)]
m=[[0 for i in range(n)]for j in range(n)]

start=time.time()
for i in range(n):
    for j in range(n):
        for k in range(n):
            m[i][j]=m1[i][k]*m2[k][j]
    
end=time.time()

#double not in python

print("Data type: float")
print("N=", n)
print("Time required for meat portions of the time:", end-start)
