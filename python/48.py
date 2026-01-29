def compute():
    res = 0
    for i in range(990, 1000 + 1):
        if i == 0:
            continue
        x = i**i
        res += x
    return res

def compute_1():
    pass


if __name__ == "__main__":
    print(pow())