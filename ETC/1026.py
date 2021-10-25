n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = []
a.sort()
b.sort(reverse=True)

for i in range(0,n):
    c.append(a[i] * b[i])

print(sum(c))
