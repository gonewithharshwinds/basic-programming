#perfect number check

def perfect(n) :
    sum = 1
    i = 2
    while i*i <= n:
        if n % i == 0:
            sum = sum + i + n/i
        i += 1
    return (1 if sum == n and n != 1 else 0)

n = input("Enter Perfect Number :")
if perfect(n) == 1 :
    print(n , " is a perfect number")
else :
    print(n , " is not a perfect number")