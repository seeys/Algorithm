import math
n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))

g = []
for i in range(0, n-1):
    g.append(arr[i+1]-arr[i])
k = g[0]
for i in range(1,len(g)):
    k = math.gcd(k,g[i])

res = 0
for j in g:
    res += j // k - 1

print(res)