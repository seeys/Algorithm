x, y = map(int, input().split())


def Rev(n):
    n = str(n)
    n = "".join(reversed(n))
    return int(n)


print(Rev(Rev(x) + Rev(y)))
