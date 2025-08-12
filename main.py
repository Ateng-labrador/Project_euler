for i in range(1,10):
    if i % 2 != 0:
        continue
    

def factorial(n):
    if n <= 1:
        return 1
    else:
        return n*factorial(n-1)


print(factorial(5))