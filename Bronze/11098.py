t = int(input())

for _ in range(t):
    dic = {}
    p = int(input())
    for i in range(p):
        v, k = input().split()
        dic[k] = int(v)
    m = max(dic, key=dic.get)
    print(m)
    m = 0