function fibonanci(x)
    if x <= 1
        return x
    else
        return fibonanci(x-1)+fibonanci(x-2)
    end
end

# fibonanco list
function fibonanci_list(x)
    v = [0,1]
    for i in 3:x
        push!(v,v[i-1]+v[i-2])
    end
    return v
end

function even_fibonanci(v)
    result = Int[]
    for i in v
        if i % 2 == 0
            push!(result,i)
        end
    end
    return result 
end

fiblist = fibonanci_list(10)
even = even_fibonanci(fiblist)
println(even)