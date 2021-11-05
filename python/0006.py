#Compound interest

def CI(p,n,r) :
    CI = p * [(pow((1 + r / 100), n)) - 1]

p=input("Enter Principle :")
n=input("\nEnter Duration :")
r=input("\nEnter Interest Rate :")
print("\nCompound Interest generated is:",CI(p,n,r))