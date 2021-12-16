t = int(input())
for _ in range(t):
    n = int(input())
    d = {}
    for _ in range(n):
        x, y = input().split()
        if y in d.keys():
            d[y].append(x)
        else:
            d[y] = [x,""]
    cnt = 1
    for i in d.keys():
        cnt *= len(d[i])
    print(cnt-1)