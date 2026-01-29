# [::-1] balik list
# mencari palindrom terbesar yang merupakan hasil kali
# dua bilangan 3 digit (100-99)

def computer_2():
    terbesar = 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            x = i * j
            if str(x) == str(x)[::-1] and x > terbesar:
                terbesar = x
    return terbesar

if __name__ == "__main__":
    print(computer_2())