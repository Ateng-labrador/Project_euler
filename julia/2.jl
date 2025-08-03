function fibonanci(x)
    v = Int[]
    if x <= 1
        return x
    else
        return fibonanci(x-1)+fibonanci(x-2)
    end
end

println(fibonanci(10))