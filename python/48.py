# pow() a^b mod c
# dalam ilmu komputer yang penting presisi

# karna angka nya terlalu besar ambil digit terakhirnya
def compute():
    res = 0
    for i in range(1, 10):
        if i == 0:
            continue
        x = i**i
        res += x
    return res


def list():
    list = []
    for i in range(1, 10):
        x = i**i
        list.append(x)
    return list


def compute_1():
    MOD = 10**10
    ans = sum(pow(i, i, MOD) for i in range(1, 1001)) % MOD
    return str(ans)


def computer():
    MOD = 10**10
    res = 0
    for i in range(1, 1001):
        res = (res + pow(i, i, MOD)) % MOD
    return str(res)


if __name__ == "__main__":
    print(computer())