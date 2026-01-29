def power(n):
    num = 2**n
    sum = 0
    for i in str(num):
        sum += int(i)
    return sum

print(power(1000))