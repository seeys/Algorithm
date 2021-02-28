from collections import Counter
import sys
input = sys.stdin.readline
n  = int(input())
a = []

for _ in range(n):
    k = int(input())
    a.append(k)

a.sort()
print(round(sum(a)/n))
print(a[n//2])

many = Counter(a).most_common()
if len(a) > 1:
    if many[0][1] == many[1][1]:
        print(many[1][0])
    else:
        print(many[0][0])
else:
    print(a[0])

print(a[-1] - a[0])
