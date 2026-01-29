import array, math
from typing import Any, Callable, Dict, Generator, Generic, List
from typing import Optional, Protocol, TypeVar, cast




def popcount(x :int) -> int:
    """
    menghitung angka 1 dala representasi
    angka binary
    """
    return bin(x).count("1")


def is_square(x : int) -> bool:
    """
    Test apakah x adalah kuadrat yang pas
    """
    if x < 0:
        return False
    y : int = math.isqrt(x)
    return y * y == x


def is_prime(x : int) -> bool:
    """Test apakah bilangan prima"""
    if x <= 1:
        return False
    elif x <= 3:
        return True
    elif x % 2 == 0:
        return False
    else:
        for i in range(3, math.isqrt(x) + 1, 2):
            if x % i == 0:
                return False
        return True


def list_primality(n: int) -> list[bool]:
    """Memberikan list untuk bool list true false"""
    result: list[bool] = [True] * (n + 1)
    result[0] = result[1] = False
    for i in range(math.isqrt(n) + 1):
        if result[i]:
            for j in range(i * i, len(result), i):
                result[j] = False
    return result


def list_primes(n: int) -> list[int]:
    return [i for (i, is_prime) in enumerate(list_primality(n)) if is_prime] 


def prime_generator(limit: int) -> Generator[int, None, None]:
    if limit >= 2:
        yield 2

    isprime: array.array[int] = array.array("B", b"\x01" * ((limit - 1) // 2))
    sieveend: int = math.isqrt(limit)
    for i in range(len(isprime)):
        if isprime[i] == 1:
            p: int = i * 2 + 3
            yield p
            if i <= sieveend:
                for j in range((p * p - 3) >> 1, len(isprime), p):
                    isprime[j] = 0


def list_smallest_prime_factors(n : int) -> list[int]:
    result: list[Optional[int]] = [None] * (n + 1)
    limit = math.isqrt(n)
    for i in range(2, len(result)):
        if result[i] is None:
            result[i] = i
            if i <= limit:
                for j in range(i * i, n + 1, i):
                    if result[j] is None:
                        result[j] = i
    return cast(list[int], result)


def list_totients(n: int) -> list[int]:
    result: list[int] = list(range(n + 1))
    for i in range(2, len(result)):
        if result[i] == i:
            for j in range(i, len(result), i):
                result[j] -= result[j] // i
    return result


E = TypeVar("E", bound="_Comparable")

class _Comparable(Protocol):
    def __lt__(self: E, other: E) -> bool: ...
    def __le__(self: E, other: E) -> bool: ...
    def __gt__(self: E, other: E) -> bool: ...
    def __ge__(self: E, other: E) -> bool: ...


def next_permutation(arr: List[E]) -> bool:
    i: int = len(arr) - 1
    while i > 0 and arr[i - 1] >= arr[i]:
        i -= 1
    if i <= 0:
        return False

    j: int = len(arr) - 1
    while arr[j] <= arr[i - 1]:
        j -= 1
    arr[i - 1], arr[j] = arr[j], arr[i - 1]
    arr[i : ] = arr[len(arr) - 1 : i - 1 : -1]
    return True

print(next_permutation(5))
