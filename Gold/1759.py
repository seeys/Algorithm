from itertools import combinations

l, c = map(int, input().split())
arr = list(map(str,input().split()))
m = ['a','e','i','o','u']
arr.sort()
comb = combinations(arr, l)

for i in comb:
    ja = 0
    mo = 0
    for j in range(l):
        if i[j] in m:
            mo = mo + 1
        else:
            ja = ja + 1
    if mo >= 1 and ja >= 2:
        print(''.join(i))
