n, k, i = map(int,input().split())
res = 0
while k != i:
    k = (k+1)//2
    i = (i+1)//2
    res += 1

print(res)