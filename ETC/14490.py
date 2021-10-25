import math

n = input()
arr = n.split(":")
arr = list(map(int, arr))

k = math.gcd(arr[0], arr[1])
res = []
for c in arr:
    res.append(c//k)

print("{0}:{1}".format(res[0], res[1]))