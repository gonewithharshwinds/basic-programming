#sum of two numbers

function sum(a,b)
    return(a+b)
end

print("First number? \n") 
a = parse(Int, readline())
print("Second number? \n") 
b = parse(Int, readline())
println("Sum: ", sum(a,b))