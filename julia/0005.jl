#Print digit pattern

print("Enter number? \n") 
n = parse(Int, readline())
for i in 1:n
    for j in 1:i 
        print(i, " ")
    end
    println()
end
