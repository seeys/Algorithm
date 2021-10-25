res0 = [1, 0]
res1 = [0, 1]

for i in range(2, 41):
    res0.append(res0[i-1]+res0[i-2])
    res1.append(res1[i-1]+res1[i-2])

t = int(input())

for _ in range(t):
    k = int(input())
    print(res0[k],res1[k])
