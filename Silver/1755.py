number = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
alpha = ['zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine']

m, n = map(int,input().split())
arr = []
for i in range(m, n+1):
    x = i // 10
    y = i % 10
    if x == 0:
        arr.append(alpha[y])
    else:
        arr.append((alpha[x]+' '+alpha[y]))
arr = sorted(arr)
res = []
for k in arr:
    a = k.split(' ')
    if len(a) == 1:
        res.append(alpha.index(a[0]))
    else:
        p = str(alpha.index(a[0]))+str(alpha.index(a[1]))
        res.append(int(p))

for j in range(len(res)):
    if j % 10 == 0 and j!=0:
        print(sep='\n')
    print(res[j],end=' ')