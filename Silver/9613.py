import math
t = int(input())

for _ in range(t):
    arr = list(map(int, input().split()))
    n = arr[0]
    res = 0
    for i in range(1,len(arr)-1):
        for j in range(i+1,len(arr)):
            res += math.gcd(arr[i],arr[j])
    print(res)