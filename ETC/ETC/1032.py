n = int(input())
arr = []
for _ in range(n):
    arr.append(input())

k = len(arr[0])
res = ''
if n == 1:
    print(arr[0])
else:
    for i in range(k):
        cnt = 0
        for j in arr[1:]:
            if arr[0][i] in j[i]:
                cnt += 1
            else:
                res += '?'
                break
        if cnt == n - 1:
            res += j[i]

    print(res)



