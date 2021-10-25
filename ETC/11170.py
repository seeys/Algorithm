t = int(input())
for _ in range(t):
    n, m = map(int,input().split())
    arr = []
    for i in range(n,m+1):
        arr.append(i)
    arr = list(map(str,arr))
    cnt = 0
    for c in arr:
        cnt = cnt + c.count('0')
    print(cnt)
