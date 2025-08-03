function fibonanci(x)
    if x <= 1
        return x
    else
        return fibonanci(x-1)+fibonanci(x-2)
    end
end


# fibonanco list
function fibonanci_list(x)
    v = Int[0,1]
    for i in 3:x
        push!(v,v[i-1]+v[i-2])
    end
    return v
end
println(fibonanci_list(10))