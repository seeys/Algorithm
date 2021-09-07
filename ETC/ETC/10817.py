l = list(map(int, input().split()))

m = max(l)
del l[l.index(m)]

print(max(l))
