n = int(input())
arr = list(map(int,input().split()))
arr.sort()
res = 0
result = []
for i in arr:
    res = res + i
    result.append(res)

print(sum(result))