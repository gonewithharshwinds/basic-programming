#Print digit pattern

def printfun(n) :
    for i in n:
        print("|", end = "")
        print("*" * int(i))    
n = input("\nEnter Number:")
printfun(n)