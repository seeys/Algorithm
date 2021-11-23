arr = []
res = []
cnt = 0
for _ in range(8):
    arr.append(int(input()))

for _ in range(5):
    k = arr.index(max(arr))
    cnt += max(arr)
    res.append(k+1)
    arr[k] = -1
res = sorted(res)
print(cnt)
for i in res:
    print(i,end=' ')