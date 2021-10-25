import math
n = int(input())
arr = input().split()
arr = list(map(int, arr))

k = arr[0]
for i in arr[1:]:
    res = math.gcd(k, i)
    print("{0}/{1}".format(k//res,i//res))