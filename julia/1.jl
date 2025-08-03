function factorial(x)
    v = 0
    for i in 1:x-1
        if i % 3 == 0 || i % 5 == 0
            v += i
            # push!(v,i)
        end
    end
    return v
end


println(factorial(1000))
