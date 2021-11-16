n = int(input())
arr = list(map(int, input().split()))
res = set(arr)
res = sorted(res)
for i in res:
    print(i, end=" ")