import math

test = int(input())

for _ in range(test):
    a, b = map(int, input().split())
    print("{0} {1}".format(math.lcm(a, b), math.gcd(a, b)))
