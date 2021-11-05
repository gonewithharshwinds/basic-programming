#Simple Interest Python Program

def Interest(p,n,r) :
    SI=(p*n*r/100)
    return(SI)

p=input("Enter Principle :")
n=input("\nEnter Duration :")
r=input("\nEnter Interest Rate :")
print("\nSimple Interest generated is:",Interest(p,n,r))

