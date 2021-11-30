import collections
t = int(input())
arr = []
for _ in range(t):
    arr.append(input())
arr.sort()
res = collections.Counter(arr)
print(res.most_common(1)[0][0])