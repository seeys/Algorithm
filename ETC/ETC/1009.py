t = int(input())

for _ in range(t):
    a, b = map(int,input().split())
    res = pow(a,b,10)
    if res:
        print(res)
    else:
        print(10)