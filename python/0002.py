#Factorial of a number

def factorial (n):
    return 1 if (n==1or n==0) else n*factorial(n-1)
n=input("Enter Number")
print("Factorial of",n,"is",factorial(n))
