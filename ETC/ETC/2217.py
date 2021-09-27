n = int(input())
arr = []
for _ in range(n):
    k = int(input())
    arr.append(k)

arr.sort()
res = []
s = n
for i in range(n):
    res.append(arr[i] * s)
    s = s - 1

print(max(res))
