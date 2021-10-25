a, b = map(int, input().split())
arr = []
for i in range(1, 50):
    for _ in range(i):
        arr.append((i))

res = 0
for k in range(a-1, b):
    res += arr[k]

print(res)