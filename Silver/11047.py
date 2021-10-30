n, k = map(int, input().split())
arr = []
for _ in range(n):
    arr.append(int(input()))

res = 0
while True:
    if arr[-1] > k:
        del arr[-1]
    res = res + k // arr[-1]
    k = k % arr[-1]
    del arr[-1]
    if k == 0:
        break

print(res)