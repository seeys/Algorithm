s = int(input())
k = 0
res = []
for i in range(1,100000):
    k = k + i
    res.append(i)
    if k >= s:
        break


if k-s not in res:
    print(len(res))
else:
    res.remove(k-s)
    print(len(res))
