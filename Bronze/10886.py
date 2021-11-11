n = int(input())
res = []
for _ in range(n):
    res.append(int(input()))

if res.count(1) > n//2:
    print("Junhee is cute!")
else:
    print("Junhee is not cute!")