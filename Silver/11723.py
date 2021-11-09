import sys
m = int(sys.stdin.readline())
res = [False] * 21
for _ in range(m):
    s = list(map(str, sys.stdin.readline().split()))
    if s[0] == "add":
        k = int(s[1])
        if res[k] == False:
            res[k] = True
    elif s[0] == "remove":
        k = int(s[1])
        if res[k] == True:
            res[k] = False
    elif s[0] == "check":
        k = int(s[1])
        if res[k] == True:
            print("1")
        else:
            print("0")
    elif s[0] == "toggle":
        k = int(s[1])
        if res[k] == True:
            res[k] = False
        else:
            res[k] = True
    elif s[0] == "all":
        res.clear()
        res = [True] * 21
    elif s[0] == "empty":
        res.clear()
        res = [False] * 21
