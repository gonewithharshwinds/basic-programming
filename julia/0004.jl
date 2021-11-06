#Simple Interest Python Program

function Interest(p,n,r)
    return(p*n*r/100)
end

print("Principle amount? \n") 
p = parse(Int, readline())
print("No. of years number? \n") 
n = parse(Int, readline())
print("Rate of interest? \n") 
r = parse(Int, readline())
println("Simple Interest: ", Interest(p,n,r))