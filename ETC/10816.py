import sys
n = int(sys.stdin.readline().strip())
arr = list(map(int,sys.stdin.readline().split()))
m = int(sys.stdin.readline().strip())
res = list(map(int,sys.stdin.readline().split()))
d = {}
for i in arr:
    if i in d:
        d[i] += 1
    else:
        d[i] = 1

for i in res:
    if i in d:
        print(d[i], end=' ')
    else:
        print(0,end=' ')