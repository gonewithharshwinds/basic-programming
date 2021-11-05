# Checkerbox using numpy

import numpy as np

def printfun(n) :
    print("Pattern :\n")
    x = np.zeros((n,n)), dtype = int)
    x[1::2, 0::2] = 1
    x[0::2, 1::2] = 1
    for i in range(n):
        for j in range(n):
            print(x[i][j], end =" ")
        print() 

n = input("Enter size :\n")
printfun(n)