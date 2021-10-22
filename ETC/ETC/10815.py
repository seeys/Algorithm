import sys
n = int(sys.stdin.readline().strip())
arr = set(map(int,sys.stdin.readline().split()))
m = int(sys.stdin.readline().strip())
res = list(map(int,sys.stdin.readline().split()))

for i in res:
    if i in arr:
        print("1", end=' ')
    else:
        print("0", end=' ')